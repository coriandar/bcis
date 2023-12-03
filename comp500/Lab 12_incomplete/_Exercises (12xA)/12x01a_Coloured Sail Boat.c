#include <stdio.h>
#include "p1colour.h"

void print_sails(void);
void print_lower_mast_and_deck(void);
void print_hull(void);
void print_water(void);

int main(void)
{
	set_text_colour(LIGHTRED, BLACK);
	print_sails();

	set_text_colour(WHITE, BLACK);
	print_lower_mast_and_deck();

	set_text_colour(YELLOW, BLACK);
	print_hull();

	set_text_colour(LIGHTBLUE, BLACK);
	print_water();
	print_water();

	return 0;
}

void print_sails(void)
{
	printf("             +\n");
	printf("            /|\n");
	printf("           / |+\n");
	printf("          /  ||\\\n");
	printf("         /   || \\\n");
	printf("        /    ||  \\\n");
	printf("       /     ||   \\\n");
	printf("      +------++----+\n");
}

void print_lower_mast_and_deck(void)
{
	printf("             %%|\n");
	printf("    _________%%|__________+\n");
}

void print_hull(void)
{
	printf("    \\          ENDEAVOUR/\n");
	printf("     \\                 /\n");
	printf("      \\_______________/\n");
}

void print_water(void)
{
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
}