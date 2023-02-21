#include "functions.h"

int current_time() {
    int hours, minutes, seconds;

    time_t now;

    time(&now);
 
    struct tm *local = localtime(&now);

    hours = local->tm_hour;         
    minutes = local->tm_min;
    seconds = local->tm_sec;      

    return hours * 3600 + minutes * 60 + seconds;
}

void input_remind(char *name) {

    char remind = '0';
    printf("Введите напоминание:  ");
    FILE *fp = fopen(name, "a");  //сделаем все проще, будем записывать в файл, в назначенное время будем открывать этот файл.

    while (remind != '\n') {
        scanf("%c", &remind);
        fputc(remind, fp);
    }
}

int input_time() {
    int hours = 0, minutes = 0;
    int flag = 1;

     printf("\nВведите время напоминания: часы минуты\n");
    do {
        scanf("%d %d", &hours, &minutes);

        if (hours > 24 || hours < 0) {
            printf("\nошибка ввода\n");
        } else {
            if (minutes > 60 || minutes < 0) {
                printf("\nошибка ввода\n");
            } else {
                flag = 0;
            }
        }
        
        
    } while (flag == 1);

    return hours * 3600 + minutes * 60;
}
