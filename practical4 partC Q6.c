
#include <stdio.h>

int main() {
    int base, exponent;
    long long result = 1;

    // Input base and exponent from the user
    printf("Enter the base: ");
    scanf("%d", &base);

    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    // Calculate the nth power using a loop
    for (int i = 1; i <= exponent; ++i) {
        result *= base;
    }

    // Print the result
    printf("%d raised to the power of %d is %lld\n", base, exponent, result);


}

