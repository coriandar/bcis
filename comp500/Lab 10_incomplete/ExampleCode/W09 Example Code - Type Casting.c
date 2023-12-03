#include <stdio.h>

int main(void)
{
	int numerator = 5;
	int denominator = 2;
	
	int int_result = numerator / denominator;
	float float_result = numerator / denominator;
	float cast_result = (float)numerator / denominator;
	
	printf("int_result holds: %d\n", int_result);
	printf("float_result holds: %f\n", float_result);
	printf("cast_result holds: %f\n", cast_result);
	
	return 0;
}