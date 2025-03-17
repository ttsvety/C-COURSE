#include <stdio.h>

int main(){
    char str1[] = "To be or not to be";
    char str2[] = ", that is the question";

    unsigned int count = 0; //Stores the string length

    while(str1[count] != '\0'){
        count++;
    }

    printf("The lengt of the string \"%s\" is %d characters.\n", str1, count);

    count = 0; // Reset count for the next string 

    while(str2[count] != '\0'){
        count++;
    }

    printf("The lengt of the string \"%s\" is %d characters.\n", str2, count);

    return 0;
}

