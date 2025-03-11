#include <stdio.h>

int multiplyTwoNumbers(int x, int y){
    int result = x*y;
    return result;
}

int main(){

    int result = multiplyTwoNumbers(10, 20);

    printf("result = %d\n", result);

    // multiplyTwoNumbers(20, 30);
    // multiplyTwoNumbers(50, 2);

    return 0;
}