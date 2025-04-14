#include <stdio.h>
#include <stdlib.h>

int main(){
    int *pNumber = (int*)calloc(75, sizeof(int));

    if(pNumber == NULL){
        printf("There is no eough space");
        exit (1);
    }

    free(pNumber);
    pNumber = NULL;

    return 0;
}