#include <stdio.h>

int main()
{
	int number1, number2, remainder;

	printf("Enter 2 integers:\n");
	scanf("%d%d", &number1, &number2);

	if(number1>number2) {
		do {
			remainder=number1%number2;
			if(remainder==0)
				break;
			number1=number2;
			number2=remainder;
		} while(remainder!=0);

		printf("Greatest common divisor is %d.\n", number2);
	}

	else {
		do {
			remainder=number2%number1;
			if(remainder==0)
				break;
			number2=number1;
			number1=remainder;
		} while(remainder!=0);

		printf("Greatest common divisor is %d.\n", number1);
	}

	return 0;
}
