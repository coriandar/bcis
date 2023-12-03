#include <stdio.h>

void print_inner_space(int height, int row);
void print_outer_space(int row);
void print_base(int height);
void draw_inverted_triangle(int height);

int main(void)
{
	printf("Height\? ");
	int height = 0;
	scanf("%d", &height);

	height--;

	draw_inverted_triangle(height);

	return 0;
}

void draw_inverted_triangle(int height)
{
	print_base(height);

	for (int row = 0; row < height; row++)
	{
		print_outer_space(row);

		printf("\\");

		print_inner_space(height, row);

		printf("/\n");
	}
}

void print_outer_space(int row)
{
	for (int space = 0; space < row; space++)
	{
		printf(" ");
	}
}

void print_base(int height)
{
	for (int base = 1; base < height * 2; base++)
	{
		printf("_");
	}

	printf("_\n");
}

void print_inner_space(int height, int row)
{
	for (int space = 0; space < ((height - row )* 2) - 2 ; space++)
	{
		printf(" ");
	}
}