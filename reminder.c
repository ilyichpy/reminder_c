#include <stdio.h>

void input();

int main() {
    input();

    return 0;
}

void input() {

    char remind = '0';
    int flag = 1;
    int hours = 0, minutes = 0;

    printf("Введите напоминание:  ");

    while (remind != '\n') {
        scanf("%c", &remind);
    }

    while (flag == 1) {
        printf("\n Введите время напоминания: ");

        char check;

        if (scanf("%d%c", &hours, &check) != 2) {
            flag = 1;
        } else {
            printf(":");
            if (scanf("%d%c", &minutes, &check) != 2) {
                flag = 1;
            } else {
                flag = 0;
            }
        }
    }

    printf("%d %d", hours, minutes);
}
