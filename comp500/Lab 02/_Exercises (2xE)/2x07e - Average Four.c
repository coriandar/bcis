#include <stdio.h>

int main(void)
{
	float n_1 = 0.0f;
	float n_2 = 0.0f;
	float n_3 = 0.0f;
	float n_4 = 0.0f;
	float sum = 0.0f;
	float avg = 0.0f;

	printf("Please enter four real numbers:\n\n");\

	printf("Number 1? ");
	scanf("%f", &n_1);

	printf("Number 2? ");
	scanf("%f", &n_2);

	printf("Number 3? ");
	scanf("%f", &n_3);

	printf("Number 4? ");
	scanf("%f", &n_4);

	sum = n_1 + n_2 + n_3 + n_4;
	printf("\nThe sum is: %.2f", sum);

	avg = sum / 4.0f;
	printf("\nThe average is: %.2f", avg);

	return 0;
}