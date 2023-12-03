#include <stdio.h>

int factorial(int n);

int main(void)
{
	int height = 0;
	printf("Output how many Pascal's Triangle rows? ");
	scanf("%d", &height);
	
	// For each row:
	for (int row = 0; row < height; ++row)
	{
		// Print leading spaces:
		for (int x = 0; x <= (height - row - 2); ++x)
		{
			printf(" ");
		}
		// Print Pascal's Triangle for this row:
		for (int x = 0; x <= row; ++x)
		{
			printf("%d ", factorial(row) /
			(factorial(x) * factorial(row - x)));
		}
		
		printf("\n");
	}
	return 0;
}

int factorial(int n)
{
	if (n <= 1)
	{
		// Base case...
		return 1;
	}
	else
	{
		// Recursive step...
		return (n * factorial(n - 1));
	}
}