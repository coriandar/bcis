#include <stdio.h>

int main(void)
{
	printf("Enter a number (0 to quit): ");
	int user_number = 0;
	scanf("%d", &user_number);

	if (user_number == 0)
	{
		printf("\n");
		printf("No numbers entered!");
		printf("\n");
	}

	int highest_number = 0;

	while (user_number != 0)
	{
		if (user_number <= highest_number)
		{
			highest_number = highest_number;
		}
		else if (user_number >= highest_number)
		{
			highest_number = user_number;
		}
		printf("Enter a number (0 to quit): ");
		scanf("%d", &user_number);
	}
	printf("\n");
	printf("The highest number was %d.", highest_number);
	printf("\n");

	return 0;
}