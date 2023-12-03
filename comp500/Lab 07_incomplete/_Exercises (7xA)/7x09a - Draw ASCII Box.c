/*
//REQUIREMENTS
The draw_ascii_box function must take 5 parameters: the character to use for the horizontal sides; the character to use for the vertical sides; the character to use for the corners; the width of the box in characters; and the height.

Define at least two helper functions to structure your algorithm.

//DESIGN
Take input and pass through.

FUNCTION draw_ascii_box
	CALL print_top_bottom
	LOOP
		CALL print_side
	ENDLOOP
	CALL print_top_bottom
ENDFUNCTION

FUNCTION print_top_bottom(int width, char corner)
	PRINT char corner
	LOOP (width - 2)
		PRINT char top_bottom
	ENDLOOP
	PRINT char corner
ENDFUNCTION

FUNCTION print_side(int height)
	PRINT char side
	LOOP (width - 2)
		PRINT 'space'
	ENDLOOP
	PRINT char side
ENDFUNCTION
*/

#include <stdio.h>

void print_newline(int newline);
void print_top_bottom(int width, char corner, char top_bottom);
void print_side(int width, char side);
void draw_ascii_box(int width, int height, char corner, char side, char top_bottom);

int main(void)
{
	printf("Width: ");
	int width;
	scanf("%d", &width);

	printf("Height: ");
	int height;
	scanf("%d", &height);

	printf("Corner symbol: ");
	char corner;
	scanf(" %c", &corner);

	printf("Top & Bottom symbol: ");
	char top_bottom;
	scanf(" %c", &top_bottom);

	printf("Side symbol: ");
	char side;
	scanf(" %c", &side);

	print_newline(1);
	draw_ascii_box(width, height, corner, side, top_bottom);

	return 0;
}

void print_newline(int newline)
{
	for (int lines = 0; lines < newline; lines++)
	{
	printf("\n");
	}

	return;
}


void print_top_bottom(int width, char corner, char top_bottom)
{
	printf("%c", corner);
	for (int symbol_t_b = 0; symbol_t_b < width - 2; symbol_t_b++)
	{
		printf("%c", top_bottom);
	}
	printf("%c", corner);
	print_newline(1);

	return;
}

void print_side(int width, char side)
{
	printf("%c", side);
	for (int symbol_side = 0; symbol_side < width - 2; symbol_side++)
	{
		printf(" ");
	}
	printf("%c", side);
	print_newline(1);

	return;
}

void draw_ascii_box(int width, int height, char corner, char side, char top_bottom)
{
	print_top_bottom(width, corner, top_bottom);

	for (int row = 0; row < height - 2; row++)
	{
		print_side(width, side);
	}

	print_top_bottom(width, corner, top_bottom);

	return;
}