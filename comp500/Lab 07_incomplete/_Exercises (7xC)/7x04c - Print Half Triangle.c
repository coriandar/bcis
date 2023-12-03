#include <stdio.h>

void print_pattern(int total_rows);
void print_spaces(int total_rows, int current_row);
void print_symbol(int current_row);

int main(void)
{
	printf("Height\? ");
	int total_rows = 0;
	scanf("%d", &total_rows);

	print_pattern(total_rows);

	return 0;
}

void print_pattern(int total_rows)
{
	for (int current_row = 1; current_row <= total_rows; current_row++)
	{
		print_spaces(total_rows, current_row);

		printf("/");

		print_symbol(current_row);

		printf("|");

		printf("\n");

	}
}

void print_spaces(int total_rows, int current_row)
{
	for (int space = 0; space < total_rows - current_row; space++)
	{
		printf(" ");
	}
}
void print_symbol(int current_row)
{
	for (int symbol = 0; symbol < (current_row * 1) - 1; symbol++)
	{
		printf("#");
	}
}