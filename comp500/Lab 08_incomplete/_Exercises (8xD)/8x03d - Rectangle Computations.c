#include <stdio.h>

struct Rectangle
{
	float height;
	float width;
};

float compute_area(struct Rectangle rectangle);
float compute_perimeter(struct Rectangle rectangle);
void detect_dimensions(struct Rectangle rectangle);

int main(void)
{
	struct Rectangle rectangle;

	printf("Height\? ");
	scanf("%f", &rectangle.height);

	printf("Width\? ");
	scanf("%f", &rectangle.width);

	printf("Area: ");
	printf("%.2f\n", compute_area(rectangle));
	printf("Perimeter: ");
	printf("%.2f\n", compute_perimeter(rectangle));

	detect_dimensions(rectangle);

	return 0;
}

float compute_area(struct Rectangle rectangle)
{
	return rectangle.height * rectangle.width;
}

float compute_perimeter(struct Rectangle rectangle)
{
	return (rectangle.height * 2.0f) + (rectangle.width * 2.0f);
}

void detect_dimensions(struct Rectangle rectangle)
{
	printf("Dimensions: ");
	printf("%.2f", rectangle.height);
	printf(" x ");
	printf("%.2f", rectangle.width);
	printf(" (");
	printf("%s", (rectangle.height == rectangle.width) ? "Square" : "Rectangle");
	printf(")");
	printf("\n");
}