#include <stdio.h>

int main(){

    float value1, value2;
    char operator;

    printf("Type value1, operator and value2: \n");
    scanf("%f%c%f", &value1, &operator, &value2);

    switch (operator)
    {
        case '+':
            printf("%.2f", value1 + value2);
            break;
        case '-':
            printf("%.2f", value1 - value2);
            break;
        case '*':
            printf("%.2f", value1 * value2);
            break;
        case '/':
            if(value2 == 0)
            {
                printf("Division by zero\n");
            }
            else
            {
                printf("%.2f", value1 / value2);
            }
            break;
        default:
            printf("Invalid operator");
            break;
    }

    return 0;
}