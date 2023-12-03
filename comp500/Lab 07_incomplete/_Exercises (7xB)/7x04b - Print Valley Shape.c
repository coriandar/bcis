#include <stdio.h>

void print_pattern(int total_rows);
void print_left_right_angle(int row);
void print_right_right_angle(int row, int total_rows);

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
	for (int row = 0; row < total_rows; row++)
	{
		print_left_right_angle(row);
		print_right_right_angle(row, total_rows);
		printf("\n");
	}
}

void print_right_right_angle(int row, int total_rows)
{
	for (int symbol = 1; symbol < ((total_rows - row) * 2) - 1; symbol++)
	{
		printf(" ");
	}
	
	printf("/");
	for (int symbol = 0; symbol <= row; symbol++)
	{
		printf("#");
	}

}

void print_left_right_angle(int row)
{
	for (int symbol = 0; symbol <= row; symbol++)
	{
		printf("#");
	}

	printf("\\");
}