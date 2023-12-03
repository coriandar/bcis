#include <stdio.h>

void print_space(int height);
void print_symbol(int row);
void print_triangle(int height);

int main(void)
{
	int height = 5;

	print_triangle(height);

	return 0;
}

void print_triangle(int height)
{
	const int HEIGHT_MAX = height;

	for (int row = 0; row < HEIGHT_MAX; row++)
	{
		print_space(height);

		printf("/");

		print_symbol(row);

		printf("\\");

		printf("\n");

		height--;
	}
}

void print_symbol(int row)
{
	for (int symbol = 0; symbol < row * 2; symbol++)
	{
		printf("#");
	}
}

void print_space(int height)
{
	for (int space = 0; space < height - 1; space++)
	{
		printf(" ");
	}
}