#include <stdio.h>

void print_newline(int newline);
void print_space(int spaces);
void print_top(void);
void print_bottom(void);
void print_sides(int height);

int main(void)
{
	printf("Height\? ");
	int height = 0;
	scanf("%d", &height);

	print_top();
	print_sides(height);
	print_bottom();

	return 0;
}

void print_newline(int newline)
{
	for (int repeat = 0; repeat < newline; repeat++)
	{
		printf("\n");
	}
}

void print_space(int spaces)
{
	for (int repeat = 0; repeat < spaces; repeat++)
	{
		printf(" ");
	}
}

void print_top(void)
{
	printf("/\\/\\/\\/\\/\\/\\");
	print_newline(1);
}

void print_bottom(void)
{
	printf("\\/\\/\\/\\/\\/\\/");
	print_newline(1);
}

void print_sides(int height)
{
	for (int repeat = 0; repeat < height; repeat++)
	{
		printf("\\");
		print_space(10);
		printf("/");
		print_newline(1);
		printf("/");
		print_space(10);
		printf("\\");
		print_newline(1);
	}
}