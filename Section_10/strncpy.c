#include <stdio.h>
#include <string.h>

int main(){
    char myString[] = "My name is Tsvety";
    char s[100];
    // s = "hello"  // dont work
    char temp[50];

    strncpy(temp, myString, sizeof(temp)-1);
    strncpy(s, "Hello. This work\n", sizeof(s)-1);

    printf("Length os %s is %d", myString, strlen(myString));
    printf("%s\n", s);
    printf("%s\n", temp);

    return 0;
}