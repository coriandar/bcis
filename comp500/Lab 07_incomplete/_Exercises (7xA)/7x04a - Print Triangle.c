/*
//REQUIREMENTS
The program does not need to validate user input for negative numbers or unexpected data types.

//IMPLEMENTATION
Create a program that asks the user to input a height integer. The program must then output a triangle based on the height integer.

//DESIGN
	FUNCTION print_triangle(total_rows)
		FOR (total_rows)
			PRINT space
			PRINT forward slash
			PRINT x
			PRINT backslash
			PRINT newline
		ENDFOR
	ENDFUNCTION

	make table from notes.

IPO
	spaces = total_row - current_row
	symbol = current_row * 2 
*/

#include <stdio.h>

void print_newline(int newline);
void print_triangle(int total_rows);

int main(void)
{
	printf("Height\? ");
	int total_rows = 0;
	scanf("%d", &total_rows);

	print_triangle(total_rows);
	print_newline(1);

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

void print_triangle(int total_rows)
{
	for (int current_row = 0; current_row < total_rows; current_row++)
	{
		for (int space = 0; space < total_rows - current_row; space++)
		{
			printf(" ");
		}
		printf("/");

		for (int symbol = 0; symbol < current_row * 2; symbol++)
		{
			printf("#");
		}
		printf("\\");

		print_newline(1);
	}

	return;
}