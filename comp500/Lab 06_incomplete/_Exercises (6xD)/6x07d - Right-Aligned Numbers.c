#include <stdio.h>

int main(void)
{
	printf("Height\? ");
	int height = 0;
	scanf("%d", &height);
	printf("\n");

	int sym_num = 1;

	for (int row = 1; row <= height; row++)
	{
		for (int space = 1; space <= height - row; space++)
		{
			printf(" ");
		}

		for (int symbol = 1; symbol <= row; symbol++)
		{
			printf("%d", sym_num);
		}

		sym_num++;

		printf("\n");
	}

	return 0;
}