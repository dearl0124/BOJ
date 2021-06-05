#include <stdio.h>
#include <time.h>
int main()
{
    time_t timer;
    struct tm* t;

    timer = time(NULL);
    t = localtime(&timer);
    
    int year, month, day;
    year = t->tm_year + 1900;
    month = t->tm_mon + 1;
    day = t->tm_mday;
    
    printf("%d\n", year);
    printf("%d\n", month);
    printf("%d\n", day);
}
