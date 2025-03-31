#include <stdio.h>

int main(){

    long value = 999L;
    const long *pvalue = &value;    //Defines a pointer to a constant so the vaue what points to  cannot be changed

    //*pvalue = 888L;    // Error

    value = 888L;

    long number = 1000L;
    pvalue = &number; //Ok- changes the address

    //!!!//The const (in first word) is the value that pointer points to and we can modify it without using pointer

    return 0;
}