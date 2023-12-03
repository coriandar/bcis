#include <stdio.h>

const float PI = 3.14159f;

void print_diagram(float radius, float height);
float compute_volume(float radius, float height);
float compute_surface_area(float radius, float height);
void print_space(int space);

int main(void)
{
	printf("Cylinder radius\? ");
	float radius = 0.0f;
	scanf("%f", &radius);

	printf("Cylinder height\? ");
	float height = 0.0f;
	scanf("%f", &height);

	print_diagram(radius, height);

	printf("The volume is: ");
	printf("%.2f\n", compute_volume(radius, height));

	printf("The surface area is: ");
	printf("%.2f\n", compute_surface_area(radius, height));
	
	return 0;
}

float compute_volume(float radius, float height)
{
	return PI * (radius * radius) * height;
}

float compute_surface_area(float radius, float height)
{
	return (2.0f * PI * radius * height) + (2.0f * PI * (radius * radius));
}

void print_space(int space)
{
	for (int repeat = 0; repeat < space; repeat++)
	{
		printf(" ");
	}
}

void print_diagram(float radius, float height)
{
	printf("\n");
	print_space(2);
	printf("_\n");

	print_space(1);
	printf("/ \\");
	print_space(2);
	printf("r = %.2f\n", radius);

	printf("|\\_/|\n");

	printf("|");
	print_space(3);
	printf("|");
	print_space(1);
	printf("h = %.2f\n", height);

	print_space(1);
	printf("\\_/\n");
	printf("\n");
}