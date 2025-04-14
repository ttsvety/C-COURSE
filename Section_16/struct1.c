#include <stdio.h>
#include <stdlib.h>

struct date
{
    int month;
    int day;
    int year;
}today2;

int main(){
    //struct date today;
    struct date today = {9, 25, 2015};
    today2 = (struct date) {.month = 7, .day = 2, .year = 2010};
    // today.month = 9;
    // today.day = 25;
    // today.year = 2015;

    printf("Today's date is %d/%d/%d.\n", today.month, today.day, today.year);
    printf("Today's date is %d/%d/%d.\n", today2.month, today2.day, today2.year);


    return 0;
}