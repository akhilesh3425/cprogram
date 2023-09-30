#include<stdio.h>  ///NAME- AKHILESH SINGH Butola ROLL NO - 23 CE-07//
#include<math.h>
#define M_PI = 3.14;


double volumecylinder(double r,double h)
{
    double volume;
    volume= 3.14* pow(r,2) * h;
    return volume;
}
int main()
{
    double r,h,volume;

    printf("enter the radius:");
    scanf("%lf",&r);
    printf("enter the height:");
    scanf("%lf",&h);
    volume = volumecylinder(r,h);
    printf("the volume of cycliner is %.2lf\n",volume);
    return 0;

}