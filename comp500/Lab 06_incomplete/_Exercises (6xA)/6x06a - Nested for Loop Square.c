#include <stdio.h>

int main(void)
{
	for (int row_num = 0; row_num < 5; row_num++)
	{
		for (int width = 0; width < 5; width++)
		{
			printf("#");
		}
		printf("\n");
	}

	return 0;
}