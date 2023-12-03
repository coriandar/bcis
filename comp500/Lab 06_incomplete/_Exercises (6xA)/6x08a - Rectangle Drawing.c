#include <stdio.h>

void print_top_bottom(int width);
void print_body(int width, int height);

int main(void)
{
	printf("Rectangle width\? ");
	int width = 0;
	scanf("%d", &width);

	printf("Rectangle height\? ");
	int height = 0;
	scanf("%d", &height);

	printf("\n");

	print_top_bottom(width);
	print_body(width, height);

	if (height > 1)
	{
		print_top_bottom(width);
	}

	return 0;
}

void print_top_bottom(int width)
{
	printf("+");

	for (int dash = 0; dash < width - 2; dash++)
	{
		printf("-");
	}
	if (width > 1)
	{
		printf("+");
	}

	printf("\n");
}

void print_body(int width, int height)
{
	for (int line = 0; line < height - 2; line++)
	{
		printf("|");

		if (width > 1)
		{
			for (int space = 0; space < width - 2; space++)
			{
				printf(" ");
			}

			printf("|");
		}

		printf("\n");
	}
}