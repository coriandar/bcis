#include <stdio.h>

void print_arrowhead(int h, char out_l, char edg_l, char in, char edg_r, char out_r);

void print_char_out_l(int h, char out_l); 
void print_char_out_r(int h, char out_r); 

void print_char_edg_l(char edg_l);
void print_char_edg_r(char edg_r);

void print_char_inner(char in, int row);

int main(void)
{
	printf("Arrow height\? ");
	int h = 0;
	scanf("%d", &h);

	printf("Symbol outer left\? ");
	char out_l = '\0';
	scanf(" %c", &out_l);

	printf("Symbol edge left\? ");
	char edg_l = '\0';
	scanf(" %c", &edg_l);

	printf("Symbol inner\? ");
	char in = '\0';
	scanf(" %c", &in);

	printf("Symbol edge right\? ");
	char edg_r = '\0';
	scanf(" %c", &edg_r);

	printf("Symbol outer right\? ");
	char out_r = '\0';
	scanf(" %c", &out_r);

	printf("\n");

	print_arrowhead(h, out_l, edg_l, in, edg_r, out_r);

	return 0;
}

void print_arrowhead(int h, char out_l, char edg_l, char in, char edg_r, char out_r)
{
	const int MAX_H = h;

	for (int row = 0; row < MAX_H; row++, h--)
	{
		print_char_out_l(h, out_l);
		print_char_edg_l(edg_l);
		print_char_inner(in, row);
		print_char_edg_r(edg_r);
		print_char_out_r(h, out_r);
		printf("\n");
	}
}

void print_char_inner(char in, int row)
{
	for (int inside = 0; inside < row * 2; inside++)
	{
		printf("%c", in);
	}
}

void print_char_out_l(int h, char out_l)
{
	for (int space = 0; space < h - 1; space++)
	{
		printf("%c", out_l);
	}
}

void print_char_out_r(int h, char out_r)
{
	for (int space = 0; space < h - 1; space++)
	{
		printf("%c", out_r);
	}
}

void print_char_edg_l(char edg_l)
{
	printf("%c", edg_l);
}

void print_char_edg_r(char edg_r)
{
	printf("%c", edg_r);
}