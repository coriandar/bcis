#include <stdio.h>

int main(void)
{
	float deg = 0.0f;
	float rad = 0.0f;
	const float PI = 3.14159f;

	printf("Degrees? ");
	//forgot &
	scanf("%f", &deg);

	printf("Converting...\n");

	rad = deg * (PI / 180.0f);
	printf("%f radians", rad);

	return 0;
}