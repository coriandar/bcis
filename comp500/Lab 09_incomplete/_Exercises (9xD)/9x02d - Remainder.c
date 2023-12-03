#include <stdio.h>

// TODO: Declare remainder prototype:
void remainder(int numerator, int denominator, int* remainder);

int main(void)
{
	int fraction_top = 0;
	printf("Numerator? ");
	scanf("%d", &fraction_top);

	int fraction_bottom = 0;
	printf("Denominator? ");
	scanf("%d", &fraction_bottom);

	int left_over = 0;
	int* p_left_over = &left_over;

	// TODO: Call remainder with user input, and
	//       left_over reference...
	remainder(fraction_top, fraction_bottom, p_left_over);

	printf("\n");
	printf("%d over %d, ", fraction_top, fraction_bottom);
	printf("remainder is %d\n\n", left_over);

	return 0;
}

// TODO: Define remainder function:
void remainder(int numerator, int denominator, int* remainder)
{
	*remainder = numerator % denominator;
}