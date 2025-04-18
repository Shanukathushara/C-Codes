#include <stdio.h>

int main()
{
    int num1,num2,num3;

    printf("Enter number 1: ");
    scanf("%d", &num1);
     printf("Enter number 2: ");
     scanf("%d", &num2);
      printf("Enter number 3: ");
      scanf("%d", &num3);

    int largest, smallest;

    largest=smallest=num1;

    if ( num1>largest ){
        largest=num2;
    } else if (num2<smallest){
    smallest=num2;
    }

    if ( num3>largest){
        largest=num3;
    } else if (num3<smallest){
    smallest=num3;
    }

    printf("The largest number is %d\n", largest);
    printf("The smallest number is %d\n", smallest);





}

