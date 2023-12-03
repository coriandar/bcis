#include <stdio.h>

int main(void)
{
	printf("Input five whole numbers:\n");
	printf("-------------------------\n\n");

	int number[5];
	int const MAX = 5;

	for (int index = 0; index < MAX; index++)
	{
		printf("Enter number %d: ", index + 1);
		scanf("%d", &number[index]);
	}

	printf("\nThe five numbers are: { ");
	for (int index = 0; index < MAX; index++)
	{
		printf("%d", number[index]);
		if (index < MAX - 1 )
		{
			printf(", ");
		}
	}
	printf(" }\n\n");

	printf("Would you like to sum or multiply the elements (s/m)\? ");
	char operation = '\0';
	scanf(" %c", &operation);

	if (operation == 's')
	{
		printf("\nThe sum of ");
		int sum = 0;
		for (int index = 0; index < MAX; index++)
		{
			printf("%d", number[index]);
			sum += number[index];
			if (index < 4)
			{
				printf(" + ");
			}
			else
			{
				printf(" is %d", sum);
			}
		}
		printf("\n");
	}
	else if (operation == 'm')
	{
		printf("\nThe multiplication of ");
		int multi = 1;
		for (int index = 0; index < MAX; index++)
		{
			printf("%d", number[index]);
			multi *= number[index];
			if (index < 4)
			{
				printf(" * ");
			}
			else
			{
				printf(" is %d", multi);
			}
		}
		printf("\n");
	}

	return 0;
}