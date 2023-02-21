#include "functions.h"
int main() {
    // int check= 1;
    int test_a = 0, test_b = 0, time_sleep = 0;
    char *file_name = "your_remind.txt";

    // while (check== 1) {

        // printf("Для записи экрана введите 1, для выхода нажмите любую кнопу\n");
        // scanf("%d", &check);

        // if (check== 1) {
            input_remind(file_name);
            test_a = input_time();
            test_b = current_time();

            //  gcc -Wall -Werror -Wextra functions.c reminder.c -o main.out  
            // было принято волевое решение не прятать окно терминала
            time_sleep = test_a - test_b;
            sleep(time_sleep + 5);
            system("\nopen your_remind.txt");
    //     }
    //     else {
    //         break;
    //     }
    // }
    return 0;
}

