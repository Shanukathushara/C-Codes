#include <stdio.h>

int main() {
    int n = 10;
    int first = 0, second = 1, next;

    printf("Fibonacci Sequence (first 10 numbers):\n");

    for (int i = 0; i < n; ++i) {
        printf("%d, ", first);

        next = first + second;
        first = second;
        second = next;
    }

    printf("\n");


}


