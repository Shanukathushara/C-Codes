#include <stdio.h>

int main() {

    float basicSalary, additionalAllowance = 0, bonus, monthlySales;
    char city;

    printf("Enter basic salary: ");
    scanf("%f", &basicSalary);

    printf("Enter the number of years of service: ");
    int yearsOfService;
    scanf("%d", &yearsOfService);

    printf("Enter the city (C for Colombo, other for non-Colombo): ");
    scanf(" %c", &city);

    printf("Enter monthly sales: ");
    scanf("%f", &monthlySales);

    if (yearsOfService > 5) {
        additionalAllowance += 0.10 * basicSalary;
    }

    if (city == 'C' || city == 'c') {
        additionalAllowance += 2500;
    }

    if (monthlySales >= 0 && monthlySales <= 25000) {
        bonus = 0.10 * monthlySales;
    } else if (monthlySales > 25000 && monthlySales <= 50000) {
        bonus = 0.12 * monthlySales;
    } else {
        bonus = 0.15 * monthlySales;
    }

    float grossRemuneration = basicSalary + additionalAllowance + bonus;

    printf("\nGross Monthly Remuneration: Rs. %.2f\n", grossRemuneration);


}


