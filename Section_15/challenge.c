#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    int limit;
    char *str = NULL;

    printf("Enter limit of caracters: ");
    scanf("%d", &limit);

    str = (char*)malloc(limit*sizeof(char));
    
    if(str == NULL){
        printf("No enough space");
        exit(1);
    }

    printf("Enter some text: ");
    scanf(" ");
    gets(str);

    printf("String = %s, Address = %p\n", str, str);

    free(str); 
    str = NULL;

    return 0;
}