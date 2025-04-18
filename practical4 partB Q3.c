
include <stdio.h>
#include <math.h>

#define PI 3.14159265359

int main() {

    int choice;
    double radius, result;


    printf("Menu:\n");
    printf("1. Calculate Circumference of a Circle\n");
    printf("2. Calculate Area of a Circle\n");
    printf("3. Calculate Volume of a Sphere\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);


    switch (choice) {
        case 1:

            printf("Enter the radius of the circle: ");
            scanf("%lf", &radius);
            result = 2 * PI * radius;
            printf("Circumference of the circle: %.2lf\n", result);
            break;
        case 2:
            printf("Enter the radius of the circle: ");
            scanf("%lf", &radius);
            result = PI * pow(radius, 2);
            printf("Area of the circle: %.2lf\n", result);
            break;
        case 3:

            printf("Enter the radius of the sphere: ");
            scanf("%lf", &radius);
            result = (4.0 / 3.0) * PI * pow(radius, 3);
            printf("Volume of the sphere: %.2lf\n", result);
            break;
        default:

            printf("Invalid choice. Please enter a number between 1 and 3.\n");
            return 1;
    }

    return 0;
}

