#include <stdio.h>

int main(void)
{
	float area = 0.0f;
	float axis_len = 0.0f;
	float axis_other = 0.0f;
	const float PI = 3.14159f;

	printf("What is the ellipse's area? ");
	scanf("%f", &area);

	printf("What is the length of one of the ellipse's axes? ");
	scanf("%f", &axis_len);

	axis_other = area / (PI * axis_len);
	printf("\nThe ellipse's other axis is: %.2f", axis_other);

	return 0;
}