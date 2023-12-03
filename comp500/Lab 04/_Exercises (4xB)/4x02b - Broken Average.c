//IMPLEMENTATION
//	This program is intended to allow the user to input 
//	three real numbers and then calculate the average
//	of the three real numbers.

#include <stdio.h>

int main(void)
{
	float x = 0.0f;
	float y = 0.0f;
	float z = 0.0f;

	printf("Input first number: ");
	scanf("%f", &x);

	printf("Input second number: ");
	scanf("%f", &y);

	printf("Input third number: ");
	scanf("%f", &z);

	float average = (x + y + z) / 3.0f;

	printf("Average is %f\n", average);

	return 0;
}