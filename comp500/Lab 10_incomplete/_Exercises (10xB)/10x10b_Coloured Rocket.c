#include <stdio.h>
#include "p1colour.h"

void print_nozzle(enum P1Colours nozzle_colour);
void print_body(enum P1Colours body_colour);
void print_logo(enum P1Colours logo_colour);
void print_space(int spaces);

int main(void)
{
	print_nozzle(WHITE);
	print_body(DARKGRAY);
	print_logo(LIGHTCYAN);
	print_body(YELLOW);
	print_nozzle(LIGHTRED);

	return 0;
}

void print_space(int spaces)
{
	for (int space = 0; space < spaces; space++)
	{
		printf(" ");
	}
}

void print_nozzle(enum P1Colours nozzle_colour)
{
	// TODO: Nozzle printing
	set_text_colour(nozzle_colour, BLACK);

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


void print_body(enum P1Colours body_colour)
{
	// TODO: Body printing
	set_text_colour(body_colour, BLACK);
	printf("+------+\n");

	for (int sides = 0; sides < 3; sides++)
	{
		printf("|");
		set_text_colour(BLACK, body_colour);
		print_space(6);
		set_text_colour(body_colour, BLACK);
		printf("|");
		printf("\n");
	}

	set_text_colour(body_colour, BLACK);
	printf("+------+\n");
}

void print_logo(enum P1Colours logo_colour)
{
	// TODO: Logo printing
	for (int sides = 0; sides < 3; sides++)
	{
		set_text_colour(logo_colour, BLACK);
		printf("|");
		set_text_colour(BLACK, logo_colour);

		if (sides == 0)
		{
			print_space(1);
			printf("N");
			print_space(4);
		}
		else if(sides == 1)
		{
			print_space(4);
			printf("Z");
			print_space(1);
		}
		else if (sides == 2)
		{
			printf("Rocket");
		}

		set_text_colour(logo_colour, BLACK);
		printf("|");
		printf("\n");
	}
}