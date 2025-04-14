#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct employee
{
    char name[20];
    char hireDate[30];
    float salary;
};

int main(){

    //struct employee employee1;
    struct employee employee2;

    struct employee employee1 = {"John", "22/07/2022", 2000.34};
    // strcpy(employee1.name, "John");
    // strcpy(employee1.hireDate, "22/07/2022");
    // employee1.salary = 2000.34;

    printf("Enter name for employee2: ");
    scanf("%s", employee2.name);
    printf("\nEnter hireDate for employee2: ");
    scanf("%s", employee2.hireDate);
    printf("\nEnter salary for employee2: ");
    scanf("%f", &employee2.salary);

    printf("The employee name is %s. He is hired in %s and his salary is %.2f\n", employee1.name, employee1.hireDate, employee1.salary);
    printf("The employee name is %s. He is hired in %s and his salary is %.2f\n", employee2.name, employee2.hireDate, employee2.salary);

    return 0;
}