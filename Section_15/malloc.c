#include <stdio.h>
#include <stdlib.h>

int main(){
    //int *pNumber = (int*)malloc(100);

    int *pNumber = (int*)malloc(25*sizeof(int));
    if(pNumber == NULL){
        printf("Not enough space");
        exit(1);
    }

    free(pNumber);
    pNumber = NULL;

    return 0;
}