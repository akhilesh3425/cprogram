#include<stdio.h>

int main(){

    int n  ;
    printf(" enter the  value of n\n");
    scanf("%d",&n);


    for(int i = 0 ; i<=n; i++){
        
        for(int j = 0; j<2 *(n-i) - 1; j++){
            printf(" ");

        }
        for(int k = 0;k<= i;k++ ){ /* to us the the star pattern in miirror*/
            printf("*");

        }
        printf("\n");
              
        
    
    }
    return 0;

}