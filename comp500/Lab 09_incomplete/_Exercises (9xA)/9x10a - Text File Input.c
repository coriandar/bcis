/*
//LEARNT
How to read in text files, 2ways.
fscanf into a c-string.
fgetc output to console.

//DESIGN
1. Read the text file one character at a time.
2. After each newline, lines++
*/

#include <stdio.h>

int main(void)
{
	printf("Filename\? ");
	char file_name[32];
	scanf("%31s", &file_name);

	FILE* p_file = 0;
	p_file = fopen(file_name, "r");

	printf("\n");

	// Sets to be first char in p_file
	int current = fgetc(p_file);
	int line = 1;

	printf("%2d: ", line);

	//while current is not end of file.
	do
	{
		current = fgetc(p_file);

		if (current != '\n')
		{
			printf("%c", current);
		}
		else if (current == '\n')
		{
			printf("\n");
			line++;
			printf("%2d: ", line);
		}
	}
	while (EOF != current);

	// fscanf into c-string
	/*
	char first_line[32];
	fscanf(p_file, "%31s", first_line);
	printf("%s", first_line);
	*/

	fclose(p_file);

	return 0;
}