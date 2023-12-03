/*
//REQUIREMENTS
Ensure all real numbers output are displaying to three decimal places.

//IMPLEMENTATION
Create a program that asks the user for the x and y components of a 2-tuple vector. The program must then output the vector in the vector-notation-style, by calling the print_vector function. The program must then compute the magnitude of this vector as shown on line 6 of the example output (by calling the print_magnitude function).

//DESIGN
IPO
vx, vy -> compute_magnitude -> magnitude
*/

#include <stdio.h>
#include <math.h>

void print_newline(int newline);
void print_vector(float vx, float vy);
float compute_magnitude(float vx, float vy);
void print_magnitude(float vx, float vy);

int main(void)
{
	printf("x? ");
	float vx = 0;
	scanf("%f", &vx);

	printf("y? ");
	float vy = 0;
	scanf("%f", &vy);

	print_newline(2);
	print_vector(vx, vy);
	
	print_newline(2);
	print_magnitude(vx, vy);

	print_newline(1);

	return 0;
}

void print_newline(int newline)
{
	for (int lines = 0; lines < newline; lines++)
	{
		printf("\n");
	}
	return;
}

void print_vector(float vx, float vy)
{
	printf("Vector = < %.3f, %.3f >", vx, vy);

	return;
}

float compute_magnitude(float vx, float vy)
{
	return sqrtf(((powf(vx, 2.0f)) + (powf(vy, 2.0f))));
}

void print_magnitude(float vx, float vy)
{
	printf("|< %.3f, %.3f >| = %f", vx, vy, compute_magnitude(vx, vy));

	return;
}