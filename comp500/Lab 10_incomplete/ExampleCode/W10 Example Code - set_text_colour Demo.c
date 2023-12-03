#include <stdio.h>
#include "p1colour.h"

void draw_rectangle(void);
void draw_square(void);
void draw_triangle(void);
int get_user_choice(void);
void print_error(void);
void print_menu(void);
void print_prompt(void);
void reset_to_white(void);

int main(void)
{
	print_menu();
	print_prompt();
	int selection = get_user_choice();
	
	switch (selection)
	{
		case 1:
			draw_square();
			break;
		case 2:
			draw_rectangle();
			break;
		case 3:
			draw_triangle();
			break;
		default:
			print_error();
		break;
	}
	
	reset_to_white();
	
	return 0;
}

void print_menu(void)
{
	reset_to_white();
	printf("What shape do you want to draw...\n\n");
	printf("1) ");
	printf("Square\n");
	printf("2) ");
	printf("Rectangle\n");
	printf("3) ");
	printf("Triangle\n");
	printf("\n");
	printf("Your choice");
}

void print_prompt(void)
{
	set_text_colour(RED, BLACK);
	printf("? ");
}

int get_user_choice(void)
{
	set_text_colour(GREEN, BLACK);
	int user_choice = 0;
	scanf("%d", &user_choice);
	
	return user_choice;
}

void print_error(void)
{
	set_text_colour(WHITE, RED);
	printf(" * * * ");
	set_text_colour(RED, WHITE);
	printf(" INVALID CHOICE! ");
	set_text_colour(WHITE, RED);
	printf(" * * * ");
}

void draw_square(void)
{
	reset_to_white();
	printf("Square size");
	print_prompt();
	int size = get_user_choice();
	set_text_colour(RED, RED);
	
	for (int row = 0; row < size; ++row)
	{
		for (int column = 0; column < size; ++column)
		{
			printf(" ");
		}
		printf("\n");
	}
}

void draw_rectangle(void)
{
	reset_to_white();
	printf("Rectangle width");
	print_prompt();
	int width = get_user_choice();
	reset_to_white();
	printf("Rectangle height");
	print_prompt();
	int height = get_user_choice();
	
	set_text_colour(GREEN, GREEN);
	for (int row = 0; row < height; ++row)
	{
		for (int column = 0; column < width; ++column)
		{
			printf(" ");
		}
		printf("\n");
	}
}

void draw_triangle(void)
{
	reset_to_white();
	printf("Triangle height");
	print_prompt();
	int height = get_user_choice();
	
	for (int row = 0; row < height; ++row)
	{
		set_text_colour(BLACK, BLACK);
		int spaces = height - row – 1;
		
		for (int col = 0; col < spaces; ++col)
		{
			printf(" ");
		}
		
		set_text_colour(BLUE, BLUE);
		
		for (int col = 0; col < 2 * (1 + row); ++col)
		{
			printf(" ");
		}
		printf("\n");
	}
}

void reset_to_white(void)
{
	set_text_colour(WHITE, BLACK);
}

















