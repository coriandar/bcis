#include <stdio.h>

int main(void)
{
	float input[7];
	float sum = 0.0f;

	printf("Please enter seven real numbers:\n\n");

	printf("Input 1: ");
	scanf("%f", &input[0]);

	printf("Input 2: ");
	scanf("%f", &input[1]);

	printf("Input 3: ");
	scanf("%f", &input[2]);

	printf("Input 4: ");
	scanf("%f", &input[3]);

	printf("Input 5: ");
	scanf("%f", &input[4]);
				
	printf("Input 6: ");
	scanf("%f", &input[5]);
				
	printf("Input 7: ");
	scanf("%f", &input[6]);

	printf("\nArray input was: { %.1f, %.1f, %.1f, %.1f, %.1f, %.1f, %.1f }\n\n", input[0], input[1], input[2], input[3], input[4], input[5], input[6]);

	sum = input[0] + input[1] + input[2] + input[3] + input[4] + input[5] + input[6];
	printf("The sum of the array elements is: %.1f", sum);

	return 0;
}