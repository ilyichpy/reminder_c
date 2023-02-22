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
    printf("Введите напоминание: \t");
    FILE *fp = fopen(name, "a");  //сделаем все проще, будем записывать в файл, в назначенное время будем открывать этот файл.
    scanf("\n%c", &remind);
    while (remind != '\n') {
        fputc(remind, fp);
        scanf("%c", &remind);
    }
    fclose(fp);
    printf("%c", remind);
}

int input_time() {
    int flag = 1;
    int hours = 0, minutes = 0;
     printf("\nВведите время напоминания: часы минуты\n");
    do {
        scanf("%d %d", &hours, &minutes);
        printf("\n%d %d", hours, minutes);

        if (hours > 24 || hours < 0) {
            printf("\nошибка ввода\n");
        } else {
            if (minutes > 60 || minutes < 0) {
                printf("\nошибка ввода\n");
            } else {
                flag = 0;
                break;
            }
        }
    } while (flag == 1);

    return hours * 3600 + minutes * 60;
}
