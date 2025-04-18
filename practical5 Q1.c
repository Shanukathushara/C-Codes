#include <stdio.h>

int main() {
    // Declare an array with 10 elements
    int array[10];

    // Input values to the array
    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &array[i]);
    }

    // Find minimum value
    int min = array[0];
    for (int i = 1; i < 10; i++) {
        if (array[i] < min) {
            min = array[i];
        }
    }

    // Find maximum value
    int max = array[0];
    for (int i = 1; i < 10; i++) {
        if (array[i] > max) {
            max = array[i];
        }
    }

    // Find average value
    int sum = 0;
    for (int i = 0; i < 10; i++) {
        sum += array[i];
    }
    double average = (double)sum / 10;

    // Reverse order of values
    printf("Array in reverse order: ");
    for (int i = 9; i >= 0; i--) {
        printf("%d ", array[i]);
    }
    printf("\n");

    // Print results
    printf("Minimum value: %d\n", min);
    printf("Maximum value: %d\n", max);
    printf("Average value: %.2f\n", average);


}


