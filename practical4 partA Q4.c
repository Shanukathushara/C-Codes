#include <stdio.h>

int main() {

    int employeeNo, count = 0;
    float basicSalary;


    printf("Enter Employee No and Basic Salary (enter -999 to end):\n");
    while (1) {
        printf("Employee No: ");
        scanf("%d", &employeeNo);


        if (employeeNo == -999) {
            break;
        }

        printf("Basic Salary: ");
        scanf("%f", &basicSalary);


        if (basicSalary >= 5000) {
            count++;
        }
    }


    printf("\nNumber of Employees with Basic Salary >= 5000: %d\n", count);


}

