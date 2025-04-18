#include <stdio.h>

int main()
{
    int no1, no2, temp;

    printf("Enter number 1: ");
    scanf("%d", &no1);

    printf("Enter number 2: ");
    scanf("%d", &no2);

    printf("\nBefore swapping: ");
    printf("First number is %d", no1);
    printf("\nSecond number is %d", no2);

    temp = no1;
    no1 = no2;
    no2 = temp;

    printf("\nAfter swapping: ");
    printf("First number is %d", no1);
    printf("\nSecond number is %d", no2);

    }
