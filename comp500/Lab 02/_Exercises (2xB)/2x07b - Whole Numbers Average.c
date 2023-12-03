#include <stdio.h>

int main(void)
{
	float n_1 = 0.0f;
	float n_2 = 0.0f;
	float n_3 = 0.0f;
	float n_4 = 0.0f;
	float n_5 = 0.0f;
	float avg = 0.0f;

	printf("Please enter five whole numbers:\n\n");

	printf("  First number: ");
	scanf("%f", &n_1);

	printf("  Second number: ");
	scanf("%f", &n_2);

	printf("  Third number: ");
	scanf("%f", &n_3);

	printf("  Fourth number: ");
	scanf("%f", &n_4);

	printf("  Fifth number: ");
	scanf("%f", &n_5);

	avg = (n_1 + n_2 + n_3 + n_4 + n_5)/5.0f;
	printf("\nThe average of these five numbers is: %f", avg);

	return 0;
}