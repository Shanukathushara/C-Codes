#include <stdio.h>

int main() {
    int array[10];
    int evenCount = 0;

    printf("Enter 10 integers:\n");

    // Read integers into the array
    for (int i = 0; i < 10; ++i) {
        scanf("%d", &array[i]);
    }

    // Count and display even numbers
    for (int i = 0; i < 10; ++i) {
        if (array[i] % 2 == 0) {
            evenCount++;
        }
    }

    printf("Entered array:\n");

    for (int i = 0; i < 10; ++i) {
        printf("%d ", array[i]);
    }

    printf("\n");

    printf("Count of even numbers in the array: %d\n", evenCount);


}


