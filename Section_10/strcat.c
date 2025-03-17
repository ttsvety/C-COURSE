#include <stdio.h>
#include <string.h>

int main(){

    char myString[] = "my string";
    char input[80];

    printf("Enter a string to be concatenated:");
    scanf("%s", input);

    printf("\nThe string %s concatenated with %s is....\n", myString, input);
    printf("%s", strcat(myString, input));

    return 0;
}