#include <stdio.h>
int main(void)
{
	float temp = 0.0f;
	const float DEG_DIV = 5.0f / 9.0f;

	//test printf first. then add math formula.
	printf("+-----------------------+\n");
	printf("| Temperature Converter |\n");
	printf("+-----------------------+\n\n");

	printf("Please enter a temperature in Fahrenheit: ");
	scanf("%f", &temp);

	printf("\nConverting...\n\n");

	printf("%f degrees Fahrenheit is the same as...\n", temp);
	printf("%f degrees Celsius.\n", (DEG_DIV)*(temp - 32));

	return 0;
}