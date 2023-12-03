/*
//LEARNT
Way to read and count specific letter in txt file.

//DESIGN
	WHILE
		Read through file.
		count ascii.
		printf result.
		reset.
	ENDWHILE
*/
#include <stdio.h>

void print_newline(int newline);

int main(void)
{
	printf("Filename\? ");
	char filename[32];
	scanf("%31s", &filename);

	print_newline(1);
	printf("In %s, ", filename);
	printf("the following was found:");
	print_newline(2);

	FILE* p_file = 0;
	p_file = fopen(filename, "r");

	int counter = 0;
	int current = fgetc(p_file);

	for (int ASCII = 32; ASCII <= 127; ASCII++)
	{
		while (EOF != current)
		{
			current = fgetc(p_file);

			if (current == ASCII)
			{
				counter++;
			}
		}

		printf("ASCII %3d ", ASCII);
		printf("(0x%x) ", ASCII);
		printf("\'%c\' ", ASCII);
		printf("was found ");
		printf("%3d ", counter);
		printf("times");
		printf("\n");

		rewind(p_file);
		current = 0;
		counter = 0;
	}

	fclose(p_file);

	return 0;
}

void print_newline(int newline)
{
	for (int repeat = 0; repeat < newline; repeat++, printf("\n"));
}