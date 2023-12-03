#include <stdio.h>

void analyse(char* code, int* p_dots, int* p_dashes);

int main(void)
{
	//pointer to char array, array of c-strings
	char* morse[] =
	{
		"... --- ...",							// SOS
		"-- --- .-. ... .",						// MORSE
		"-.-. --- -.. .",						// CODE
		"-.-. --- -- .--. ..... ----- -----",	// COMP500
		". -. ... . ..... ----- .----"			// ENSE501
	};

	int dots = 0;
	int* p_dots = &dots;

	int dashes = 0;
	int* p_dashes = &dashes;

	// TODO: 2) Insert code here...
	analyse(*morse, p_dots, p_dashes);

	printf("%s\n", *morse);
	printf("Dots: %d\n", *p_dots);
	printf("Dashes: %d\n", *p_dashes);
	printf("\n");

	return 0;
}

void analyse(char* code, int* p_dots, int* p_dashes)
{
	// TODO: 1) Insert code here...
	int index = 0;

	while (code[index] != '\0')
	{
		if (code[index] == '.')
		{
			(*p_dots)++;
		}
		else if (code[index] == '-')
		{
			(*p_dashes)++;
		}

		index++;
	}
}