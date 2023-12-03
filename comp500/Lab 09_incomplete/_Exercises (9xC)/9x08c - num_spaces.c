#include <stdio.h>

int num_spaces(char* cstring);

int main(void)
{
	char* text[] =
	{
		"Talk is cheap. Show me the code. --- Linus Torvalds",
		"Any fool can use a computer. Many do. --- Ted Nelson",
		"All real programmers know C of course. --- Unknown"
	};

	printf("%s has %d spaces.\n", text[0], num_spaces(text[0]));
	printf("%s has %d spaces.\n", text[1], num_spaces(text[1]));
	printf("%s has %d spaces.\n", text[2], num_spaces(text[2]));

	return 0;
}

int num_spaces(char* cstring)
{
	int spaces = 0;

	for (int index = 0; cstring[index] != '\0'; index++)
	{
		if (cstring[index] == ' ')
		{
			spaces++;
		}
	}

	return spaces;
}