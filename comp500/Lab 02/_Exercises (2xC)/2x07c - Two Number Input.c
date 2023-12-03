#include <stdio.h>
#include <math.h>

int main(void)
{
	float n_1 = 0.0f;
	float n_2 = 0.0f;
	float n_1sq = 0.0f;
	float n_2sq = 0.0f;

	printf("Number 1? ");
	scanf("%f", &n_1);

	printf("Number 2? ");
	scanf("%f", &n_2);

	printf("\nSum is %f\n", n_1 + n_2);

	printf("\nAverage is %f\n\n", (n_1 + n_2) / 2.0f);

	n_1sq = powf(n_1, 2.0f);
	n_2sq = powf(n_2, 2.0f);

	printf("Sum of the sqaures is %f", n_1sq + n_2sq);

	return 0;
}