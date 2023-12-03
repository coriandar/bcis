#include <stdio.h>

#define PI 3.14159 f

int main(void)
{
	float radius = 0.0 f;
	
	printf("Input radius: ");
	scanf("%f", &radius);
	
	float area = PI *radius * radius;
	float circumference = 2 *PI * radius;
	
	printf("Area is %f, ", area);
	printf("Circumference is %f\n", circumference);
	
	return 0;
}