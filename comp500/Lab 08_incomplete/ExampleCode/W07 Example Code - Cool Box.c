#include <stdio.h>

void print_bottom(int width);
void print_bottom_left(void);
void print_bottom_right(void);
void print_horizontal(void);
void print_top(int width);
void print_top_left(void);
void print_top_right(void);
void print_vertical(void);

int main(void)
{
	print_top(11);
	printf("\n");
	print_vertical();
	printf(" Cool box! ");
	print_vertical();
	printf("\n");
	print_bottom(11);
	printf("\n");
	return 0;
}

void print_bottom(int width)
{
	print_bottom_left();
	for (int w = 0; w < width; ++w)
	{
		print_horizontal();
	}
	print_bottom_right();
}

void print_top(int width)
{
	print_top_left();
	for (int w = 0; w < width; ++w)
	{
		print_horizontal();
	}
	print_top_right();
}

void print_vertical(void)
{
	printf("%c", 186);
}

void print_horizontal(void)
{
	printf("%c", 205);
}

void print_top_left(void)
{
	printf("%c", 201);
}

void print_top_right(void)
{
	printf("%c", 187);
}

void print_bottom_left(void)
{
	printf("%c", 200);
}

void print_bottom_right(void)
{
	printf("%c", 188);
}









