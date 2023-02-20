#include "functions.h"
// #include <time.h>

int current_time() {
    int hours, minutes, seconds;

    time_t now;

    // Получить текущее время
    // `time()` возвращает текущее время системы как значение `time_t`
    time(&now);
 
    struct tm *local = localtime(&now);

    hours = local->tm_hour;         
    minutes = local->tm_min;
    seconds = local->tm_sec;      
    // printf("%d %d", hours, minutes);

    return hours * 3600 + minutes * 60 + seconds;
}

int input_remind() { // эта функция слишком ломанно работает, нужно поделить на две (одна для заметки, другая для времени)

    char remind = '0', index = 0;
    char *data = NULL;
    data = (char*) malloc (sizeof(char)); // не уверен,что это правильно    // все ок, ток тип должен быть  char*, а не int*, так как data имеет тип char*
    printf("Введите напоминание:  ");

    while (remind != '\n') {
        data[index] = scanf("%c", &remind);
        data = realloc(data, (index + 1) * sizeof(char));   // перевыдыляем память с у четом кол-во index
        index++;
    }
    return index;
}

int input_time() {
    int hours = 0, minutes = 0;
    int flag = 1;

     printf("\nВведите время напоминания:\n");
    do {
        scanf("%d", &hours);

        if (hours > 24 || hours < 0) {
            printf("\nошибка ввода\n");
        } else {
            printf(":");
            scanf("%d", &minutes);
            if (minutes > 60 || minutes < 0) {
                printf("\nошибка ввода\n");
            } else {
                flag = 0;
            }
        }
        
        
    } while (flag == 1);

    // printf("%d : %d", hours, minutes);
    return hours * 3600 + minutes * 60;
}
