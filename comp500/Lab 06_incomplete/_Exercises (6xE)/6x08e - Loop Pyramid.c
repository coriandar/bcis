#include <stdio.h>

int main(void)
{
	printf("How high would you like the pyramid\? ");
	int height = 0;
	scanf("%d", &height);

	printf("\n");

	const int MAX_HEIGHT = height;

	for (int row = 2; row <= MAX_HEIGHT + 1; row++)
	{
		for (int space = 1; space < height; space++)
		{
			printf(" ");
		}

		for (int symbol = 0; symbol < (row * 2) - 2; symbol++)
		{
			printf("*");
		}

		height--;

		printf("\n");
	}

	return 0;
}