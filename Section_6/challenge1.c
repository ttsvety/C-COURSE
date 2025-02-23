#include <stdio.h>

int main(){

    double minutes, day, year;

    printf("Enter the minutes: ");
    scanf("%lf", &minutes);

    day = minutes/(24*60);
    year = day/365;

    printf("Minutes -> %.2lf\n", minutes);
    printf("Days -> %.2lf\n", day);
    printf("Years -> %.2lf\n", year);


    return 0;
}