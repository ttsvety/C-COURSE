#include <stdio.h>

int main(){
    int grades[10];
    int count = 10;
    long sum = 0;
    float average = 0.0;

    printf("\nEnter the 10 grades:\n");

    for(int i = 0; i < count; i++){
        printf("%d: ", i + 1);
        scanf("%d", &grades[i]);
        sum += grades[i];
    }

    average = (float)sum/count;
    printf("The average is: %.2f", average);

    return 0;
}