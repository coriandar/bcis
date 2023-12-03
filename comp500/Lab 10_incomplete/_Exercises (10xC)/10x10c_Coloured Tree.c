#include <stdio.h>
#include "p1colour.h"

void print_tree(int height);
void print_base(int MAX_HEIGHT);

int main(void)
{
	int user_height = 0;

	set_text_colour(WHITE, BLACK);

	printf("How high would you like the tree? ");
	scanf("%d", &user_height);
	printf("\n");

	// TODO: Call print_tree
	print_tree(user_height);

	return 0;
}

// TODO: Define print_tree
void print_tree(int height)
{
	const int MAX_HEIGHT = height;

	set_text_colour(GREEN, BLACK);

	for (int row = 1; row <= MAX_HEIGHT; row++)
	{
		for (int space = 1; space < height; space++)
		{
			printf(" ");
		}

		if (MAX_HEIGHT == 1)
		{
			printf(" ");
		}

		if (MAX_HEIGHT <= 2)
		{
			printf(" ");
		}

		for (int symbol = 1; symbol <= row; symbol++)
		{
			printf("*");
			if (symbol != row)
			{
				set_text_colour(BLACK, GREEN);
				printf(" ");
				set_text_colour(GREEN, BLACK);
			}
		}

		height--;
		printf("\n");
	}

	print_base(MAX_HEIGHT);
}

void print_base(int MAX_HEIGHT)
{
	for (int spaces = 3; spaces < MAX_HEIGHT; spaces++)
	{
		printf(" ");
	}

	set_text_colour(BROWN, BLACK);

	printf("_| |_\n");

	for (int spaces = 3; spaces < MAX_HEIGHT; spaces++)
	{
		printf(" ");
	}

	printf("\\___/\n");
	set_text_colour(WHITE, BLACK);
}