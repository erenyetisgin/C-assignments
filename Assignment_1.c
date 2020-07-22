#include <stdio.h>

int palindrome(int);

int main()
{
	int number;

	printf("Enter 5 digit integer:\n");
	scanf("%d", &number);

	if(palindrome(number)==1) {
		printf("%d is palindrome.\n", number);
	}

	else {
		printf("%d is not palindrome.\n", number);
	}

	return 0;
}

int palindrome(int x)
{
	int digit1, digit2, digit3, digit4, digit5;

	digit1=x/10000;
	digit2=(x/1000)%10;
	digit3=(x/100)%10;
	digit4=(x/10)%10;
	digit5=x%10;

	if(digit1=digit5 && digit2==digit4) {
		return 1;
	}

	else {
		return 0;
	}
}
