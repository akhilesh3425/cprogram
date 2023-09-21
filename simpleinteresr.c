#include<stdio.h>
int main(){
    float principal;
    float rate;
    float time;
    float simple_intrest;

    printf("enter the prncipal:");
    scanf("%f",&principal);
    printf("enter the rate:");
    scanf("%f",&rate);
    printf("enter the time:");
    scanf("%f",&time);

    simple_intrest = (principal * rate * time) / 100;

    printf("simple interest is : %2f",simple_intrest);

    return 0;

}
