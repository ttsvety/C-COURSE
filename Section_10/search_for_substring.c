#include <stdio.h>
#include <string.h>

int main(){

    char text[] = "Every dog has his day";
    char new_text[] = "Every Dog has his day";
    char word[] = "dog";

    char *pFound = NULL;

    pFound = strstr(text, word);
    printf("%s\n", pFound);

    pFound = strstr(new_text,word);
    printf("%s", pFound);

    return 0;
}