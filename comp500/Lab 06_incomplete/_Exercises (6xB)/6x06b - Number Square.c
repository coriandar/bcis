/*
//DESIGN
FOR (row++)
	FOR (column++)
		value = row * column
		printf("%3d ", value);
	ENDFOR
	printf("\n");
ENDFOR
*/

#include <stdio.h>

int main(void)
{
	int value = 0;

	for (int row = 1; row <= 10; row++)
	{
		for (int column = 1; column <= 10; column++)
		{
			value = row * column;
			printf("%3d ", value);
		}
		printf("\n");
	}

	return 0;
}