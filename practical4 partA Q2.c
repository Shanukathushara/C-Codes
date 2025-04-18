#include <stdio.h>

int main() {

    int marks[10];
    int sum = 0, max, min;


    printf("Enter marks for 10 students:\n");
    for (int i = 0; i < 10; ++i) {
        printf("Enter marks for student %d: ", i + 1);
        scanf("%d", &marks[i]);


        sum += marks[i];


        if (i == 0 || marks[i] > max) {
            max = marks[i];
        }
        if (i == 0 || marks[i] < min) {
            min = marks[i];
        }
    }


    float average = (float)sum / 10;


    printf("\nMaximum Marks: %d\n", max);
    printf("Minimum Marks: %d\n", min);
    printf("Average Marks: %.2f\n", average);
}


