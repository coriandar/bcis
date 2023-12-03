#include <stdio.h>

void zero(float matrix[3][3]);
void identity(float matrix[3][3]);
void print(float matrix[3][3]);
void print_space(int space);

int main(void)
{
	float matrix[3][3];

	zero(matrix);
	print(matrix);

	identity(matrix);
	print(matrix);

	return 0;
}

void zero(float matrix[3][3])
{
	for (int row = 0; row < 3; row++)
	{
		for (int column = 0; column < 3; column++)
		{
			matrix[row][column] = 0.0f;
		}
	}
}

void identity(float matrix[3][3])
{
	for (int row = 0; row < 3; row++)
	{
		for (int column = 0; column < 3; column++)
		{
			if (row == column)
			{
				matrix[row][column] = 1.0f;
			}
			else
			{
				matrix[row][column] = 0.0f;
			}
		}
	}
}

void print_space(int space)
{
	for (int repeat = 0; repeat < space; repeat++, printf(" "));
}

void print_line(int line)
{
	printf("+-");
	print_space(line);
	printf("-+\n");
}

void print(float matrix[3][3])
{
	print_line(20);
	printf("|");
	print_space(2);

	int current = 1;

	for (int row = 0; row < 3; row++)
	{
		for (int column = 0; column < 3; column++)
		{
			if (current % 3 == 0)
			{
				printf("%.2f", matrix[row][column]);
				print_space(2);
				printf("|");
				printf("\n");

				if (current != 9)
				{
					printf("|");
					print_space(2);
				}
			}
			else
			{
				printf("%.2f ", matrix[row][column]);
				print_space(2);
			}

			current++;
		}
	}

	print_line(20);
}