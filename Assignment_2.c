#include <stdio.h>

long double e(unsigned long long int);

long double factorial(unsigned long long int);

int main()
{
	unsigned long long int i;

	printf("Enter loop time:\n");
	scanf("%llu", &i);

	printf("e = %.50Lf\n", e(i));

	return 0;
}

long double e(unsigned long long int n)
{
	long double sum=1;
	unsigned long long int counter=1;

	while(counter<=n) {
		sum+=(long double)1/factorial(counter);
		counter++;
	}

	return sum;
}

long double factorial(unsigned long long int m)
{
	unsigned long long int counter=1;
	long double sum=1;

	while(counter<=m) {
		sum*=counter;
		counter++;
	}

	return sum;
}
