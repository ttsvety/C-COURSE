#include <stdio.h>

int main(){

    _Bool a = 1;
    _Bool b = 0;
    _Bool result, result1, result2;

    result = a && b;
    result1 = a || b;
    result2 = !a;

    printf("%d\n", result);
    printf("%d\n", result1);
    printf("%d\n", result2);

    return 0;
}