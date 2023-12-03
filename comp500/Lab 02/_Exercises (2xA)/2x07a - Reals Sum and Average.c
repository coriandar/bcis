#include <stdio.h>

int main(void)
{
	float real_1 = 0.0f;
	float real_2 = 0.0f;
	float real_3 = 0.0f;
	float real_4 = 0.0f;
	float real_5 = 0.0f;
	float real_6 = 0.0f;
	float real = 0.0f;

	printf("Please enter six real numbers:\n\n");

	printf("Number 1\? ");
	scanf("%f", &real_1);

	printf("Number 2\? ");
	scanf("%f", &real_2);

	printf("Number 3\? ");
	scanf("%f", &real_3);

	printf("Number 4\? ");
	scanf("%f", &real_4);

	printf("Number 5\? ");
	scanf("%f", &real_5);

	printf("Number 6\? ");
	scanf("%f", &real_6);

	real = real_1 + real_2 + real_3 + real_4 + real_5 + real_6;
	printf("\nThe sum is: %.2f\n", real);
	printf("The average is: %.2f\n", real / 6.0f);

	return 0;
}