#include <stdio.h>

void input();

int main() {
    input(); // идея состоит в том, чтобы эта штука возвращала (часы * 60) + минуты
             // потом мы берем системное время и так же переводим в минуты
             // системное время - полученное время -- время скажем так сна
             // программа поспит нужно время, в конце откроет терминал и выведет результат!
    return 0;
}

void input() { // эта функция слишком ломанно работает, нужно нормально отслеживать ввод :(

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

    printf("%d : %d", hours, minutes);
}
