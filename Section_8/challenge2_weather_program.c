#include <stdio.h>

#define YEARS 5
#define MONTHS 12

int main(){

    int year = 2011;
    float sum_for_year, avg_sum, month_avg;

    float data[YEARS][MONTHS] = // 2011-2015
    {
        {4.3, 4.3, 4.3, 3.0, 2.0, 1.2, 0.2, 0.2, 0.4, 2.4, 3.5, 6.6},
        {8.5, 8.2, 1.2, 1.6, 2.4, 0.0, 5.2, 0.9, 0.3, 0.9, 1.4, 7.3},
        {9.1, 8.5, 6.7, 4.3, 2.1, 0.8, 0.2, 0.2, 1.1, 2.3, 6.1, 8.4},
        {7.2, 9.9, 8.4, 3.3, 1.2, 0.8, 0.4, 0.0, 0.6, 1.7, 4.3, 6.2},
        {7.6, 5.6, 3.8, 2.8, 3.8, 0.2, 0.0, 0.0, 0.0, 1.3, 2.6, 5.2}
    };

    //EVERY YEAR TOTAL
    for(int i = 0; i<YEARS; i++){
        sum_for_year = 0;
        for(int j = 0; j < MONTHS; j++){
            sum_for_year += data[i][j];
            avg_sum +=data[i][j];
        }
        printf("Year -> %d     Rainfall -> %.1f\n", year, sum_for_year);
        year++;
    }

    //YEARLY AVERAGE
    printf("\nThe yearly average is %.1f inches.\n\n", avg_sum/YEARS);

    //MONTHLY AVERAGE
    for(int i = 0; i<MONTHS; i++){
        month_avg = 0;
        for(int j = 0; j < YEARS; j++){
            month_avg += data[j][i];
        }
        printf("MONTH -> %d     Rainfall -> %.1f\n", i+1, month_avg/YEARS);
    }

    return 0;
}