#include <stdio.h>

int main(void)
{
	int height = 5;

	for (int value = 1; value <= height; value++)
	{
		for (int repeat = 0; repeat < value; repeat++)
		{
			printf("#");
		}

		printf("\n");
	}

	return 0;
}