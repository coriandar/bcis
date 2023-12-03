#include <stdio.h>

void print_body(int total_rows);
void print_cap(int total_rows);
void print_pattern(int total_rows);


int main(void)
{
	printf("Height\? ");
	int total_rows = 0;
	scanf("%d", &total_rows);

	print_pattern(total_rows);

	return 0;
}

void print_body(int total_rows)
{
	for (int dash = 0; dash < total_rows - 2; dash++)
	{
		printf("#");
	}
}

void print_cap(int total_rows)
{
	printf("+");

	for (int dash = 0; dash < total_rows - 2; dash++)
	{
		printf("-");
	}

	printf("+");

	printf("\n");
}

void print_pattern(int total_rows)
{
	print_cap(total_rows);

	for (int current_row = 0; current_row < total_rows - 2; current_row++)
	{
		printf("|");
		print_body(total_rows);
		printf("|");
		printf("\n");
	}

	print_cap(total_rows);
}