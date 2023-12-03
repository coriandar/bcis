/*
//IMPLEMENTATION
A Roulette wheel contains numbers between 0 and 36, inclusive. Write a program that spins a virtual Roulette wheel, then analyses the resulting number to categorise it as follows: red/black, odd/even, 1st/2nd/3rd 12, “1 to 18”/“19 to 36”, and 1st/2nd/3rd 2:1 column.

//DESIGN
WHILE (spin is yes)
PRINT spin wheel
	IF
		PRINT wheel shows random number
		PRINT other attributes
	ENDIF
ENDWHILE
*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

enum Roulette
{
	GREEN, //0
	BLACK, //1
	RED, //2
	NONE //3
};

enum Roulette colour = NONE;

void print_newline(int newline);
int spin_roulette(void);
void check_roulette_colour(int roulette_num);
void print_roulette_colour(int roulette_num);
void print_odd_even(int roulette_num);
void print_what_twelve(int roulette_num);
void print_what_half(int roulette_num);
int check_what_column(int roulette_num);
void print_what_column(int column, int roulette_num);


int main(void)
{
	srand(time(0));

	enum Check
	{
		YES,
		NO
	};

	enum Check spin_continue = YES;

	do
	{
		printf("Spin the wheel (y/n)\? ");
		char spin_wheel = '\0';
		scanf(" %c", &spin_wheel);
		
		if (spin_wheel == 'y')
		{
			int roulette_num = spin_roulette();
			print_newline(1);
			printf("The wheel shows %d", roulette_num);
			print_newline(1);

			check_roulette_colour(roulette_num);
			print_roulette_colour(roulette_num);

			if (roulette_num > 0)
			{
				print_odd_even(roulette_num);
				print_what_twelve(roulette_num);
				print_what_half(roulette_num);

				int column = check_what_column(roulette_num);
				print_what_column(column, roulette_num);
			}
			else
			{
				print_newline(1);
			}
		}
		else if (spin_wheel == 'n')
		{
			spin_continue = NO;
		}
	}
	while (spin_continue == YES);

	return 0;
}

void print_newline(int newline)
{
	for (int lines = 0; lines < newline; lines++)
	{
		printf("\n");
	}
}

int spin_roulette(void)
{
	return rand() % 37;
}

void check_roulette_colour(int roulette_num)
{
	if (roulette_num == 0)
	{
		colour = GREEN;
	}
	else if (2 <= roulette_num && roulette_num <= 10)
	{
		if (roulette_num % 2 == 0)
		{
			colour = BLACK;
		}
		else
		{
			colour = RED;
		}
	}
	else if (20 <= roulette_num && roulette_num <= 28)
	{
		if (roulette_num % 2 == 0)
		{
			colour = BLACK;
		}
		else
		{
			colour = RED;
		}
	}
	else if (11 <= roulette_num && roulette_num <= 17)
	{
		if (roulette_num % 2 == 1)
		{
			colour = BLACK;
		}
		else
		{
			colour = RED;
		}
	}
	else if (29 <= roulette_num && roulette_num <= 35)
	{
		if (roulette_num % 2 == 1)
		{
			colour = BLACK;
		}
		else
		{
			colour = RED;
		}
	}
	else
	{
		colour = RED;
	}
}

void print_roulette_colour(int roulette_num)
{
	if (colour == GREEN) //checks global variable colour
	{
		printf("... %d is green.", roulette_num);
		print_newline(1);
	}
	else if (colour == BLACK)
	{
		printf("... %d is black,", roulette_num);
		print_newline(1);
	}
	else if (colour == RED)
	{
		printf("... %d is red,", roulette_num);
		print_newline(1);
	}
}

void print_odd_even(int roulette_num)
{
	if (1 <= roulette_num && roulette_num <= 36)
	{
		if (roulette_num % 2 == 0)
		{
			printf("... %d is even,", roulette_num);
			print_newline(1);
		}
		else
		{
			printf("... %d is odd,", roulette_num);
			print_newline(1);
		}
	}
}

void print_what_twelve(int roulette_num)
{
	if (1 <= roulette_num && roulette_num <= 12)
	{
		printf("... %d is in the 1st 12,", roulette_num);
		print_newline(1);
	}
	else if (13 <= roulette_num && roulette_num <= 24)
	{
		printf("... %d is in the 2nd 12,", roulette_num);
		print_newline(1);
	}
	else if (25 <= roulette_num && roulette_num <= 36)
	{
		printf("... %d is in the 3rd 12,", roulette_num);
		print_newline(1);
	}
}

void print_what_half(int roulette_num)
{
	if (1 <= roulette_num && roulette_num <= 18)
	{
		printf("... %d is in 1 to 18,", roulette_num);
		print_newline(1);
	}
	else if (19 <= roulette_num && roulette_num <= 36)
	{
		printf("... %d is in 19 to 36,", roulette_num);
		print_newline(1);
	}
}


int check_what_column(int roulette_num)
{
	int column = 0;

	if (roulette_num % 3 == 0)
	{
		column = 1;
	}
	else if (roulette_num % 3 == 2)
	{
		column = 2;
	}
	else if (roulette_num % 3 == 1)
	{
		column = 3;
	}

	return column;
}

void print_what_column(int column, int roulette_num)
{
	if (column == 1)
	{
		printf("... %d is in the first 2:1 column.", roulette_num);
		print_newline(2);
	}
	else if (column == 2)
	{
		printf("... %d is in the second 2:1 column.", roulette_num);
		print_newline(2);
	}
	else if (column == 3)
	{
		printf("... %d is in the third 2:1 column.", roulette_num);
		print_newline(2);
	}
	else if (column == 0)
	{
		printf("... it's a zero.\n");
	}

}