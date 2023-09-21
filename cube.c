#include<stdio.h>
int main(){

    int a,b,c;
  
    printf("enter the first:");
    scanf("%d",&a);
    a = a * a*a;
        
    printf("enter the 2:");
    scanf("%d",&b);
    b = b* b*b;

    printf("enter the 3:");
    scanf("%d",&c);
    c = c* c*c;

    printf("cube of number is:%d\n%d\n%d\n",a,b,c);

    return 0;
}