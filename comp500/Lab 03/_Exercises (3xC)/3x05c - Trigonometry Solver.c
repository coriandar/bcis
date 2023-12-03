#include <stdio.h>
#include <math.h>

int main(void)
{
	float hyp = 0.0f;
	float opp = 0.0f;
	float adj = 0.0f;

	const float PI = 3.14159f;
	float deg = 0.0f;
	float rad = 0.0f;

	printf("What is the angle in degrees? ");
	scanf("%f", &deg);

	printf("What is the length of the hypotenuse? ");
	scanf("%f", &hyp);

	//degree to radians converter
	rad = deg * (PI / 180.0f);

	opp = hyp * sinf(rad);
	adj = hyp * cosf(rad);

	printf("\nThe length of the opposite is: %f", opp);
	printf("\nThe length of the adjacent is: %f\n", adj);

	return 0;
}