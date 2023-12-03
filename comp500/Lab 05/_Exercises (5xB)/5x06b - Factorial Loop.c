#include <stdio.h>

//int compute_factorial(int num);

int main(void)
{
	printf("Enter a non-negative whole number: ");
	int number = 0;
	scanf("%d", &number);

	// Recursive
	//int result = compute_factorial(number);

	int result = 1;
	for (int current = 1; current <= number; current++)
	{
		result *= current;
	}

	printf("\n%d! is %d\n", number, result);

	return 0;
}

/*
int compute_factorial(int num)
{
	if (num >= 1)
	{
		return (num * compute_factorial(num - 1));
	}

	return 1;
}
*/