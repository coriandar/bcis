#include <stdio.h>
#include <math.h>

int main(void)
{
	float height = 0.0f;
	float radius = 0.0f;
	float volume = 0.0f;
	const float PI = 3.14159f;

	printf("What is the height of the cylinder? ");
	scanf("%f", &height);

	printf("What is the radius of the cylinder? ");
	scanf("%f", &radius);

	volume = PI * height * powf(radius, 2.0f);
	printf("\nThe cylinder's volume is: %.2f ", volume);

	return 0;
}