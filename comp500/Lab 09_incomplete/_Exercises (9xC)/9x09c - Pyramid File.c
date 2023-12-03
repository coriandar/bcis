#include <stdio.h>

int main(void)
{
	printf("Desired pyramid height\? ");
	int height = 0;
	scanf("%d", &height);

	printf("Desired pyramid symbol\? ");
	char symbol = '\0';
	scanf(" %c", &symbol);

	printf("The ASCII pyramid has been pinted to file.\n");

	FILE* p_file = 0;
	p_file = fopen("asciipyramid.txt", "wt");

	const int HEIGHT_MAX = height;

	for (int row = 0; row <= HEIGHT_MAX; row++)
	{
		for (int space = 0; space <= height - row; space++)
		{
			fprintf(p_file, " ");
		}

		for (int repeat = 0; repeat < row * 2 - 1; repeat++)
		{
			fprintf(p_file, "%c", symbol);
		}

		fprintf(p_file, "\n");
	}

	fclose(p_file);

	return 0;
}