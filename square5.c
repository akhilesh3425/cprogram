#include<stdio.h>
int main()
{
    int sum = 0;
    for( int i =1; i <= 5; i++)
    {
        int square = i*i;
        sum+=square;
        printf("the  square of %d number is:%d, And the sum of this is: %d\n",i,square,sum);
    }
     return 0;

}