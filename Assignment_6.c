#include <stdio.h>

int main()
{
	int input, hour, sales, pieces, counter1=0, counter2=0, counter3=0, counter4=0;
	double wpp, salary1, salary2, salary3=250, salary4;

	while(input!=-1) {
		printf("Enter paycode (-1 to end): ");
		scanf("%d", &input);

		switch(input) {
			case 1:
				printf("Manager selected.\n");
				printf("Enter weekly salary: ");
				scanf("%lf", &salary1);
				printf("The manager's pay is $%.2lf\n", salary1);
				counter1++;
				break;

			case 2:
				printf("Hourly worker selected.\n");
				printf("Enter the hourly salary: ");
				scanf("%lf", &salary2);
				printf("Enter the total hours worked: ");
				scanf("%d", &hour);
				if(hour>40) {
					salary2=salary2*40+salary2*1.5*(hour-40);
					printf("Worker worked %d overtime hours.\n", hour-40);
					printf("Worker's pay is $%.2lf\n", salary2);
				}
				else {
					salary2=salary2*hour;
					printf("Worker didn't work overtime.\n");
					printf("Worker's pay is $%.2lf\n", salary2);
				}
				counter2++;
				break;

			case 3:
				printf("Commission worker selected.\n");
				printf("Enter gross weekly sales: ");
				scanf("%d", &sales);
				salary3=salary3+sales*57/1000;
				printf("Commission worker's pay is $%.2lf\n", salary3);
				counter3++;
				break;
			case 4:
				printf("Pieceworker selected.\n");
				printf("Enter number of pieces: ");
				scanf("%d", &pieces);
				printf("Enter wage per piece: ");
				scanf("%lf", &wpp);
				salary4=pieces*wpp;
				printf("Pieceworker's pay is $%.2lf\n", salary4);
				counter4++;
				break;
			default:
				printf("ERROR\n");
				break;
		}

		if(input==-1) {
			printf("Total number of managers paid: %d\n", counter1);
			printf("Total number of hourly workers paid: %d\n", counter2);
			printf("Total number of commission workers paid: %d\n", counter3);
			printf("Total number of pieceworkers paid: %d\n", counter4);
		}
	}

	return 0;
}
