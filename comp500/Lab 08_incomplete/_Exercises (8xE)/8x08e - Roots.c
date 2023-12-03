#include <stdio.h>

// TODO: Declare a QUADRATIC_SOLUTION enumeration here:
enum Quadratic_Solution
{
	TWO_COMPLEX,
	ONE_REAL,
	TWO_REAL
};

enum Quadratic_Solution get_solution_type(float a, float b, float c);
void print_solution_type(enum Quadratic_Solution qs);

int main(void)
{
	float a_coefficent = 0.0f;
	float b_coefficent = 0.0f;
	float c_constant = 0.0f;

	printf("y = ax^2 + bx + c\n");
	printf("a? ");
	scanf("%f", &a_coefficent);

	printf("b? ");
	scanf("%f", &b_coefficent);

	printf("c? ");
	scanf("%f", &c_constant);

	enum Quadratic_Solution result = get_solution_type(a_coefficent, b_coefficent, c_constant);

	print_solution_type(result);

	printf("\n");
	printf("y = ax^2 + bx + c\n");
	printf("a? ");
	scanf("%f", &a_coefficent);
	printf("b? ");
	scanf("%f", &b_coefficent);
	printf("c? ");
	scanf("%f", &c_constant);
	result = get_solution_type(a_coefficent, b_coefficent, c_constant);
	print_solution_type(result);

	printf("\n");
	printf("y = ax^2 + bx + c\n");
	printf("a? ");
	scanf("%f", &a_coefficent);
	printf("b? ");
	scanf("%f", &b_coefficent);
	printf("c? ");
	scanf("%f", &c_constant);
	result = get_solution_type(a_coefficent, b_coefficent, c_constant);
	print_solution_type(result);

	return 0;
}

// TODO: Define the get_solution_type function here:
enum Quadratic_Solution get_solution_type(float a, float b, float c)
{
	enum Quadratic_Solution result = 0;

	float discriminant = (b * b) - 4 * a * c;

	if (discriminant == 0)
	{
		result = ONE_REAL;
	}
	else if (discriminant < 0)
	{
		result = TWO_COMPLEX;
	}
	else if (discriminant > 0)
	{
		result = TWO_REAL;
	}

	return result;
}

// TODO: Define the print_solution_type function here:
void print_solution_type(enum Quadratic_Solution qs)
{
	if (qs == TWO_COMPLEX)
	{
		printf("Two complex solutions.\n");
	}
	else if (qs == ONE_REAL)
	{
		printf("One real solution.\n");
	}
	else if (qs == TWO_REAL)
	{
		printf("Two real solutions.\n");
	}
}