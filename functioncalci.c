#include<stdio.h>//NAME- AKHILESH SINGH Butola ROLL NO - 23 CE-07
double add(double a,double b)
{
    return a + b;
}
double subtract(double a, double b){
    return a - b;
}
double multiply(double a, double b){
    return a*b;
}
double divide(double a, double b){
    if (b!=0){
        return a/b;
    }       
}
int main()
{
    int choice;
    float num1,num2;
    while (1)
    {
    printf("menu:\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    printf("5. Quit\n");
    printf("enter the choice:");
    scanf("%d",&choice);
    if (choice ==5){
        break;
    }
    printf("enter the first no :");
    scanf("%lf",&num1);
    printf("enter the second no :");
    scanf("%lf",&num2);

    switch (choice)  
    {
    case 1:
        printf("result:%2lf\n",add(num1,num2));
        break;  
    case 2:
        printf("Result: %.2lf\n", subtract(num1, num2));
        break;
    case 3:
         printf("Result: %.2lf\n", multiply(num1, num2));
         break;
    case 4:
        printf("Result: %.2lf\n", divide(num1, num2));
         break;
    default :
        printf("invalid operator dash ");      
    }
    }
    printf("claculator closed");
    return 0 ;
}