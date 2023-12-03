#include <stdio.h>

int main(void)
{
	int cents_in = 0;
	int dollars_out = 0;
	int cents_out = 0;

	printf("Number of cents? ");
	scanf("%d", &cents_in);

	dollars_out = cents_in / 100;

	// divide by 100 get r = cents.
	cents_out = cents_in % 100;
	//nope
	//cents_out = cents_in - 100 * dollars_out / 10;

	printf("\n%d dollars and %d cents.", dollars_out, cents_out);

	return 0;
}