#include "functions.h"

int main() {

    int test_a = 0, test_b = 0, time_sleep = 0;
    char *file_name = "your_remind.txt";

<<<<<<< HEAD

    input_remind(file_name);
    test_a = input_time(file_name);
=======
    test_a = input_remind(file_name);
>>>>>>> developer1
    test_b = current_time();
    time_sleep = test_a - test_b;
<<<<<<< HEAD
=======
    
>>>>>>> developer1
    sleep(time_sleep);
    system("open your_remind.txt");
    

    return 0;
}

