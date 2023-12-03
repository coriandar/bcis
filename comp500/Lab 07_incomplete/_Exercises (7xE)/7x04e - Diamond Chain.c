/*
//IMPLEMENTATION
Create a program that asks the user to input two integer values, the desired width of the diamond and the number of diamonds in the chain pattern. The program must then output the pattern shown in the example outputs below. The program does not need to validate user input for negative numbers or unexpected data types.

//DESIGN
Create one diamond based on width, control loop with 'how many'.
MAX_HEIGHT = (diamond_width / 2) + 2

*/

#include <stdio.h>

void print_diamond_bottom(int diamond_width);
void print_diamond_top(int diamond_width);
void print_diamond_chain(int diamond_width, int chain_size);

int main(void)
{
	printf("Desired diamond width\? ");
	int diamond_width = 0;
	scanf("%d", &diamond_width);

	printf("How many diamonds\? ");
	int chain_size = 0;
	scanf("%d", &chain_size);

	print_diamond_chain(diamond_width, chain_size);

	return 0;
}

void print_diamond_chain(int diamond_width, int chain_size)
{
	for (int chain = 0; chain < chain_size; chain++)
	{
		print_diamond_top(diamond_width);
		print_diamond_bottom(diamond_width);
	}
}

void print_diamond_top(int diamond_width)
{
	const int MAX_HEIGHT = (diamond_width / 2) + 2;
	diamond_width = (diamond_width / 2) + 2;

	for (int row = 0; row < MAX_HEIGHT; row++, diamond_width--)
	{
		for (int out_space = 0; out_space < diamond_width - 1; out_space++)
		{
			{
				printf(" ");
			}
		}

		printf("/");

		if (row >= 1)
		{
			printf(" ");

			for (int symbol = 0; symbol < (row * 2) - 2; symbol++)
			{
				printf("*");
			}

			printf(" ");
		}

		printf("\\");
		printf("\n");
	}
}

void print_diamond_bottom(int diamond_width)
{
	const int MAX_HEIGHT = (diamond_width / 2) + 2;
	diamond_width = (diamond_width / 2) + 2;

	for (int row = 0; row < MAX_HEIGHT; row++, diamond_width--)
	{

		for (int out_space = 0; out_space < row; out_space++)
		{
			printf(" ");
		}

		printf("\\");


		if (row <= MAX_HEIGHT - 2)
		{
			printf(" ");

			for (int symbol = 0; symbol < (diamond_width * 2) - 4; symbol++)
			{
				printf("*");
			}

			printf(" ");
		}

		printf("/");
		printf("\n");
	}
}