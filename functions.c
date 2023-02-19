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

int input() { // эта функция слишком ломанно работает, нужно поделить на две (одна для заметки, другая для времени)

    char remind = '0';
    int flag = '1';
    int hours = 0, minutes = 0;

    printf("Введите напоминание:  ");

    while (remind != '\n') {
        scanf("%c", &remind);
    }
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
        
        
    } while (flag == '1');

    // printf("%d : %d", hours, minutes);
    return hours * 3600 + minutes * 60;
}
