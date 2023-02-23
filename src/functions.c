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

int input_remind(char *name) {
    int flag = 1;
    int hours = 0, minutes = 0;

    time_t now;
    time(&now);
 
    struct tm *local = localtime(&now);
    int day = local->tm_mday;  
    int month = local->tm_mon;
    int year = local->tm_year;

    char remind = '0';
    printf("enter reminder: \t");
    FILE *fp = fopen(name, "a");
    fputc('\n', fp);
    scanf("\n%c", &remind);
    while (remind != '\n') {
        fputc(remind, fp);
        scanf("%c", &remind);
    }
    fputc('\t', fp);
    printf("%c", remind);

    printf("\nEnter reminder time: hours minutes\n");
    do {
        scanf("%d %d", &hours, &minutes);

        if (hours > 24 || hours < 0) {
            printf("\nInput Error\n");
        } else {
            if (minutes > 60 || minutes < 0) {
                printf("\nInput Error\n");
            } else {
                flag = 0;
                break;
            }
        }
    } while (flag == 1);
    fputc('\t', fp);
    if (day < 10) {
        fprintf(fp,"       0%d.", day);
    } else {
        fprintf(fp,"        %d.", day);
    }
    if (month < 10) {
        fprintf(fp,"0%d.", month);
    } else {
        fprintf(fp,"%d.", month);
    }
    fprintf(fp,"%d ", year + 1900);
    if(hours < 10) {
        fprintf(fp,"0%d:", hours);
    } else {
        fprintf(fp,"%d:", hours);
    }
    if (minutes < 10) {
        fprintf(fp,"0%d", minutes);
    } else {
        fprintf(fp,"%d", minutes);
    }
    fclose(fp);


    return hours * 3600 + minutes * 60;
}