#include <stdio.h>

void input();

int main() {
    input();

    return 0;
}

void input() {

    char remind = '0';
    int flag = '1';
    int hours = 0, minutes = 0;

    printf("Введите напоминание:  ");

    while (remind != '\n') {
        scanf("%c", &remind);
    }
     printf("\nВведите время напоминания: ");
    do {
        char check;
        printf("nice");
        if (scanf("%d", &hours) != 1 || hours > 24 || hours < 0) {
            continue;
        } else {
            printf(":");
            if (scanf("%d%c", &minutes, &check) != 2 || minutes > 60 || minutes < 0) {
                // scanf("%d%c", &minutes, &check);
                continue;
            } else {
                flag = 0;
            }
        }
        
        
    } while (flag == '1');

    printf("%d : %d", hours, minutes);
}
