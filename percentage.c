#include<stdio.h>

int main(){
    int a,b,c,d,e;
    int  total_marks;


    printf("enter the marks english:");
    scanf("%d",&a);
    printf("enter the marks phy :");
    scanf("%d",&b);

    printf("enter the marks chem:");
     scanf("%d",&c);

    printf("enter the marks math:");
    scanf("%d",&d);

    printf("enter the marks cs:");
    scanf("%d",&e);

    total_marks = (((a+b+c+d+e)*100)/500);

    if(a >=35 && b>=35 && c>=35 && d>=35 && e>=35){
        printf("passed the examintaion:");
    }
    else{
        printf("Dash failed  ");
    }
    printf("total marks is:%d%",total_marks);

    

}