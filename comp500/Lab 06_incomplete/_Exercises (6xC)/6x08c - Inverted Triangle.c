#include <stdio.h>

void print_triange_symbols(int height);
void print_triange_spaces(int row);
void print_triange_top(int height);

int main(void)
{
	printf("Inverted triangle's height\? ");
	int max_height = 0;
	scanf("%d", &max_height);

	int height = max_height - 1;

	print_triange_top(height);
	for (int row = 0; row <= max_height - 1; row++)
	{
		print_triange_spaces(row);
		print_triange_symbols(height);
		height--;
	}

	return 0;
}


void print_triange_top(int height)
{
	for (int x = 0; x < (height + 1) * 2; x++)
	{
		printf("_");
	}

	printf("\n");
}

void print_triange_spaces(int row)
{
	for (int x = 0; x < row; x++)
	{
		printf(" ");
	}
}

void print_triange_symbols(int height)
{
	if (height > 0)
	{
		printf("\\");
		for (int x = 0; x < height * 2; x++)
		{
			printf("#");
		}
		printf("/");
		printf("\n");
	}
	else if (height == 0)
	{
		printf("\\");
		printf("/");
		printf("\n");
	}
}