#include <stdio.h>
int main()
{
int var1, var2, temp;
printf("Enter two integers\n");
scanf("%d%d", &var1, &var2);
printf("Before SwappingnFirst variable = %d\nSecond variable = %d\n", var1, var2);
var1 = var1 + var2;
var2 = var1 - var2;
var1 = var1 - var2;
printf("After SwappingnFirst variable = %d\nSecond variable = %d\n", var1, var2);
return 0;
} 