#include <stdio.h>
#include <assert.h>

int factorial(int n);

int main(void)
{
	int input = 0;

	printf("> ");
	scanf("%d", &input);
	assert(input >= 0);

	printf("%d! = %d\n", input, factorial(input));

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