#include <stdio.h>
#include <stdlib.h>

int main()
{
    double num1;
    double num2;

    printf("enter the first no:");
    scanf("%lf", &num1);
    printf("enter the second no:");
    scanf("%lf", &num2);
    printf("sum is :%f \n", num1 + num2);
    printf("mutiply is : %d \n", num1 * num2);
    printf("divide is : %d \n", num1 / num2);
    printf("subtract  is :%d \n", num1 - num2);

    return 0;
}