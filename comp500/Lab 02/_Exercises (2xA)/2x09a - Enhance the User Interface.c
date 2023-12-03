#include <stdio.h>

int main(void)
{
	//pupose? get average of 3 numbers
	float a = 0.0f;
	float b = 0.0f;
	float c = 0.0f;
	printf("Average of three numbers:\n");

	printf("> Enter real number 1: ");
	scanf("%f", &a);

	printf("> Enter real number 2: ");
	scanf("%f", &b);

	printf("> Enter real number 3: ");
	scanf("%f", &c);

	float d = a + b + c;
	float e = d / 3.0f;

	printf("%f\n", e);

	return 0;
}