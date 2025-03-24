#include <stdio.h>
#include <string.h>

int main(){

    char str[] = "The quick brown fox";
    char ch = 'q';

    char *pGot_char = NULL;

    pGot_char = strchr(str, ch);

    printf("%s", pGot_char);

    return 0;
}