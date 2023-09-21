#include<stdio.h>
#include<stdlib.h>


int main()
{
    char color[20];
    char pluralnoun[20];
    char celebrity [20];
    printf("enter the color:");
    scanf("%s",&color);

    printf("enter the pluralnoun:");
    scanf("%s",&pluralnoun);
    printf("enter the celebrity:");
    scanf("%s",&celebrity);


    printf("Roses are %s\n",color);  /* dash variable to call kar*/
    printf("%s are blue\n",pluralnoun);
    printf("i love %s \n",celebrity);
    
    return 0;




}