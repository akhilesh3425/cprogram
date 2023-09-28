#include<stdio.h>  // name - akhilesh singh butoal roll no 23ce - 07//

int main(){

    int marks;
    printf("enter the marks:");
    scanf("%d",&marks);
    if (marks<50)
    {
        printf(" F");    /* code */
    }else if(marks<=50 && marks>60){
        printf("c");
    }else if (marks<=60 && marks>70)
    {
        printf("B");
        /* code */
    }else if (marks<=70 && marks>80)
    {
        printf("    B+");
       /* code */
    }else if(marks<=80 && marks>90){
        printf("A");
    }
    else{
        printf("A+");
    }
    
}