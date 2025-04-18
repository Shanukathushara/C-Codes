#include <stdio.h>

int main() {

    float prices[10];
    float sum = 0, average;
    int countAbove200 = 0;


    printf("Enter prices for 10 items:\n");
    for (int i = 0; i < 10; ++i) {
        printf("Enter price for item %d: ", i + 1);
        scanf("%f", &prices[i]);


        sum += prices[i];


        if (prices[i] > 200) {
            countAbove200++;
        }
    }


    if (countAbove200 > 0) {
        average = sum / 10;
    } else {

        average = 0;
    }


    printf("\nAverage Value of an Item: %.2f\n", average);
    printf("Number of items with price greater than 200: %d\n", countAbove200);


}

