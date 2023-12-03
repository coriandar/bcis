#include <stdio.h>

// TODO: Declare divide prototype:
void divide(int dividend, int divisor, int* p_quotient, int* p_remainder);

int main(void)
{
	int numerator = 0;
	// number to be divided
	printf("Dividend? ");
	scanf("%d", &numerator);

	int denominator = 0;
	// divided by
	printf("Divisor? ");
	scanf("%d", &denominator);

	// result
	int quotient = 0;
	int* p_quotient = &quotient;

	// remaider
	int remainder = 0;
	int* p_remainder = &remainder;

	// TODO: Call divide...
	divide(numerator, denominator, p_quotient, p_remainder);

	printf("Quotient is %d\n", *p_quotient);
	printf("Remainder is %d\n", *p_remainder);

	return 0;
}

// TODO: Define divide function:
void divide(int dividend, int divisor, int* p_quotient, int* p_remainder)
{
	*p_quotient = dividend / divisor;
	*p_remainder = dividend % divisor;
}