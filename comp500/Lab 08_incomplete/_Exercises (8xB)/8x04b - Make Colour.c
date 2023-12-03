#include <stdio.h>

// TODO: Declare Colour structure:
struct Colour
{
	int red;
	int green;
	int blue;
};

// TODO: Declare functions:
struct Colour create_colour(int r, int g, int b);
void print_colour(struct Colour colour);

int main(void)
{
	// TODO: Save the results from each call:
	struct Colour red = create_colour(255, 0, 0); // RED
	struct Colour green = create_colour(0, 255, 0); // GREEN
	struct Colour blue = create_colour(0, 0, 255); // BLUE
	struct Colour yellow = create_colour(255, 255, 0); // YELLOW
	struct Colour pink = create_colour(255, 0, 127); // PINK

	print_colour(red);
	print_colour(green);
	print_colour(blue);
	print_colour(yellow);
	print_colour(pink);

	return 0;
}

// TODO: Define functions:
struct Colour create_colour(int r, int g, int b)
{
	struct Colour create_colour;

	create_colour.red = r;
	create_colour.green = g;
	create_colour.blue = b;

	return create_colour;
}

void print_colour(struct Colour colour)
{
	printf("RGB: ");
	printf("%d, ", colour.red);
	printf("%d, ", colour.green);
	printf("%d\n", colour.blue);
}