#include <stdio.h>

struct Triangle
{
	int height;
	char inner_symbol;
};

void print_triangle(struct Triangle triangle)
{
	// TODO: 2) Insert your code here...
	int height = triangle.height;

	for (int current_row = 0; current_row < triangle.height; current_row++)
	{
		for (int space = 0; space < height; space++)
		{
			printf(" ");
		}

		printf("/");

		for (int symbol = 0; symbol < current_row * 2; symbol++)
		{
			printf("%c", triangle.inner_symbol);
		}

		printf("\\\n");

		height--;
	}
}

int main(void)
{
	// TODO: 1) Insert your code here...
	struct Triangle triangle;

	printf("Triangle's height\? ");
	scanf("%d", &triangle.height);

	printf("Triangle's symbol\? ");
	scanf(" %c", &triangle.inner_symbol);

	print_triangle(triangle);

	return 0;
}