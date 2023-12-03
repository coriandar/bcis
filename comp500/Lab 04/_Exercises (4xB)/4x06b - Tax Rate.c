//LEARNT
//Cannot assign to array, copy to it.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	printf("What is your income\? ");
	int income = 0;
	char rate[10] = "\0";
	scanf("%d", &income);

	if (0 <= income && income <= 14000)
	{
		strcpy(rate, "10.5%");
	}
	else if (14001 <= income && income <= 48000)
	{
		strcpy(rate, "17.5%");
	}
	else if (48001 <= income && income <= 70000)
	{
		strcpy(rate, "30.0%");
	}
	else if (70001 <= income)
	{
		strcpy(rate, "33.0%");
	}
	else
	{
		printf("\nInvalid input.\n");
	}
	
	printf("\nTax rate: %s\n", rate);

	return 0;
}