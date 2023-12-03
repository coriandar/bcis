/*
//IMPLEMENTATION
Program uses a loop to print an ASCII table showing the ascii and the decimal value.
*/

#include <stdio.h>

int main(void)
{
	int column_count = 0; 
	unsigned char ascii = 0;

	for (ascii=' '; ascii < 128; ++ascii)
	{
		printf("%c ", ascii);

		if (ascii < 100)
		{
			printf(" ");
		}

		printf("%d ", ascii); 

		++column_count;

		if (column_count >= 10)
		{
			printf("\n");
			column_count = 0;
		}
	}

	return 0;
}