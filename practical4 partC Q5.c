#include <stdio.h>

int main() {
    int number, reversedNumber = 0, remainder;

    // Input a number from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Reverse the digits using a do-while loop
    do {
        remainder = number % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        number = number / 10;
    } while (number != 0);

    // Print the reversed number
    printf("Reversed number: %d\n", reversedNumber);

    return 0;
}


