#include<stdio.h>  //NAME- AKHILESH SINGH Butola ROLL NO - 23 CE-07

int calci(int a,int b){
    int sum;
    sum = a+b;
    return sum ;

    int multiply = a-b;
    return multiply;  
    
}
int main()
{   
    int result = calci(50,20);
    printf("sum is:%d\n",result);
    int multiply = calci(20,30);
    printf("multiply is:%d\n",multiply);

    return 0;

}