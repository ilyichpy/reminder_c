#include "functions.h"
int main() {
    int test_a, test_b, time_sleep;
    char *file_name = "your_remind.txt";
    input_remind(file_name);
    test_a = input_time();
    test_b = current_time();

    //  gcc -Wall -Werror -Wextra functions.c reminder.c -o main.out  
    // было принято волевое решение не прятать окно терминала
    time_sleep = test_a - test_b;
    sleep(time_sleep);
    FILE *fp;
    fp = fopen(file_name, "r");
    return 0;
}

