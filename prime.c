//NAME- AKHILESH SINGH Butola ROLL NO - 23 CE-07
#include <stdio.h>

// Defining the functION
int primenumber(int number)
{
	int i;
	for (i = 2; i <= number / 2; i++)
	{
		if (number % i != 0)
			continue;
		else
			return 1;
	}	
}
int main()
{
	int num = 5, res = 0;
	
	// Calling the function
	res = primenumber(num);
	if (res == 0)
		printf("%d is a prime number", num);
	else
		printf("%d is not a prime number", num);
	return 0;
}
