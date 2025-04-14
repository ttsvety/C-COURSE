#include <stdio.h>
#include <stdlib.h>

struct month
{
    int numberOfDays;
    char name[4];
};

int main(){

    //struct month aMonth[12];
    struct month aMonth;
    aMonth.numberOfDays = 31;
    aMonth.name[0] = 'J';
    aMonth.name[1] = 'a';
    aMonth.name[2] = 'n';

    return 0;
}