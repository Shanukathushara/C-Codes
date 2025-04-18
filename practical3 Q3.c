#include <stdio.h>

int main()
{
    char employeename[50];
    float basicSalary, increment, newSalary;

    printf("Enter employee name: ");
    scanf("%s", &employeename);

    printf("Enter basic salary: ");
    scanf("%f", &basicSalary);

    if(basicSalary<5000){
        increment=0.05*basicSalary;
    }
    else if(basicSalary>=5000&&basicSalary<10000){
        increment=0.1*basicSalary;
    }
    else {
        increment=0.15*basicSalary;
    }

    newSalary=0.15*basicSalary;

    printf("\nEmployee name is %s\n", employeename);
    printf("New salary is %.2f\n", newSalary);


}

