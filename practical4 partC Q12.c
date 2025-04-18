#include <stdio.h>

int main() {
    int number;

    // Input a number from the user
    printf("Enter an integer: ");
    scanf("%d", &number);

    printf("Factors of %d are:\n", number);

    // Iterate from 1 to the entered number and print factors
    for (int i = 1; i <= number; ++i) {
        if (number % i == 0) {
            printf("%d\n", i);
        }
    }


}


