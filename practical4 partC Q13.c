#include <stdio.h>

int main() {
    int sum = 0, userInput;

    printf("Enter numbers (enter -1 to stop):\n");

    while (1) {
        scanf("%d", &userInput);

        if (userInput == -1) {
            break; // Exit the loop when -1 is entered
        }

        sum += userInput;
    }

    printf("Sum of entered numbers: %d\n", sum);


}
