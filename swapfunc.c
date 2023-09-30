#include<stdio.h>   /// NAME - AKHILESH SINGH BUTOLA   ROLL NO - 23 CE-07//

void swap(int a,int b){
    int c;
    c = a;
    a = b;
    b = c;
    printf("after swapping a = %d and b = %d\n", a,b);    
}
int main(){
    int x,y;
    printf("enter the first no :");
    scanf("%d",&x);
    printf("enter the second no:");
    scanf("%d",&y);
    swap(x,y);    /// CALLING THE FUNCTION  X =A AND Y = B 
    return 0;

}