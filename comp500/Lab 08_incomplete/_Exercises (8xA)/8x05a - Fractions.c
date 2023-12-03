#include <stdio.h>

struct Fraction
{
	int numerator;
	int denominator;
};

int compute_bc(struct Fraction a, struct Fraction b);
int compute_ad(struct Fraction a, struct Fraction b);
int compute_denominator(struct Fraction a, struct Fraction b);
struct Fraction divide_fractions(struct Fraction a, struct Fraction b);

struct Fraction add_fractions(struct Fraction a, struct Fraction b);
struct Fraction subtract_fractions(struct Fraction a, struct Fraction b);
struct Fraction multiply_fractions(struct Fraction a, struct Fraction b);

int main(void)
{
	// b/a +- d/c = bc +- ad / ac
	struct Fraction a;
	a.numerator = 1;
	a.denominator = 2;

	struct Fraction b;
	b.numerator = 1;
	b.denominator = 4;

	struct Fraction add = add_fractions(a, b);
	struct Fraction subtract = subtract_fractions(a, b);
	struct Fraction multiply = multiply_fractions(a, b);
	struct Fraction divide = divide_fractions(a, b);

	printf("Input a: 1/2\n");
	printf("Input b: 1/4\n");
	printf("\n");

	printf("Add: ");
	printf("%d / %d\n", add.numerator, add.denominator);

	printf("Subtract: ");
	printf("%d / %d\n", subtract.numerator, subtract.denominator);

	printf("Multiply: ");
	printf("%d / %d\n", multiply.numerator, multiply.denominator);

	printf("Divide: ");
	printf("%d / %d\n", divide.numerator, divide.denominator);

	return 0;
}

/*
int GCD(int number1, int number2)
{
  if (number1 % number2 == 0)
  {
	return number2;
  }
  else
  {
	return GCD(number2, number1 % number2);
  }
}
*/

struct Fraction add_fractions(struct Fraction a, struct Fraction b)
{
	struct Fraction add_fractions;

	add_fractions.numerator = compute_bc(a, b) + compute_ad(a, b);
	add_fractions.denominator = a.denominator * b.denominator;

	return add_fractions;
}

struct Fraction subtract_fractions(struct Fraction a, struct Fraction b)
{
	struct Fraction subtract_fractions;

	subtract_fractions.numerator = compute_bc(a, b) - compute_ad(a, b);
	subtract_fractions.denominator = compute_denominator(a, b);

	return subtract_fractions;
}

struct Fraction multiply_fractions(struct Fraction a, struct Fraction b)
{
	struct Fraction multiply_fractions;

	multiply_fractions.numerator = a.numerator * b.numerator;
	multiply_fractions.denominator = compute_denominator(a, b);

	return multiply_fractions;
}

struct Fraction divide_fractions(struct Fraction a, struct Fraction b)
{
	struct Fraction divide_fractions;

	divide_fractions.numerator = a.numerator * b.denominator;
	divide_fractions.denominator = a.denominator * b.numerator;

	return divide_fractions;
}

int compute_denominator(struct Fraction a, struct Fraction b)
{
	return a.denominator * b.denominator;
}

int compute_bc(struct Fraction a, struct Fraction b)
{
	return a.numerator * b.denominator;
}

int compute_ad(struct Fraction a, struct Fraction b)
{
	return a.denominator * b.numerator;
}