#include "functions.h"


int main() {
    int test_a, test_b;
    test_a = input(); // идея состоит в том, чтобы эта штука возвращала (часы * 60) + минуты
             // потом мы берем системное время и так же переводим в минуты
             // системное время - полученное время -- время скажем так сна
             // программа поспит нужно время, в конце откроет терминал и выведет результат!
    test_b = current_time();
    printf("%d %d", test_a, test_b);      //  gcc -Wall -Werror -Wextra functions.c reminder.c -o main.out  
    return 0;
}

