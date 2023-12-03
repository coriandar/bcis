#include <stdio.h>

int main(void)
{
	float base = 0.0f;
	float height = 0.0f;
	float area = 0.0f;

	printf("What is the length of the triangle's base? ");
	scanf("%f", &base);

	printf("\nWhat is the height of the triangle? ");
	scanf("%f", &height);

	area = 0.5f * (base * height);
	printf("\nThe triangle's area is: %.2f", area);

	return 0;
}