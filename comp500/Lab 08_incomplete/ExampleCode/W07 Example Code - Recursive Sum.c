#include <stdio.h>

int sum(int n);

int main(void)
{
	int input = 0;
	printf("> ");
	scanf("%d", &input);
	printf("The sum is of 1 to %d is... ", input);
	printf("%d\n", sum(input));
	return 0;
}

int sum(int number)
{
	if (number != 0)
	{
		// Recursive step...
		return number + sum(number – 1);
	}
	else
	{
		// Base case...
		return (number);
	}
}