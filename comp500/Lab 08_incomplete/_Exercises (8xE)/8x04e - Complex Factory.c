#include <stdio.h>
#include <math.h>

struct Complex_Number
{
	float real;
	float imaginary;
};

struct Complex_Number create_from_cartesian(float real, float imaginary);
struct Complex_Number create_from_polar(float radius, float theta);
void print_complex_number(struct Complex_Number complex_number);

int main(void)
{
	int looping = 1;

	do
	{
		struct Complex_Number new_number;

		float real = 0.0f;
		float imaginary = 0.0f;
		float radius = 0.0f;
		float theta = 0.0f;

		char type = 0;
		printf("Complex Number input as Cartesian or polar (c/p)? ");
		scanf(" %c", &type);

		if ('c' == type)
		{
			// TODO: Query the user for the real and imaginary values
			printf("Input real: ");
			scanf("%f", &real);

			printf("Input imaginary: ");
			scanf("%f", &imaginary);

			// TODO: Create a new complex number using Cartesian factory
			new_number = create_from_cartesian(real, imaginary);

			// TODO: Print the complex number
			print_complex_number(new_number);
		}
		else if ('p' == type)
		{
			// TODO: Query the user for the radius and theta values
			printf("Input radius: ");
			scanf("%f", &radius);

			printf("Input theta (in radians): ");
			scanf("%f", &theta);

			// TODO: Create a new complex number using polar factory
			new_number = create_from_polar(radius, theta);

			// TODO: Print the complex number
			print_complex_number(new_number);
		}
		else if ('q' == type)
		{
			looping = 0;
		}
		else
		{
			printf("Error: Unknown input!\n");
		}

		printf("\n");
	}
	while (looping);

	return 0;
}

// TODO: Define functions here:
struct Complex_Number create_from_cartesian(float real, float imaginary)
{
	struct Complex_Number cartesian;

	cartesian.real = real;
	cartesian.imaginary = imaginary;

	return cartesian;
}

void print_complex_number(struct Complex_Number complex_number)
{
	printf("%.2f ", complex_number.real);
	printf("+ ");
	printf("%.2fi\n", complex_number.imaginary);
}

struct Complex_Number create_from_polar(float radius, float theta)
{
	struct Complex_Number polar;
	
	polar.real = radius * cos(theta);
	polar.imaginary = radius * sin(theta);

	return polar;
}