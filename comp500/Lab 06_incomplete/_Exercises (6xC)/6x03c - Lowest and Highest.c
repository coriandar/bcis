#include <stdio.h>

int main(void)
{
	int input = 0;
	int count = 0;
	int low = 0;
	int high = 0;

	do
	{
		printf("Enter a number (0 to stop): ");
		scanf("%d", &input);

		if (count == 0)
		{
			low = input;
			high = input;
		}

		if (input != 0)
		{
			if (low > input)
			{
				low = input;
			}
		}
		
		if (high < input)
		{
			high = input;
		}

		count++;
	}
	while (input != 0);

	printf("\nThe lowest number entered was: %d\n", low);
	printf("\nThe highest number entered was: %d\n", high);

	return 0;
}