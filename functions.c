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

    char input_remind(char *name) { // эта функция слишком ломанно работает, нужно поделить на две (одна для заметки, другая для времени)

    char index = 0, remind = '0';
    int counter = 0;
    printf("Введите напоминание:  ");
    FILE *fp = fopen(name, "w");  //сделаем все проще, будем записывать в файл, в назначенное время будем открывать этот файл.

    while (remind != '\n') {
        scanf("%c", &remind);
        fputc(remind, fp);
        index++;
        counter++;
    }
    return FILE *fp;
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
