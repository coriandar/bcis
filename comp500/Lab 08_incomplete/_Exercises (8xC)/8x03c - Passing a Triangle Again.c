#include <stdio.h>

struct Triangle
{
	int height;
	char inner_symbol;
};

void print_inverted(struct Triangle inverted_triangle)
{
	// TODO: 2) Insert your code here...
	int height = inverted_triangle.height;

	for (int top = 0; top < height * 2; top++)
	{
		printf("_");
	}

	printf("\n");

	for (int c_row = 0; c_row < inverted_triangle.height; c_row++)
	{
		for (int space = 0; space < c_row; space++)
		{
			printf(" ");
		}

		printf("\\");

		for (int symbol = 0; symbol < (height * 2) - 2; symbol++)
		{
			printf("#");
		}

		printf("/\n");
		height--;
	}
}

int main(void)
{
	struct Triangle inverted_triangle;

	// TODO: 1) Insert your code here...
	printf("Inverted triangle's height\? ");
	scanf("%d", &inverted_triangle.height);

	printf("Inverted triangle's symbol\? ");
	scanf(" %c", &inverted_triangle.inner_symbol);

	print_inverted(inverted_triangle);

	return 0;
}