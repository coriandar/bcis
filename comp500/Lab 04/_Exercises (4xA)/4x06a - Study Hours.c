//?  mark needs escape sequence. woops.

#include <stdio.h>

int main(void)
{
	printf("How many hours did you spend studying for the test\? ");
	int hours = 0;
	scanf("%d", &hours);

	if (0 <= hours && hours <= 25)
	{
		printf("\n%d hours is probably not enough!\n", hours);
	}
	else if (26 <= hours && hours <= 39)
	{
		printf("\nGood, but was it enough...\n");
	}
	else if (40 <= hours)
	{
		printf("\nExcellent, you should be well prepared for the test!\n");
	}
	else
	{
		printf("\nInvalid, you cannot have studied a negative number of hours!\n");
	}

	return 0;
}