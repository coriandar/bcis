#include <stdio.h>

int main(void)
{
	printf("\? ");
	float input = 0;
	scanf("%f", &input);

	printf("\n");

	for (float multiply = 1.0f; multiply <= input; multiply++)
	{
		printf("1 / %.0f is %f\n", multiply, 1.0f / multiply);
	}

	return 0;
}