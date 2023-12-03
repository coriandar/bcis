/*
//REQUIREMENTS
Use following prototypes:
void print_diagram(float width, float height);
float compute_area(float width, float height);
float compute_perimeter(float width, float height);

//IMPLEMENTATION
Create a program that asks the user for the width and height of a rectangle.The program must then output an ASCII art diagram(always the same 7 - by - 3 shape shown below) and then compute the area and perimeter, displaying the result to three decimal places.

//DESIGN
1. INPUT width
2. INPUT height
4. PRINT diagram
5. CALL compute_area
6. CALL compute_perimeter
7. PRINT area is: %d area
8. PRINT perimeter is: %d perimeter

IPO width, height --> print_diagram process --> diagram
IPO width, height --> compute_area --> area
IPO width, height --> compute_perimeter --> perimeter

//LEARN
Use prototypes.
IPO tables.
*/

#include <stdio.h>

//Prototypes
void print_diagram(float width, float height);
float compute_area(float width, float height);
float compute_perimeter(float width, float height);

int main(void)
{
	float width = 0.0f;
	printf("Rectangle width\? ");
	scanf("%f", &width);

	float height = 0.0f;
	printf("Rectangle height\? ");
	scanf("%f", &height);

	printf("\n");
	print_diagram(width, height);
	printf("\n");

	printf("The area is: %.3f\n", compute_area(width, height));
	printf("The perimeter is: %.3f\n", compute_perimeter(width, height));

	return 0;
}

//Definitions
void print_diagram(float width, float height)
{
	printf(" %.2f", width);
	printf("\n");
	printf("+-----+\n");
	printf("|     | %.2f\n", height);
	printf("+-----+\n");

	return;
}

float compute_area(float width, float height)
{
	return (width * height);
}

float compute_perimeter(float width, float height)
{
	return (width + width + height + height);
}