#include <stdio.h>

int main(void)
{
	float radi = 0.0f;
	float deg = 0.0f;
	const float PI = 3.14159f;

	printf("Radians? ");
	scanf("%f", &radi);

	printf("Converting...\n");

	deg = radi * (180.f / PI);
	printf("%f degrees", deg);

	return 0;
}