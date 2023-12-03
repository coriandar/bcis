#include <stdio.h>

int main(void)
{
	printf("Input seven whole numbers:\n");
	printf("--------------------------\n\n");

	int number[7];

	for (int index = 0; index < 7; index++)
	{
		printf("Enter number %d: ", index + 1);
		scanf("%d", &number[index]);
	}

	printf("\nThe seven numbers are: { ");
	for (int index = 0; index < 7; index++)
	{
		printf("%d", number[index]);
		if (index < 6)
		{
			printf(", ");
		}
	}
	printf(" }\n\n");

	printf("Multiplier\? ");
	int multiplier = 0;
	scanf("%d", &multiplier);
	
	printf("\nThe seven numbers are now: { ");
	for (int index = 0; index < 7; index++)
	{
		printf("%d", number[index] * multiplier);
		if (index < 6)
		{
			printf(", ");
		}
	}
	printf(" }\n");

	return 0;
}