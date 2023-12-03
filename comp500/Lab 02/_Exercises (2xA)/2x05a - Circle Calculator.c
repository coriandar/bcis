#include <stdio.h>
#include <math.h>

int main(void)
{
	float radi = 1.0f;
	const float PI = 3.14159f;

	printf("Circle Calculator:\n");
	printf("******************\n\n");

	printf("Please enter the radius of a circle: ");
	scanf("%f", &radi);

	printf("\nCalculating...\n\n");

	printf("A circle with radius %f has: \n\n", radi);

	printf("  - An area of: %f\n", PI*(powf(radi, 2.0)));
	printf("  - A circumference of: %f\n\n", 2.0f*PI*radi);

	radi = 2.0f*radi;
	printf("Also, did you know a circle with radius %f has:\n\n", radi);

	printf(" - An area of: %f\n", PI*(powf(radi, 2.0)));
	printf(" - A circumference of: %f\n", 2.0f*PI*radi);

	return 0;
}