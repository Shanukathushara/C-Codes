#include <stdio.h>

int main() {
    // Declare variables
    int number, digit, sum = 0;

    // Input the number from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Calculate the sum of digits
    while (number > 0) {
        digit = number % 10;
        sum += digit;
        number /= 10;
    }

    // Print the result
    printf("Sum of digits: %d\n", sum);

    return 0;
}


