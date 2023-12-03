#include <stdio.h>

void print_space(int spaces);
void print_char_type(char c);

int main(void)
{
	int count = 0;

	for (unsigned char c = ' '; c < '~'; c++)
	{
		printf("'%c' [%3d] ", c, c);
		
		print_char_type(c);

		if (count % 4 == 0)
		{
			printf("\n");
		}

		count++;
	}

	printf("\n");

	return 0;
}

void print_space(int spaces)
{
	for (int repeat = 0; repeat < spaces; repeat++)
	{
		printf(" ");
	}
}

void print_char_type(char c)
{
	if ('0' <= c && c <= '9')
	{
		printf("Digit");
		print_space(3);
	}
	else if ('A' <= c && c <= 'Z')
	{
		printf("Upper");
		print_space(3);
	}
	else if ('a' <= c && c <= 'z')
	{
		printf("Lower");
		print_space(3);
	}
	else
	{
		print_space(8);
	}
}