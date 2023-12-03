#include <stdio.h>

void print_nozzle(int body_width);
void print_body(int body_height, int body_width);
void print_dash(int body_width);
void print_vert(int body_height, int body_width);

void print_logo(int body_width);
void print_word_rocket(int body_width);
void print_word_n(int body_width);
void print_word_z(int body_width);
void print_space(int spaces);
void print_rocket(int body_height, int body_width);

int validate_width(void);
int validate_height(void);

int main(void)
{
	int body_width = validate_width();
	int body_height = validate_height();

	print_rocket(body_height, body_width);

	return 0;
}

int validate_width(void)
{
	int body_width = 0;

	do
	{
		printf("Rocket body width (minimum 6)\? ");
		scanf("%d", &body_width);
	}
	while (body_width < 6);

	return body_width;
}

int validate_height(void)
{
	int body_height = 0;

	do
	{
		printf("Rocket body height (> 0)\? ");
		scanf("%d", &body_height);
	}
	while (body_height < 0);

	return body_height;
}

void print_rocket(int body_height, int body_width)
{
	print_nozzle(body_width);
	print_body(body_height, body_width);
	print_logo(body_width);
	print_body(body_height, body_width);
	print_nozzle(body_width);
}

void print_nozzle(int body_width)
{
	if (body_width % 2 == 0)
	{
		body_width = body_width / 2;
	}
	else
	{
		body_width = (body_width / 2) + 1;
	}
	
	const int MAX_H = body_width;

	for (int row = 0; row < MAX_H; row++, body_width--)
	{
		for (int out_space = 0; out_space < body_width; out_space++)
		{
			printf(" ");
		}

		printf("/");

		for (int in_space = 0; in_space < row * 2; in_space++)
		{
			printf(" ");
		}

		printf("\\");
		printf("\n");
	}
}

void print_body(int body_height, int body_width)
{
	print_dash(body_width);
	print_vert(body_height, body_width);
	print_dash(body_width);
}

void print_dash(int body_width)
{
	printf("+");
	for (int dash = 0; dash < body_width; dash++)
	{
		printf("-");
	}
	printf("+");
	printf("\n");
}

void print_vert(int body_height, int body_width)
{
	for (int vert = 0; vert < body_height; vert++)
	{
		printf("|");
		for (int row = 0; row < body_width; row++)
		{
			printf(" ");
		}
		printf("|");
		printf("\n");
	}
}

void print_logo(int body_width)
{
	print_word_n(body_width);
	print_word_z(body_width);
	print_word_rocket(body_width);
}

void print_word_z(int body_width)
{
	printf("|");

	print_space(body_width % 6 / 2);
	print_space(4);
	printf("Z");
	print_space(1);

	if (body_width % 2 == 0)
	{
		print_space(body_width % 6 / 2);
	}
	else if (body_width % 2 == 1)
	{
		print_space(body_width % 6 / 2 + 1);
	}

	printf("|");
	printf("\n");
}

void print_word_n(int body_width)
{
	printf("|");

	print_space(body_width % 6 / 2);
	print_space(1);
	printf("N");
	print_space(4);

	if (body_width % 2 == 0)
	{
		print_space(body_width % 6 / 2);
	}
	else if (body_width % 2 == 1)
	{
		print_space(body_width % 6 / 2 + 1);
	}

	printf("|");
	printf("\n");
}

void print_word_rocket(int body_width)
{
		printf("|");

	print_space(body_width % 6 / 2);

	printf("Rocket");

	if (body_width % 2 == 0)
	{
		print_space(body_width % 6 / 2);
	}
	else if (body_width % 2 == 1)
	{
		print_space(body_width % 6 / 2 + 1);
	}

	printf("|");
	printf("\n");
}

void print_space(int spaces)
{
	for (int space = 0; space < spaces; space++)
	{
		printf(" ");
	}
}