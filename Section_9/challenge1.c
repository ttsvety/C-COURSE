#include <stdio.h>

int greatest_commoon_divisor(int, int);
float absolute_value(float);
float square_root(float);

int main()
{
    float f1 = -15.5, f2 = 20.0, f3 = -5.0;
    int i1 = -716;

    int result;

    result = greatest_commoon_divisor(150, 35);
    printf("Greatest common divisor of 150 and 35 is %d\n", result);

    result = greatest_commoon_divisor(1026, 405);
    printf("Greatest common divisor of 1026 and 405 is %d\n", result);

    printf("Greatest common divisor of 83 and 240 is %d\n", greatest_commoon_divisor(83, 240));

    printf("result = %.2f\n", absolute_value(f1));
    printf("f1 = %.2f", f1);

    printf("result = %.2f\n" , absolute_value(f2) + absolute_value(f3));

    printf("result = %.2f\n", absolute_value((float)i1));

    printf("result = %.2f\n", absolute_value(i1));

    printf("%.2f\n", square_root(-3.0));
    printf("%.2f\n", square_root(16.0));
    printf("%.2f\n", square_root(25.0));
    printf("%.2f\n", square_root(9.0));
    printf("%.2f\n", square_root(196.0));



    return 0;
}


float absolute_value(float x){
    if (x < 0)
    {
        return -x;
    }
    else
    {
        return x;
    }
}

int greatest_commoon_divisor(int x, int y){
    int temp;

    if (x < 0){
        absolute_value(x);
    } // Convert to positive
    else if (y < 0){
        absolute_value(y);
    }
    while (y != 0){
        temp = x % y;
        x = y;
        y = temp;
    }

    return x;
}

float square_root(float x)
{
    float returnValue;
    if (x < 0)
    {
        printf("The number is negative\n");
        return -1.0;
    }
    else if (x == 0 || x == 1)
    {
        return x;
    }

    absolute_value(x);
    for (int i = 2; i <= x; i++)
    {
        if (i * i == x)
        {
            returnValue = i;
            return returnValue;
        }
    }
}