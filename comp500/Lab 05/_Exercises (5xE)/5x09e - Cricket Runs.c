#include <stdio.h>

int main(void)
{
	printf("Input the runs scored for each batsman:\n\n");

	int batsman[11];
	int sum = 0;
	int highest = 0;

	for (int index = 0; index < 11; index++)
	{
		printf("Batsman %d\? ", index + 1);
		scanf("%d", &batsman[index]);
		sum = sum + batsman[index];

		if (highest < batsman[index])
		{
			highest = batsman[index];
		}
	}

	printf("\nBatting Summary:\n");
	printf("================\n\n");

	for (int index = 0; index < 11; index++)
	{
		printf("Batsman %d: %d run%s\n", index + 1, batsman[index], (batsman[index] == 1) ? "" : "s");
	}

	int lowest = batsman[0];
	for (int index = 0; index < 11; index++)
	{
		if (lowest > batsman[index])
		{
			lowest = batsman[index];
		}
	}

	printf("\n");
	printf("Highest Score: %d run%s\n", highest, (highest == 1) ? "" : "s");
	printf("Lowest Score: %d run%s\n", lowest, (lowest == 1) ? "" : "s");
	printf("Average Score: %d run%s\n", sum / 11, (sum / 11 == 1) ? "" : "s");

	return 0;
}