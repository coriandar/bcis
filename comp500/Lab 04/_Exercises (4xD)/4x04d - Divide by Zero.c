#include <stdio.h>

int main(void)
{
	printf("Enter the numerator: ");
	float num = 0.0f;
	scanf("%f", &num);

	printf("Enter the denominator: ");
	float den = 0.0f;
	scanf("%f", &den);

	printf("\nTrying to calculate: %f / %f\n", num, den);

	if (den == 0)
	{
		printf("Unable to calculate due to divide by zero!\n");
	}
	else
	{
		printf("The result is: %f\n", num / den);
	}

	return 0;
}