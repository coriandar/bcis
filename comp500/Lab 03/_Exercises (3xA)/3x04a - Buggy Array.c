#include <stdio.h>

int main(void)
{
	float div2[5];

	div2[0] = 1.0f;
	div2[1] = div2[0] / 2.0f;
	div2[2] = div2[1] / 2.0f;
	div2[3] = div2[2] / 2.0f;
	div2[4] = div2[3] / 2.0f;

	printf("Starting at %.2f\n", div2[0]);
	printf("Halved... %.2f\n", div2[1]);
	printf("Halved... %.2f\n", div2[2]);
	printf("Halved... %.2f\n", div2[3]);
	printf("Halved... %.2f\n", div2[4]);

	printf("\n");

	return 0;
}