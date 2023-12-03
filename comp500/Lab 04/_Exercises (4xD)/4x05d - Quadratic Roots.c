#include <stdio.h>
#include <math.h>

void print_newline(int newline);
void print_solving(float a, float b, float c);
float solve_discriminant(float a, float b, float c);
float solve_quadractic_plus(float a, float b, float c);
float solve_quadractic_minus(float a, float b, float c);
float solve_quadractic_complex1(float a, float b);
float solve_quadractic_complex2(float a, float b, float c);

int main(void)
{
	printf("Given a quadratic in the form: ax^2 + bx + c = 0");
	print_newline(2);

	printf("Enter the value of a: ");
	float a = 0.0f;
	scanf("%f", &a);

	printf("Enter the value of b: ");
	float b = 0.0f;
	scanf("%f", &b);

	printf("Enter the value of c: ");
	float c = 0.0f;
	scanf("%f", &c);

	print_solving(a, b, c);
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

void print_solving(float a, float b, float c)
{
	print_newline(1);
	printf("Solving the quadratic:");
	print_newline(2);
	printf(" ");
	printf(" ");
	printf("%fx^2 + %fx + %f = 0", a, b, c);
	print_newline(2);

	float discriminant = solve_discriminant(a, b, c);
	if (discriminant > 0)
	{
		printf("Two real roots found...");
		print_newline(2);
		printf("x is: %f", solve_quadractic_plus(a, b, c));
		print_newline(2);
		printf("Or...");
		print_newline(2);
		printf("x is: %f", solve_quadractic_minus(a, b, c));
	}
	else if (discriminant == 0)
	{
		printf("One real root found...");
		print_newline(2);
		printf("x is: %f", solve_quadractic_plus(a, b, c));
	}
	else if (discriminant < 0)
	{
		printf("Two complex roots found...");
		print_newline(2);
		printf("x is: %f", solve_quadractic_complex1(a, b));
		printf(" + ");
		printf("%fi", solve_quadractic_complex2(a, b, c));
		print_newline(2);
		printf("Or...");
		print_newline(2);
		printf("x is: %f", solve_quadractic_complex1(a, b));
		printf(" - ");
		printf("%fi", solve_quadractic_complex2(a, b, c));
	}

	return;
}

float solve_discriminant(float a, float b, float c)
{
	return (powf(b, 2.0f)) - (4.0f * a * c);
}

float solve_quadractic_plus(float a, float b, float c)
{
	return ((-1.0f * b) + sqrtf(((powf(b, 2.0f)) - (4.0f * a * c)))) / (2 * a);
}

float solve_quadractic_minus(float a, float b, float c)
{
	return ((-1.0f * b) - sqrtf(((powf(b, 2.0f)) - (4.0f * a * c)))) / (2 * a);
}

float solve_quadractic_complex1(float a, float b)
{
	return (-1.0f * b) / (2 * a);
}

float solve_quadractic_complex2(float a, float b, float c)
{
	float x = powf(b, 2.0f) - (4.0f * a * c);
	x = (x < 0) ? sqrtf(x * -1.0f) / (2 * a) : sqrtf(x) / (2 * a);

	return x;
}