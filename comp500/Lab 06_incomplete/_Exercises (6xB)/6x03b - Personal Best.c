#include <stdio.h>

void print_newline(int newline);

int main(void)
{
	printf("Enter your daily run time in minutes.");
	print_newline(2);

	int days[7];

	for (int index = 0; index < 7; index++)
	{
		printf("Day %d: ", index + 1);
		scanf("%d", &days[index]);
	}

	int lowest = days[0];

	for (int index = 0; index < 7; index++)
	{
		if (lowest > days[index])
		{
			lowest = days[index];
		}
	}

	print_newline(1);
	printf("Your best time this week was %d minutes.", lowest);

	return 0;
}

void print_newline(int newline)
{
	for (int repeat = 0; repeat < newline; repeat++)
	{
		printf("\n");
	}
}