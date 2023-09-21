#include<stdio.h>                                                   /*NAME - AKHILESH SINGH BUTOLA
                                                                      Roll no - 23 CE-07              without third variable*/

int main(){
    int a,b;
   
    printf("enter the first  no:");
    scanf("%d",&a);
    printf("enter the second no:");
    scanf("%d",&b);
    
    a = a + b;
    b = a - b;
    a = a - b;

    printf("swap first no is:%d\n",a);
    printf("swap second no is:%d",b);
    return 0;

}










    
