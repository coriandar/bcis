#include <stdio.h>

void print_top(int num_rockets);
void print_space(int spaces);
void print_body_dash(int num_rockets);
void print_body_vertical(int num_rockets);
void print_body_blank(int num_rockets);
void print_body_words_n(int num_rockets);
void print_body_words_z(int num_rockets);
void print_body_words_rocket(int num_rockets);

void print_rocket(int num_rockets);

int main(void)
{
	printf("Prepare how many rockets for launch\? ");
	int num_rockets = 0;
	scanf("%d", &num_rockets);

	printf("\n");

	print_rocket(num_rockets);

	return 0;
}

void print_rocket(int num_rockets)
{
	print_top(num_rockets);
	print_body_blank(num_rockets);
	print_body_words_n(num_rockets);
	print_body_words_z(num_rockets);
	print_body_words_rocket(num_rockets);
	print_body_blank(num_rockets);
	print_top(num_rockets);
}

void print_space(int spaces)
{
	for (int space = 0; space < spaces; space++)
	{
		printf(" ");
	}
}

void print_top(int num_rockets)
{
	for (int repeat = 0; repeat < num_rockets; repeat++)
	{
		print_space(3);
		printf("/");
		print_space(0);
		printf("\\");
		print_space(5);
	}

	printf("\n");

	for (int repeat = 0; repeat < num_rockets; repeat++)
	{
		print_space(2);
		printf("/");
		print_space(2);
		printf("\\");
		print_space(4);
	}

	printf("\n");

	for (int repeat = 0; repeat < num_rockets; repeat++)
	{
		print_space(1);
		printf("/");
		print_space(4);
		printf("\\");
		print_space(3);
	}

	printf("\n");
}

void print_body_blank(int num_rockets)
{
	print_body_dash(num_rockets);
	print_body_vertical(num_rockets);
	print_body_dash(num_rockets);
}

void print_body_dash(int num_rockets)
{
	for (int i = 0; i < num_rockets; i++)
	{
		printf("+------+");
		print_space(2);
	}

	printf("\n");
}

void print_body_words_n(int num_rockets)
{
	for (int repeat = 0; repeat < num_rockets; repeat++)
	{
		printf("|");
		print_space(1);
		printf("N");
		print_space(4);
		printf("|");
		print_space(2);
	}

	printf("\n");
}

void print_body_words_z(int num_rockets)
{
	for (int repeat = 0; repeat < num_rockets; repeat++)
	{
		printf("|");
		print_space(4);
		printf("Z");
		print_space(1);
		printf("|");
		print_space(2);
	}
	
	printf("\n");
}

void print_body_words_rocket(int num_rockets)
{
	for (int repeat = 0; repeat < num_rockets; repeat++)
	{
		printf("|");
		printf("Rocket");
		printf("|");
		print_space(2);
	}

	printf("\n");
}

void print_body_vertical(int num_rockets)
{
	for (int repeat = 0; repeat < 3; repeat++)
	{
		for (int vert = 0; vert < num_rockets; vert++)
		{
			printf("|");
			print_space(6);
			printf("|");
			print_space(2);
		}

		printf("\n");
	}
}