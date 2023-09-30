#include<stdio.h>//NAME- AKHILESH SINGH Butola ROLL NO - 23 CE-07
#include<math.h>

double power(double base,double exponent)  // parameters
{
    return pow(base,exponent);

}
int  main()
{
    double a,b,result;
    printf("enter the base:\n");
    scanf("%lf",&a);
    printf("enter the exponent:\n");
    scanf("%lf",&b);
    result = power(a,b); // function calling given arguments 
    printf("the result:%.2lf\n",result);

}