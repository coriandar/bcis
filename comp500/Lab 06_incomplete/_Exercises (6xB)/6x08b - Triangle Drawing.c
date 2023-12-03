/*
//DESIGN
Table
notes.

Row / Spaces / #
*/

#include <stdio.h>

int main(void)
{
	printf("Triangle's height\? ");
	int height = 0;
	scanf("%d", &height);

	printf("\n");

	for (int current_row = 0; current_row < height; current_row++)
	{
		for (int space = 1; space < height - current_row; space++)
		{
			printf(" ");
		}
		printf("/");
		
		for (int symbol = 0; symbol < current_row * 2; symbol++)
		{
			printf("#");
		}

		printf("\\\n");
	}

	return 0;
}