#include <stdio.h>

void print_tree(int MAX_HEIGHT, int height);
void print_base(int MAX_HEIGHT);

int main(void)
{
	printf("How high would you like the tree\? ");
	int height = 0;
	scanf("%d", &height);

	const int MAX_HEIGHT = height;
	
	printf("\n");
	print_tree(MAX_HEIGHT, height);
	print_base(MAX_HEIGHT);

	return 0;
}

void print_tree(int MAX_HEIGHT, int height)
{
	for (int row = 1; row <= MAX_HEIGHT; row++)
	{
		for (int space = 1; space < height; space++)
		{
			printf(" ");
		}

		if (MAX_HEIGHT == 1)
		{
			printf(" ");
		}

		if (MAX_HEIGHT <= 2)
		{
			printf(" ");
		}

		for (int symbol = 1; symbol <= row; symbol++)
		{
			printf("* ");
		}

		height--;
		printf("\n");
	}
}

void print_base(int MAX_HEIGHT)
{
	for (int spaces = 3; spaces < MAX_HEIGHT; spaces++)
	{
		printf(" ");
	}

	printf("_| |_\n");

	for (int spaces = 3; spaces < MAX_HEIGHT; spaces++)
	{
		printf(" ");
	}

	printf("\\___/\n");
}