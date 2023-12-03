#include <stdio.h>

int main(void)
{
	int height = 5;

	for (int row = 1; row <= height; row++)
	{
		for (int space = 1; space <= height - row; space++)
		{
			printf(" ");
		}

		for (int symbol = 1; symbol <= row; symbol++)
		{
			printf("#");
		}

		printf("\n");
	}

	return 0;
}