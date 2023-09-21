#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num1;
    int num2;
    int num3;  
    printf("enter the first no:");
    scanf("%d",&num1);
    printf("enter the second no:");
    scanf("%d",&num2);
    printf("enter the third no:");
    scanf("%d",&num3);

    if (num1>num2&&num1>num3)

    {  
        printf("Largest no is %d\n",num1);

    }else if(num2>num1&& num2>num3){
        printf("the largest no is %d",num2);
    }
    else{
        printf("the largest number is %d",num3);
    }
    return 0;
}