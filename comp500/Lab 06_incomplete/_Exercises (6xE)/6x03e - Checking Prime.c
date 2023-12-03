#include <stdio.h>

int main(void)
{
	int prime_flag = 1;
	int k = 2;

	printf("Input a whole number: ");
	int number = 0;
	scanf("%d", &number);

	printf("\n");

	while (k <= (number - 1) && prime_flag != 0)
	{
		if (number % k == 0)
		{
			prime_flag = 0;
		}

		k++;
	}

	printf("%d ", number);

	if (prime_flag == 1)
	{
		printf("is a prime number!");
	}
	else
	{
		printf("is a not a prime number!");
	}

	printf("\n");

	return 0;
}