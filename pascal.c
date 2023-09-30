//  NAME- AKHILESH SINGH Butola ROLL NO - 23 CE-07//

#include<stdio.h>
int fact(int n){
    int f;
    for (f = 1; n>1; n--)
    {
        f*= n;
          /* code */
    }
    return f;
}
int combi(int n,int r)
{
    return(fact(n) / (fact(n-r) * fact(r)));
}
void pascal(int n)
{
    for (int i = 0; i <= n ; i++)
    {
        for (int k = 0; k <= n-i; k++)
        {
            printf(" ");
            /* code */
        }
        for (int j = 0; j<= i; j++){
            printf("%d",combi(i,j));
            printf(" ");
        }
        printf("\n");
       
        
        
        /* code */
    }   
}
int main(){
    int n;
    printf("enter the no of rows:");
    scanf("%d",&n);
    pascal(n);
    return 0;
}