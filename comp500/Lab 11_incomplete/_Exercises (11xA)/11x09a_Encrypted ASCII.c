#include <stdio.h>
#include <assert.h>

int main(void)
{
	FILE*  p_file = fopen("encrypted.bin", "rb");

	if (p_file == NULL)
	{
		printf("Error, exiting program.\n");
		assert(p_file != NULL);
	}

	char current = fgetc(p_file);
	char buffer = '\0';

	while (EOF != current)
	{
		current = fgetc(p_file);

		// bitwise not flip bit 0 to 1, 1 to 0
		buffer = ~current;
		printf("%c", buffer);
	}

	return 0;
}