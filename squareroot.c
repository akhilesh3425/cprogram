#include <stdio.h>
#include <math.h>

int main()
{

    double num_1, squareROOT;

    printf("ENter the no:");
    scanf("%lf", &num_1);

    squareROOT = sqrt(num_1);
    
    printf("square root of %2lf is: %2lf",num_1,squareROOT);
    return 0;
}