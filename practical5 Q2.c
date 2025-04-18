
#include <stdio.h>

int main() {
    int size;

    // Input the size of arrays
    printf("Enter the size of the arrays: ");
    scanf("%d", &size);

    // Declare two arrays with the given size
    int array1[size], array2[size], scalarSum = 0, scalarProductSum = 0;
    int vectorSum[size], vectorProduct[size];

    // Input values to the arrays
    printf("Enter values for the first array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &array1[i]);
    }

    printf("Enter values for the second array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &array2[i]);
    }

    // Scalar Sum
    for (int i = 0; i < size; i++) {
        scalarSum += array1[i] + array2[i];
    }

    // Vector Sum
    printf("Vector Sum:\n");
    for (int i = 0; i < size; i++) {
        vectorSum[i] = array1[i] + array2[i];
        printf("%d ", vectorSum[i]);
    }
    printf("\n");

    // Vector Product
    printf("Vector Product:\n");
    for (int i = 0; i < size; i++) {
        vectorProduct[i] = array1[i] * array2[i];
        printf("%d ", vectorProduct[i]);
    }
    printf("\n");

    // Scalar Product (and its sum)
    printf("Scalar Product (and its sum):\n");
    for (int i = 0; i < size; i++) {
        int product = array1[i] * array2[i];
        printf("%d ", product);
        scalarProductSum += product;
    }
    printf("\nScalar Product Sum: %d\n", scalarProductSum);


}

