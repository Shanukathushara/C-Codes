
#include <stdio.h>

int main() {
    int numbers[10];
    int positiveCount = 0, negativeCount = 0, zeroCount = 0;

    printf("Enter 10 numbers:\n");
    for (int i = 0; i < 10; ++i) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);

        if (numbers[i] > 0) {
            positiveCount++;
        } else if (numbers[i] < 0) {
            negativeCount++;
        } else {
            zeroCount++;
        }
    }

    printf("\nNumber of positive numbers: %d\n", positiveCount);
    printf("Number of negative numbers: %d\n", negativeCount);
    printf("Number of zeros: %d\n", zeroCount);


}

