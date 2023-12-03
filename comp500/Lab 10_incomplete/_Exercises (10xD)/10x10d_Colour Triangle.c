#include <stdio.h>
#include "p1colour.h"

void print_outer_space(int height, int row);
void print_symbol(int row, char inner_symbol);
void print_left_edge(void);
void print_right_edge(void);

int main(void)
{
	printf("Inner symbol\? ");
	char inner_symbol = '\0';
	scanf(" %c", &inner_symbol);

	printf("Symbol colour (1-15)\? ");
	int colour_symbol = 0;
	scanf("%d", &colour_symbol);


	printf("Edge colour (1-15)\? ");
	int colour_edge = 0;
	scanf("%d", &colour_edge);

	printf("Triangle height\? ");
	int height = 0;
	scanf("%d", &height);
	printf("\n");

	for (int row = 0; row < height; row++)
	{
		print_outer_space(height, row);

		set_text_colour(colour_edge, BLACK);
		print_left_edge();
		set_text_colour(WHITE, BLACK);

		set_text_colour(colour_symbol, BLACK);
		print_symbol(row, inner_symbol);

		set_text_colour(colour_edge, BLACK);
		print_right_edge();
		set_text_colour(WHITE, BLACK);

		printf("\n");
	}

	set_text_colour(WHITE, BLACK);

	return 0;
}

void print_left_edge(void)
{
	printf("/");
}

void print_right_edge(void)
{
	printf("\\");
}

void print_outer_space(int height, int row)
{
	for (int space = 1; space < height - row; space++)
	{
		printf(" ");
	}
}

void print_symbol(int row, char inner_symbol)
{
	for (int symbol = 0; symbol < row * 2; symbol++)
	{
		printf("%c", inner_symbol);
	}
}