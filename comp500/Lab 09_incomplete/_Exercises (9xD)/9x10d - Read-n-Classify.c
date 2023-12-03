#include <stdio.h>
#include <assert.h>

void classify_char(char current)
{
	if (current == '\n')
	{
		printf("\'\\n\' ");
	}
	else
	{
		printf("\'%c\' ", current);
	}

	printf("[%d aka 0x%x] ", current, current);

	if ('a' <= current && current <= 'z')
	{
		printf("is lowercase.");
	}
	else if ('A' <= current && current <= 'Z')
	{
		printf("is uppercase.");
	}
	else if (current == '\n')
	{
		printf("is a newline.");
	}
	else if ('0' <= current && current <= '0')
	{
		printf("is a digit.");
	}
	else if (current == ' ')
	{
		printf("is a space.");
	}
	else
	{
		printf("is something else!");
	}

	printf("\n");
}

int main(void)
{
	FILE* p_file = 0;

	p_file = fopen("sample.txt", "rt");

	if (p_file == NULL)
	{
		printf("Error! Exiting\n");
		assert(p_file != NULL);

		return 1;
	}

	int current = fgetc(p_file);

	while (current != EOF)
	{
		classify_char(current);
		current = fgetc(p_file);
	}

	fclose(p_file);

	return 0;
}