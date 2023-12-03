#include <stdio.h>
#include <assert.h>

int main(void)
{
	printf("File name\? ");
	char file_name[100];
	scanf("%99s", &file_name);
	printf("\n");

	FILE* p_file = 0;
	p_file = fopen(file_name, "rt");

	if (p_file == NULL)
	{
		printf("Error, exiting program.\n");
		assert(p_file != NULL);

		return 1;
	}

	int word_count = 0;
	int current = fgetc(p_file);

	while (EOF != current)
	{
		current = fgetc(p_file);

		if (current == ' ')
		{
			word_count++;
		}
	}

	printf("%s contains ", file_name);
	printf("%d ", word_count);
	printf("words.\n");

	return 0;
}