#include <stdio.h>

void square_num(int *pnum);

int main(){

    int a= 5;
    int b = 6;
    int c = 100;

    printf("Before square, value of a: %d\n", a);
    printf("Before square, value of b: %d\n", b);
    printf("Before square, value of b: %d\n", c);

    square_num(&a);
    square_num(&b);
    square_num(&c);

    printf("After square, value of a: %d\n", a);
    printf("After square, value of b: %d\n", b);
    printf("After square, value of b: %d\n", c);


    return 0;
}

void square_num(int *pnum){
    *pnum = (*pnum) * (*pnum);
}