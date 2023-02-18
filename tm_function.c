#include <time.h> //здесь происходит какой-то треш, надо с этим разобраться
#include <stdio.h> 

int main() {
    int hours, minutes;

    time_t now;

    // Получить текущее время
    // `time()` возвращает текущее время системы как значение `time_t`
    time(&now);
 
    struct tm *local = localtime(&now);

    hours = local->tm_hour;         
    minutes = local->tm_min;      
    printf("%d %d", hours, minutes);
    return 0;
}