#include <stdio.h>

int main(){
    int num_of_hours;
    double gross_pay, tax_rate, net_pay;

    printf("Enter number of hours you've worked in a week: ");
    scanf("%d", &num_of_hours);

    //calculate gross pay
    if (num_of_hours < 40 || num_of_hours == 40)
    {
        gross_pay = num_of_hours * 12.00;
    }
    else
    {
        gross_pay = 40 * 12.00 + (num_of_hours - 40) * 18.00;
    }

    //calculate tax rate
    if (gross_pay <= 300)
    {
        tax_rate = 0.15 * gross_pay;
    }
    else if (gross_pay > 300 && gross_pay <= 450)
    {
        tax_rate = (0.15 * 300) + (0.20 * (gross_pay - 300));
    }
    else if (gross_pay > 450)   
    {
        tax_rate = (0.15 * 300) + (0.20 * 150) + (0.25 * (gross_pay - 450));
    }
    
    net_pay = gross_pay - tax_rate;

    printf("Worked hours in a week -> %d\n", num_of_hours);
    printf("Gross pay for %d hours -> %.2lf\n", num_of_hours, gross_pay);
    printf("Tax rate for %.2lf gross pay -> %.2lf\n", gross_pay, tax_rate);
    printf("Net pay -> %.2lf\n", net_pay);

    return 0;
}