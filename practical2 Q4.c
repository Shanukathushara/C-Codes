#include <stdio.h>

int main ()
{
    float F,C;

    printf("Enter the temperature in degrees Fahrenheit: ");
    scanf("%f", &F);

    C = (5.0/9.0) * (F-32);

    printf("The temperature in degrees Celsius is: %.2f", C);


}
