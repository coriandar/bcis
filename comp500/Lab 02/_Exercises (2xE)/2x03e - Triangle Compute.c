#include <stdio.h>

int main(void)
{
	float base = 0.0f;
	float height = 0.0f;
	float hypotenuse = 0.0f;
	float perimeter = 0.0f;
	float area = 0.0f;

	printf("Please enter three sides of a right-angle triangle:\n\n");

	printf("Base leg? ");
	scanf("%f", &base);

	printf("Height leg? ");
	scanf("%f", &height);

	printf("Hypotenuse side? ");
	scanf("%f", &hypotenuse);

	perimeter = base + height + hypotenuse;
	area = 0.5f * base * height;

	printf("\nThe perimeter is: %f\n", perimeter);
	printf("The area is: %f", area);

	return 0;
}