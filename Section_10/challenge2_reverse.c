#include <stdio.h>
#include <string.h>

int main(){
    char myString[100];
    
    printf("Enter your string: ");
    scanf("%s", myString);

    int count = strlen(myString);

    while ((count-1)>=0)
    {
        printf("%c", myString[count-1]);
        count--;
    }

    return 0;
}