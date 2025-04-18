#include <stdio.h>

int main()
{
    char name[25];
    int Byear,Age;

    printf("Enter your name: ");
    scanf("%s", &name);

    printf("Enter your birth year: ");
    scanf("%d", &Byear);

    Age = 2024 - Byear ;


    printf("Your name is %s and %d years old!", name, Age);


}
