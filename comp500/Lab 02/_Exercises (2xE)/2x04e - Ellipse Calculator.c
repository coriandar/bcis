#include <stdio.h>

int main(void)
{
	float a_axis = 0.0f;
	float b_axis = 0.0f;
	float area = 0.0f;
	const float PI = 3.14159f;

	printf("What is the length of the ellipse's A axis? ");
	scanf("%f", &a_axis);

	printf("What is the length of the ellipse's B axis? ");
	scanf("%f", &b_axis);

	area = PI * a_axis * b_axis;
	printf("\nThe ellipse's area is: %f", area);

	return 0;
}