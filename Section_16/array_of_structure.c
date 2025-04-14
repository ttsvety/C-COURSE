#include <stdio.h>
#include <stdlib.h>

struct date
{
    int day;
    int month;
    int year;
};

int main(){

    struct date myDate[5] = { {12, 10, 1975}, {12, 30, 1980}, {11, 5, 2005}, [4] = {12, 10, 1975}};
    
    myDate[3].day = 21;
    myDate[3].month = 9;
    myDate[3].year = 2005;

    myDate[0].day = 21;
    myDate[0].month = 9;
    myDate[0].year = 2005;

    for(int i = 0; i < 5; i++){
        printf("The date is %d/%d/%d/\n", myDate[i].day, myDate[i].month, myDate[i].year);
    }




    return 0;
}