#include <stdio.h>

void input();

int main() {
    input();

    return 0;
}

void input() {
    char remind = '0', time = '0';
    printf("Введите напоминание:  ");
    while (remind != '\n') {
        scanf("%c", &remind);
    }
    printf("\n Введите время напоминания: ");
    while (time != '\n') {
        scanf("%c", &time);
    }

}