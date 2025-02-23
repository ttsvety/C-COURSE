#include <stdio.h>

int main(){

    int a = 33;
    int b = 15;
    int result = 0;

    result = a / b;

    printf("result is: %d\n", result);
    printf("%d\n", ++a);
    printf("%d\n", --b);

    return 0;
}