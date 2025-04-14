#include <stdio.h>
#include <stdlib.h>

struct intPtrs
{
    int *p1;
    int *p2;
};

int main(){

    struct intPtrs pointer;

    int i1 = 100, i2;

    pointer.p1 = &i1;
    pointer.p2 = &i2;
    *pointer.p2 = -97;

    printf("i1 = %d, *pinter.p1 = %d\n", i1, *pointer.p1);
    printf("i2 = %d, *pinter.p2 = %d\n", i2, *pointer.p2);

    return 0;
}