#include <stdio.h>

int main(){

    printf("Size of int: %zd\n", sizeof(int));
    printf("Size of short: %zd\n", sizeof(short));
    printf("Size of float: %zd\n", sizeof(float));
    printf("Size of char: %zd\n", sizeof(char));
    printf("Size of long: %zd\n", sizeof(long));
    printf("Size of long long: %zd\n", sizeof(long long));
    printf("Size of double: %zd\n", sizeof(double));
    printf("Size of long double: %zd\n", sizeof(long double));

    return 0;
}