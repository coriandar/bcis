/*
//LEARNT
Change 'Active solution platform' x86
*/

#include <stdio.h>
#include "p1colour.h"

void print_smoke(void);
void print_roof(void);
void print_walls(void);
void print_ground(void);
void print_symbol(int repeat, char symbol);

int main(void)
{
	print_smoke();
	print_roof();
	print_walls();
	print_ground();

	return 0;
}

void print_smoke(void)
{
	set_text_colour(DARKGRAY, BLACK);
	print_symbol(15, ' ');
	printf("(");
	print_symbol(2, ' ');
	printf(")\n");

	print_symbol(16, ' ');
	printf(") )\n");

	print_symbol(15, ' ');
	printf("( (\n");

	print_symbol(16, ' ');
	printf("()\n");
}

void print_roof(void)
{
	set_text_colour(LIGHTRED, BLACK);
	print_symbol(8, ' ');
	print_symbol(8, '_');
	printf("[_]");
	print_symbol(8, '_');
	print_symbol(16, ' ');
	printf("\n");

	print_symbol(7, ' ');
	printf("/\\");
	print_symbol(9, ' ');
	print_symbol(6, '_');
	print_symbol(3, ' ');
	printf("\\\n");

	print_symbol(6, ' ');
	printf("//-\\");
	print_symbol(8, ' ');
	printf("\\");
	print_symbol(4, ' ');
	printf("/\\");
	print_symbol(3, ' ');
	printf("\\\n");

	print_symbol(5, ' ');
	printf("//---\\");
	print_symbol(8, ' ');
	printf("\\__/");
	print_symbol(2, ' ');
	printf("\\");
	print_symbol(3, ' ');
	printf("\\\n");

	print_symbol(4, ' ');
	printf("//-----\\");
	print_symbol(8, ' ');
	printf("\\ |[]|");
	print_symbol(4, ' ');
	printf("\\\n");

	print_symbol(3, ' ');
	printf("//-------\\");
	print_symbol(8, ' ');
	printf("\\|__|");
	print_symbol(5, ' ');
	printf("\\\n");

	print_symbol(2, ' ');
	printf("/");
	print_symbol(10, '%');
	printf("\\");
	print_symbol(18, ' ');
	printf("\\\n");

	print_symbol(1, ' ');
	printf("/_I");
	print_symbol(8, '_');
	printf("I_\\");
	print_symbol(18, '_');
	printf("\\\n");
}

void print_walls(void)
{
	set_text_colour(BROWN, BLACK);
	print_symbol(3, ' ');
	printf("I__|__|__I");
	print_symbol(5, '_');
	printf("[]_|_[]");
	print_symbol(5, '_');
	printf("I\n");

	print_symbol(3, ' ');
	printf("I__|__|__I");
	print_symbol(5, '_');
	printf("[]_|_[]");
	print_symbol(5, '_');
	printf("I\n");

	print_symbol(3, ' ');
	printf("I__|");
	print_symbol(2, ' ');
	printf("|__I");
	print_symbol(5, '_');
	print_symbol(7, '%');
	print_symbol(5, '_');
	printf("I\n");

	print_symbol(3, ' ');
	printf("I__|");
	print_symbol(2, ' ');
	printf("|__I");
	print_symbol(17, '_');
	printf("I\n");
}

void print_ground(void)
{
	set_text_colour(GREEN, BLACK);
	print_symbol(6, '#');
	print_symbol(4, '\"');
	print_symbol(24, '#');
	print_symbol(2, '\n');
}

void print_symbol(int repeat, char symbol)
{
	for (int current = 0; current < repeat; current++)
	{
		printf("%c", symbol);
	}
}