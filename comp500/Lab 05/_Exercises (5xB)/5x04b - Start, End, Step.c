/*
//IMPLEMENTATION:
Write a program that asks the user for three number inputs, “count down start”, “count down stop”, and “step size”. The program must then use a loop to print out from the “count down start” number, to the “count down stop” number, decreasing by the “step size” each iteration. The list of numbers printed must be separated by a comma and a single space.
*/

#include <stdio.h>

int main(void)
{
	printf("Count down start\? ");
	int start = 0;
	scanf("%d", &start);

	printf("Count down end\? ");
	int end = 0;
	scanf("%d", &end);

	printf("Step size\? ");
	int step = 0;
	scanf("%d", &step);

	printf("\n");

	for (int number = start; number >= end; number -= step)
	{
		printf("%d", number);

		if (number > step)
		{
			printf(", ");
		}
	}

	printf("\n");

	return 0;
}