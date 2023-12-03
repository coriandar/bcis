#include <stdio.h>

void print_engine(void);
void print_cone(void);
void print_body(int height);
void print_space(int space);

int main(void)
{
	printf("Height\? ");
	int height = 0;
	scanf("%d", &height);
	printf("\n");

	print_cone();
	print_body(height);
	print_engine();

	return 0;
}

void print_engine(void)
{
	printf("+------+");
	printf("\n");
	print_cone();
}

void print_cone(void)
{
	for (int current_row = 0; current_row < 3; current_row++)
	{
		for (int space = 0; space < 3 - current_row; space++)
		{
			printf(" ");
		}
		printf("/");

		for (int symbol = 0; symbol < current_row * 2; symbol++)
		{
			printf(" ");
		}
		printf("\\");
		printf("\n");
	}
}

void print_body(int height)
{
	for (int repeat = 0; repeat < height; repeat++)
	{
		printf("+------+");
		printf("\n");
		for (int sides = 0; sides < 3; sides++)
		{
			printf("|");
			print_space(6);
			printf("|");
			printf("\n");
		}
	}
}

void print_space(int space)
{
	for (int repeat = 0; repeat < space; repeat++)
	{
		printf(" ");
	}
}