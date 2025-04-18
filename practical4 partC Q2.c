#include <stdio.h>

int main() {
    // Declare variables
    int marks[10];
    int total = 0;

    // Input marks from the user
    printf("Enter 10 marks:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &marks[i]);
        total += marks[i];
    }

    // Calculate average
    double average = (double)total / 10;

    // Print total and average
    printf("Total marks: %d\n", total);
    printf("Average marks: %.2f\n", average);

    // Check pass or fail
    if (average < 50) {
        printf("Result: Fail!\n");
    } else {
        printf("Result: Pass!\n");
    }

    return 0;
}


