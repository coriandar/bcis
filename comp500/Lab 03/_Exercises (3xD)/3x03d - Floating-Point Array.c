#include <stdio.h>

int main(void)
{
	float real[7];
	float product = 0.0f;

	printf("Input real number 1: ");
	scanf("%f", &real[0]);

	printf("Input real number 2: ");
	scanf("%f", &real[1]);

	printf("Input real number 3: ");
	scanf("%f", &real[2]);

	printf("Input real number 4: ");
	scanf("%f", &real[3]);

	printf("Input real number 5: ");
	scanf("%f", &real[4]);

	printf("Input real number 6: ");
	scanf("%f", &real[5]);

	printf("Input real number 7: ");
	scanf("%f", &real[6]);
	
	printf("\nInput was: { %.2f, %.2f, %.2f, %.2f, %.2f, %.2f, %.2f }\n\n", real[0], real[1], real[2], real[3], real[4], real[5], real[6]);

	product = real[0] * real[1] * real[2] * real[3] * real[4] * real[5] * real[6];

	printf("The product of the numbers input is: %.2f\n", product);

	return 0;
}