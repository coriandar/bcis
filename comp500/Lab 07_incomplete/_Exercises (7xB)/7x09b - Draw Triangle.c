#include <stdio.h>

void draw_triangle(int height);
void print_outer_space(int height, int row);
void print_inner_space_base(int row, int height);

int main(void)
{
	printf("Triangle height\? ");
	int height = 0;
	scanf("%d", &height);

	printf("\n");

	draw_triangle(height);

	return 0;
}

void draw_triangle(int height)
{
	for (int row = 0; row < height; row++)
	{
		print_outer_space(height, row);

		printf("/");

		print_inner_space_base(row, height);

		printf("\\\n");
	}
}

void print_outer_space(int height, int row)
{
	for (int space = 1; space < (height - row); space++)
	{
		printf(" ");
	}
}

void print_inner_space_base(int row, int height)
{
	for (int space = 0; space < row * 2; space++)
	{
		if (row <= height - 2)
		{
			printf(" ");
		}
		else if (row == height - 1)
		{
			printf("_");
		}
	}
}