#include <stdio.h>

struct Rectangle
{
	float width;
	float height;
};

float compute_area(struct Rectangle* p_rectangle);
float compute_permiter(struct Rectangle* p_rectangle);
void print_computes(struct Rectangle* p_rectangle);

int main(void)
{
	struct Rectangle rectangle;
	struct Rectangle* p_rectangle = &rectangle;
	
	printf("Rectangle width\? ");
	scanf("%f", &p_rectangle->width);

	printf("Rectangle height\? ");
	scanf("%f", &p_rectangle->height);

	print_computes(p_rectangle);

	return 0;
}

float compute_area(struct Rectangle* p_rectangle)
{
	return p_rectangle->width * p_rectangle->height;
}

float compute_permiter(struct Rectangle* p_rectangle)
{
	return (p_rectangle->width * 2.0f) + (p_rectangle->height * 2.0f);
}

void print_computes(struct Rectangle* p_rectangle)
{
	printf("Area: ");
	printf("%.2f\n", compute_area(p_rectangle));

	printf("Perimeter: ");
	printf("%.2f\n", compute_permiter(p_rectangle));
	printf("\n");
}