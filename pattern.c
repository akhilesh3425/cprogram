#include<stdio.h>
int main(){


    int rows = 999;
    for( int i =1; i <= rows; i++)
    {
     for (int j = 1; j <= i; j++)
     {

        printf("%d ", j);

     }

        printf("\n",i);
    }
    return 0;
}
    
    