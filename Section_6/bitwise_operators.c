#include <stdio.h>

int main(){ 

    unsigned int a = 60; //0011 1100
    unsigned int b = 13; //0000 1101
    int result, result1, result2, result3, result4, result5;

    result = a & b; // 0000 1100
    result1 = a | b; // 0011 1101  
    result2 = a ^ b; // 0011 0001
    result3 = ~a; // 1100 0011
    result4 = a << 4; // 1100 0000
    result5 = a >> 4; //0000 0011

    printf("result is: %d\n", result);
    printf("result is: %d\n", result1);
    printf("result is: %d\n", result2);
    printf("result is: %d\n", result3);
    printf("result is: %d\n", result4);
    printf("result is: %d\n", result5);

    return 0;
}