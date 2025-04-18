#include <stdio.h>

int main() {
    int month;

    // Input month number from the user
    printf("Enter the month number (1-12): ");
    scanf("%d", &month);

    // Switch statement to determine the number of days in the entered month
    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            printf("The month has 31 days.\n");
            break;

        case 4: case 6: case 9: case 11:
            printf("The month has 30 days.\n");
            break;

        case 2:
            printf("The month has 28 days.\n");
            break;

        default:
            printf("Invalid month number. Please enter a number between 1 and 12.\n");
    }


}


