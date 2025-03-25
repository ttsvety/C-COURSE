#include <stdio.h>

int main(){
    int number  = 0;
    int *pnumber = NULL;

    number = 100;
    pnumber = &number;

    printf("num's address: %p\n", &number);
    printf("pointer's address: %p\n", &pnumber);
    printf("pointer's value: %p\n", pnumber);
    printf("value that pointer is pointing to: %d\n", *pnumber);
}