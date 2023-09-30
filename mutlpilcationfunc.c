#include<stdio.h>  //NAME- AKHILESH SINGH Butola ROLL NO - 23 CE-07

int multpilcation(int a)
{
    int result ;
    for (int i = 1; i <= 10; i++)   
    {
       printf("%d x %d = %d \n",a,i,i*a);
    }
    return result;   

}
int main()
{
    int x;
    printf("enter the no for multiplication:\n");
    scanf("%d",&x);
    multpilcation(x);
}