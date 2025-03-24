#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){

    char buf[100];
    int nLetters = 0;
    int nDigits = 0;
    int nPuncts = 0;

    printf("Enter an interesting string of less than %d characters:\n", 100);
    fgets(buf, sizeof(buf), stdin);

    int i = 0;
    while(buf[i] != '\0'){
        if(isalpha(buf[i])){
            nLetters++;
        }
        else if(isdigit(buf[i])){
            nDigits++;
        }
        else if(ispunct(buf[i])){
            nPuncts++;
        }
        i++;
    }

    printf("\n Your string contained %d letters, %d digits and %d punctuation characters.\n", nLetters, nDigits, nPuncts);

    return 0;
}