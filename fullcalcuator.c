#include<stdio.h>
#include<stdlib.h>
int main(){
    double num1;
    double num2;
    char op;


    printf("enter the no:");
    scanf("%lf", &num1);

    printf("enter the operator:");
    scanf(" %c", &op);
    printf("enter the no:");
    scanf("%lf", &num2);
 
    if (op == '+'){
        printf("%f", num1 + num2);
    }else if(op == '-'){
        printf("%f", num1 - num2);

    }else if(op == '*'){
       printf("%f", num1 * num2);

    }else if (op == '/'){
        printf("%f", num1 / num2);

    }else{
        printf("invalid operator Dash");
    }
    

}
