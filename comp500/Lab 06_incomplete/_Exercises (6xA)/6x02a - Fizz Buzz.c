#include <stdio.h>

int main(void)
{
	printf("Enter a whole number: ");
	int limit = 0;
	scanf("%d", &limit);

	for (int number_current = 1; number_current <= limit; number_current++)
	{
		if (number_current % 3 == 0 && number_current % 5 == 0)
		{
			printf("FizzBuzz");
			printf("\n");
		}
		else if (number_current % 3 == 0)
		{
			printf("Fizz");
			printf("\n");
		}
		else if (number_current % 5 == 0)
		{
			printf("Buzz");
			printf("\n");
		}
		else
		{
			printf("%d", number_current);
			printf("\n");
		}
	}

	return 0;
}