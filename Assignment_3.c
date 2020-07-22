#include <stdio.h>

unsigned long long int factorial(unsigned int x);
int main()
{
	unsigned long long int result;
	unsigned int n;

	printf("Enter 'n':\n");
	scanf("%u", &n);

	result=factorial(n);

	printf("%u! = %llu\n", n, result);

	return 0;
}

unsigned long long int factorial(unsigned int x)
{
	if(x<=1)
		return 1;
	else
		return x*factorial(x-1);
}
