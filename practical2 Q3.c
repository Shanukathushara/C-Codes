#include <stdio.h>

int main()
{
    float distance,time;
    double averagespeed;

    printf("Enter the distance: ");
    scanf("%f", &distance);
    printf("Enter the time in seconds: ");
    scanf("%f", &time);

    averagespeed = distance / time ;

    printf("The average speed is %.2lf", averagespeed);

}
