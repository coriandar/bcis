#include <stdio.h>

int main(void)
{
	int days[7];
	int sum = 0;
	const int DAYS_IN_WEEK = 7;


	for (int index = 0; index < DAYS_IN_WEEK; index++)
	{
		if (index == 0)
		{
			printf("Monday's ");
		}
		else if (index == 1)
		{
			printf("Tuesday's ");
		}
		else if (index == 2)
		{
			printf("Wednesday's ");
		}
		else if (index == 3)
		{
			printf("Thurday's ");
		}
		else if (index == 4)
		{
			printf("Friday's ");
		}
		else if (index == 5)
		{
			printf("Saturday's ");
		}
		else if (index == 6)
		{
			printf("Sunday's ");
		}

		printf("time? ");
		scanf("%d", &days[index]);

		sum += days[index];
	}

	int fastest = days[0];
	int slowest = days[0];

	for (int index = 0; index < DAYS_IN_WEEK; index++)
	{
		if (fastest > days[index])
		{
			fastest = days[index];
		}

		if (slowest < days[index])
		{
			slowest = days[index];
		}
	}

	printf("\n");
	printf("The fastest time: %d\n", fastest);
	printf("The slowest time: %d\n", slowest);
	printf("The average time: %d\n", sum / 7);

	return 0;
}