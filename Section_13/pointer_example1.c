#include <stdio.h>

int main(){

    int number = 0;
    int *pnumber = NULL;
    number = 10;
    pnumber = &number;

    printf("Value of pnumber: %p  which points to %d\n", pnumber, *pnumber);

    *pnumber += 25;  //number += 25

    printf("Value of pnumber: %p  which points to %d\n", pnumber, *pnumber);

    return 0;
}