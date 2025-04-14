#include <stdio.h>
#include <stdlib.h>

struct date
{
    int day;
    int month;
    int year;
};

int main(){

    struct date today, *datePtr;

    datePtr = &today;

    datePtr->day = 25;
    datePtr->month = 9;
    datePtr->year = 2015;

    printf("Today;s date is %d/%d/%d\n", datePtr->day, datePtr->month, datePtr->year);

    return 0;
}