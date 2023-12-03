#include <stdio.h>
#include <math.h>

// TODO: Declare structure types here:

struct Polar convert_to_polar(struct Cartesian point);
struct Cartesian convert_to_cartesian(struct Polar point);
void print_polar(struct Polar to_print);
void print_cartesian(struct Cartesian to_print);

int main(void)
{
	struct Cartesian user_input;
	struct Polar polar;
	struct Cartesian check;

	printf("Cartesian x? ");
	scanf("%f", &user_input.x);

	printf("Cartesian y? ");
	scanf("%f", &user_input.y);

	polar = convert_to_polar(user_input);

	check = convert_to_cartesian(polar);

	print_polar(polar);
	print_cartesian(check);

	return 0;
}

// TODO: Define functions here: