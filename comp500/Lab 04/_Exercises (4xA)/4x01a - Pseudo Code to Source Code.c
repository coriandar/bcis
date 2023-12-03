//DESIGN
//	PRINT 'Enter the x value: '
//	READ x
//	PRINT 'Enter the y value: '
//	READ y
//	COMPUTE a AS x * y
//	COMPUTE b AS x + y
//	COMPUTE result AS b2 + a * (b – x) * (a + y)
//	PRINT 'Computed: '
//	PRINT result

//IMPLEMENTATION
//	Program asks user for input for x any y to compute mathematics equation.

#include <stdio.h>
#include <math.h>

int main(void)
{
	printf("Enter the x value: ");
	float x = 0.0f;
	scanf("%f", &x);

	printf("\nEnter the y value: ");
	float y = 0.0f;
	scanf("%f", &y);

	float a = x * y;
	float b = x + y;
	float result = powf(b, 2.0f) + a * (b - x) * (a + y);

	printf("\nComputed: %f\n", result);

	return 0;
}