#include <stdio.h>

int get_length(char* cstring);

int main(void)
{
	// Multi array [3][n]
	char* text[] =
	{
		"Steffan",
		"Pascal",
		"Jade"
	};

	printf("%s is %d chars.\n", text[0], get_length(text[0]));
	printf("%s is %d chars.\n", text[1], get_length(text[1]));
	printf("%s is %d chars.\n", text[2], get_length(text[2]));

	return 0;
}

int get_length(char* cstring)
{
	int length = 0;

	do
	{
		length++;
	}
	while (cstring[length] != '\0');

	return length;
}