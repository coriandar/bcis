/*
//DESIGN
1. Verify input even or odd.
2. PRINT top triangle.
3. PRINT middle part. x2 if even.
4. PRINT invert triangle.
*/

#include <stdio.h>

void print_top_triangle_odd(int max_height);
void print_inverted_triangle_odd(int max_height);
void print_middle_row_odd(int input_height);

int main(void)
{
	printf("> ");
	int input_height = 0;
	scanf("%d", &input_height);

	int even_input_flag = 0;
	int half_max_height = 0;

	if (input_height % 2 == 0)
	{
		even_input_flag = 1;
		input_height--;
	}

	if (input_height > 0)
	{
		half_max_height = (input_height - 1) / 2;

		print_top_triangle_odd(half_max_height);
		print_middle_row_odd(input_height);

		if (even_input_flag == 1)
		{
			print_middle_row_odd(input_height);
		}

		print_inverted_triangle_odd(half_max_height);
	}
	else
	{
		printf("Too small!\n");
	}

	return 0;
}

void print_top_triangle_odd(int half_max_height)
{
	int height = half_max_height;

	for (int row = 1; row <= half_max_height; row++)
	{
		for (int space = 0; space < height; space++)
		{
			printf(" ");
		}

		for (int symbol = 0; symbol < (row * 2) - 1; symbol++)
		{
			printf("*");
		}

		height--;
		printf("\n");
	}
}

void print_inverted_triangle_odd(int half_max_height)
{
	int height = half_max_height;

	for (int row = 1; row <= half_max_height; row++)
	{
		for (int space = 0; space < row; space++)
		{
			printf(" ");
		}

		for (int symbol = 0; symbol < (height * 2) - 1; symbol++)
		{
			printf("*");
		}

		height--;
		printf("\n");
	}
}

void print_middle_row_odd(int input_height)
{
	for (int middle_row = 0; middle_row < input_height; middle_row++)
	{
		printf("*");
	}
	printf("\n");
}