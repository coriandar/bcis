#include <stdio.h>

// TODO: 4) Declare a function pointer typedef:
typedef float(*compute)(float);

float get_pi(void);
float compute_area(float radius);
float compute_circumference(float radius);
int define_compute(char user_compute);

int main(void)
{
	// TODO: 5) Declare an array of function pointers:
	compute operation[2];

	operation[0] = compute_area;
	operation[1] = compute_circumference;

	printf("Circle's radius? ");
	float user_radius = 0.0f;
	scanf("%f", &user_radius);

	printf("Compute area or circumference (a/c)? ");
	char user_compute = 0;
	scanf(" %c", &user_compute);

	// TODO: 6) Call the appropriate function via
	// the function pointer array element:
	float result = operation[define_compute(user_compute)](user_radius);

	// TODO: 7) Print out the result of the call.
	printf("%f\n", result);

	printf("\n");
	printf("Circle's radius? ");
	scanf("%f", &user_radius);
	printf("Compute area or circumference (a/c)? ");
	scanf(" %c", &user_compute);
	result = operation[define_compute(user_compute)](user_radius);
	printf("%f\n", result);


	return 0;
}

int define_compute(char user_compute)
{
	int compute_choice = 0;

	if (user_compute == 'a')
	{
		compute_choice = 0;
	}
	else if (user_compute == 'c')
	{
		compute_choice = 1;
	}

	return compute_choice;
}

// TODO: 1) Define get_pi
float get_pi(void)
{
	return  3.14159f;
}

// TODO: 2) Define compute_area
float compute_area(float radius)
{
	return (radius * radius) * get_pi();
}

// TODO: 3) Define compute_circumference
float compute_circumference(float radius)
{
	return 2 * get_pi() * radius;
}