#include <stdio.h>

int main() {
    int number;
    unsigned long long factorial = 1;

    // Input a number from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Check if the number is negative
    if (number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Calculate factorial using a loop
        for (int i = 1; i <= number; ++i) {
            factorial *= i;
        }

        // Print the result
        printf("Factorial of %d is %llu\n", number, factorial);
    }

    return 0;
}


