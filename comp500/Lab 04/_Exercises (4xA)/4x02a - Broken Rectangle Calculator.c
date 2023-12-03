//IMPLEMENTATION
//	This program is intended to allow the user to input 
//	the width and height of a rectangle and then
//	calculate and output the rectangle’s perimeter and area.

#include <stdio.h>

int main(void)
{
	float width = 0.0f;
	float height = 0.0f;

	printf("Rectangle\'s Width: ");
	scanf("%f", &width);

	printf("Rectangle\'s Height: ");
	scanf("%f", &height);

	float area = width * height;
	float perimeter = width + width + height + height;

	printf("Area is %f\n", area);
	printf("Perimeter is %f\n", perimeter);

	return 0;
}