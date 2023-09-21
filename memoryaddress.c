#include<stdio.h>

int main(){

    int age = 30;
    int*pAge =&age;
    double gpa = 3.4;
    double*pgpa = &gpa;
    char grade ='A';
    char*pgrade = &grade;

    printf("%d",&*&*&pAge);             /* & and percent is use to access memmory address  of age varibale */

    return 0;
}
