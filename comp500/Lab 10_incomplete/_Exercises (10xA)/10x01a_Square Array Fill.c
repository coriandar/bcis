#include <stdio.h>

int main(void)
{
	int five_by_five[5][5];
	int fill = 0;

	for (int row = 0; row < 5; row++)
	{
		for (int column = 0; column < 5; column++)
		{
			five_by_five[row][column] = ++fill;
		}
	}

	for (int row = 0; row < 5; row++)
	{
		for (int column = 0; column < 5; column++)
		{
			if (column > 0 && column % 4  == 0)
			{
				printf("%3d\n", five_by_five[row][column]);
			}
			else
			{
				printf("%3d ", five_by_five[row][column]);
			}
		}
	}

	return 0;
}