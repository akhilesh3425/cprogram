#include<stdio.h>

#define PIE 3.14

int main()
{   
    float r = 5.0;
    float area,circum;

    area = PIE* r *r;  
    circum = 2 * PIE * r;

    printf("area of circle is:%f\n",area);
    printf("circumfernce of circle is:%f\n",circum);
    return 0;
}