#include <stdio.h>

int main(void)
{
	printf("Please enter your Practical Test 1 percentage: ");
	float score = 0.0f;
	scanf("%f", &score);

	if (90.0f <= score)
	{
		printf("\n%f%% is a 'A+'\n", score);
	}
	else if (85.0f <= score)
	{
		printf("\n%f%% is a 'A'\n", score);
	}
	else if (80.0f <= score)
	{
		printf("\n%f%% is a 'A-'\n", score);
	}
	else if (75.0f <= score)
	{
		printf("\n%f%% is a 'B+'\n", score);
	}
	else if (70.0f <= score)
	{
		printf("\n%f%% is a 'B'\n", score);
	}
	else if (65.0f <= score)
	{
		printf("\n%f%% is a 'B-'\n", score);
	}
	else if (60.0f <= score)
	{
		printf("\n%f%% is a 'C+'\n", score);
	}
	else if (55.0f <= score)
	{
		printf("\n%f%% is a 'C'\n", score);
	}
	else if (50.0f <= score)
	{
		printf("\n%f%% is a 'C-'\n", score);
	}
	else
	{
		printf("\n%f%% is a 'D'\n", score);
	}

	return 0;
}