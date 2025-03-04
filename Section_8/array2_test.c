#include <stdio.h>

#define MONTHS 12

int main(){

    int days[MONTHS] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    for(int index = 0; index<MONTHS; index++){
        printf("Month %d has %2d days.\n", index+1, days[index]);
    }

    printf("\n\n");
    
    int day[MONTHS] = {31, 28, [4] = 31, 30, 31, [1] = 29};

    for(int i = 0; i<MONTHS; i++){
        printf("Month %d has %2d days.\n", i+1, day[i]);
    }

    return 0;
}