#include <stdio.h>

int main(void)
{
	int height = 5;
	const int MAX_HEIGHT = 5;

	for (int row = 1; row <= MAX_HEIGHT; row++)
	{
		for (int symbol = 0; symbol < height; symbol++)
		{
			printf("#");
		}
		height--;
		printf("\n");
	}

	return 0;
}