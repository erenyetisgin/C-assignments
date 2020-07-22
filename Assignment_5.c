#include <stdio.h>

int main()
{
	int number1, number2, number3;

	printf("Enter 4 digit number: ");
	scanf("%d", &number1);

	number2=((((number1/10)%10)+7)%10)*1000+(((number1%10)+7)%10)*100+(((number1/1000)+7)%10)*10+((((number1/100)%10)+7)%10);
	number3=((((number2/10)%10)+3)%10)*1000+(((number2%10)+3)%10)*100+((((number2/1000)%10)+3)%10)*10+((((number2/100)%10)+3)%10);

	printf("Encryption of %d: %d\n", number1, number2);
	printf("Decryption of %d: %d\n", number2, number3);

	return 0;
}
