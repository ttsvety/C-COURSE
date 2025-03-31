#include <stdio.h>

int main(){

    long num1 = 0L;
    long num2 = 0L;
    long *pnum = NULL;

    pnum = &num1;   // Get the address of num1
    *pnum = 2L;     // Set num1 to 2
    num2++;         // Increment num2
    num2 += *pnum;  // Add num1 to num2
    
    pnum = &num2;   // Get the address of num2
    (*pnum)++;        // Increment num2 indirectly

    printf("num1 = %ld num2 = %ld *pnum = %ld *pnum + num2 = %ld", num1, num2, *pnum, *pnum + num2);

    return 0;
}