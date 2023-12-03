#include <stdio.h>

int multiply(int x, int y);

int main(void)
{
	int left = 0;
	int right = 0;
	
	printf("> ");
	scanf("%d", &left);
	printf("> ");
	scanf("%d", &right);
	printf("The multiplication of ");
	printf("%d and %d is... ", left, right);
	printf("%d\n", multiply(left, right));
	
	return 0;
}

int multiply(int x, int y)
{
	if (x == 1)
	{
		// Base case...
		return y;
	}
	else if (x > 1)
	{
		// Recursive step...
		return y + multiply(x - 1, y);
	}
	
	// Base case... when x is zero:
	return 0;
}