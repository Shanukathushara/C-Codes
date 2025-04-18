#include<stdio.h>
int main()
{
    int i;
    float f;
    double d;
    char c;
    printf("Enter an int value");
    scanf("%d",&i);
    printf("Enter a char value");
    scanf("%f",&f);
    printf("Enter a double value");
    scanf("%fl",&d);
    printf("Enter a char value");
    scanf("%S",&c);
    printf("int value is %d",i);
    printf("float value is %f",f);
    printf("double value is %fl",d);
    printf("char value is %s",c);

}
