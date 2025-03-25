#include <stdio.h>

int main(){

    int number = 0; //A variable of type int initialized to 0
    int *pnumber = NULL; //A pointer that can point to type int 

    number  = 10;
    pnumber = &number;

    printf("pnumber's value: %p\n", pnumber);  //Output the value(the address)

    printf("number's address: %p\n", &number);  //Output the address

    printf("pnumber's address: %p\n", (void*)&pnumber);  //Output the address

    printf("pnumber's size: %d bytes\n", (int)sizeof(pnumber)); //Output the size of pointer in memory

    return 0;

}