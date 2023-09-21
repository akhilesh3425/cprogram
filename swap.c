#include<stdio.h>                                                   /* using third variable*/

int main(){
    int a,b,c;
   
    printf("enter the first  no:");
    scanf("%d",&a);
    printf("enter the second no:");
    scanf("%d",&b,&c);
    c = a;
    a = b;  
    b = c;
 
    printf("swap first no is:%d\n",a);
    printf("swap second no is:%d",b);
    return 0;

}

    