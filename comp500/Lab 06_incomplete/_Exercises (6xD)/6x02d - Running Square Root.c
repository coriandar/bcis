#include <stdio.h>
#include <math.h>

enum Number
{
	NEGATIVE,
	POSITIVE,
	UNDEFINED
};

enum Number type = UNDEFINED;

float check_negative(float input);
float compute_square_root(float input);
void print_root(float input);

int main(void)
{
	while (1)
	{
		printf("Enter a number to square root: ");
		float input = 0.0f;
		scanf("%f", &input);

		input = check_negative(input);
		print_root(input);
	}

	return 0;
}

float check_negative(float input)
{
	if (input < 0)
	{
		input *= -1.0f;
		type = NEGATIVE;
	}
	else
	{
		type = POSITIVE;
	}

	return input;
}

float compute_square_root(float input)
{
	return sqrtf(input);
}

void print_root(float input)
{
	printf("\n");
	printf("%f ", (type == NEGATIVE) ? input * -1: input);
	printf("square rooted is the ");

	if (type == NEGATIVE)
	{
		printf("imaginary number: ");
		printf("%fi", compute_square_root(input));
	}
	else if (type == POSITIVE)
	{
		printf(" real number: ");
		printf("%f", compute_square_root(input));
	}

	printf("\n");
	printf("\n");
}