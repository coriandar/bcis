#include <stdio.h>

int main(void)
{
	float radius = 0.0f;
	const float PI = 3.14159f;

	printf("What is the radius: ");
	scanf("%f", &radius);

	float area = PI * radius * radius;
	float circum = 2.0f * PI * radius;

	printf("The area is: %f\n", area);
	printf("The circumference is: %f\n", circum);

	return 0;
}