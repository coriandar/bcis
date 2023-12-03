#include <stdio.h>

int is_positive(int number);
int is_negative(int number);
int is_zero(int number);

int main(void)
{
	printf("> ");
	int input = 0;
	scanf("%d", &input);

	printf("Calling is_positive: %d\n", is_positive(input));
	printf("Calling is_negative: %d\n", is_negative(input));
	printf("Calling is_zero: %d\n", is_zero(input));

	return 0;
}

int is_positive(int number)
{
	int is_positive = 0;

	if (number > 0)
	{
		is_positive = 1;
	}

	return is_positive;
}

int is_negative(int number)
{
	int is_negative = 0;

	if (number < 0)
	{
		is_negative = 1;
	}

	return is_negative;
}

int is_zero(int number)
{
	int is_zero = 0;

	if (number == 0)
	{
		is_zero = 1;
	}

	return is_zero;
}