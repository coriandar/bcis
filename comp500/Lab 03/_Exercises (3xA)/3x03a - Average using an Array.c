#include <stdio.h>

int main(void)
{
	float numbers[5];
	float numbers_sum;
	// Is there function to sum arrays?

	printf("Please enter five real numbers:\n\n");

	printf("  First number: ");
	scanf("%f", &numbers[0]);

	printf("  Second number: ");
	scanf("%f", &numbers[1]);

	printf("  Third number: ");
	scanf("%f", &numbers[2]);

	printf("  Fourth number: ");
	scanf("%f", &numbers[3]);

	printf("  Fifth number: ");
	scanf("%f", &numbers[4]);

	printf("\nThe user entered:\n\n");

	printf("  %f then,\n", numbers[0]);
	printf("  %f then,\n", numbers[1]);
	printf("  %f then,\n", numbers[2]);
	printf("  %f then,\n", numbers[3]);
	printf("  %f\n", numbers[4]);

	numbers_sum = (numbers[0] + numbers[1] + numbers[2] + numbers[3] + numbers[4]) / 5.0f;

	printf("\nThe average of these five numbers is: %f\n", numbers_sum);

	return 0;
}