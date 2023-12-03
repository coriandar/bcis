#include <stdio.h>

void print_ascii_table(void);
void print_extended_ascii_table(void);

int main(void)
{
	printf("Printable ASCII table:\n");
	print_ascii_table();
	printf("\n");
	printf("\"Extended\" ASCII table:\n");
	print_extended_ascii_table();
	return 0;
}

void print_ascii_table(void)
{
	int printed_count = 0;
	for (unsigned char c = ' '; c < 127; ++c)
	{
		printf("\'%c\' [%3d] ", c, c);
		++printed_count;
		if (printed_count % 10 == 0)
		{
			printf("\n");
		}
	}
	printf("\n");
}

void print_extended_ascii_table(void)
{
	int printed_count = 0;
	for (unsigned char c = 128; c < 255; ++c)
	{
		printf("\'%c\' [%3d] ", c, c);
		++printed_count;
		if (printed_count % 10 == 0)
		{
			printf("\n");
		}
	}
	printf("\n");
}