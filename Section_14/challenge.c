#include <stdio.h>

int stringLength(const char *ptr){

    const char *lastAddress = ptr;
    int length = 0;

    while(*lastAddress!='\0'){
        lastAddress++;
    }
    length = lastAddress - ptr;
    return length; 
}
int main(){

    char string[] = "Hello, World!";
    int length = stringLength(string);
    printf("%d\n", length);

    return 0;
}