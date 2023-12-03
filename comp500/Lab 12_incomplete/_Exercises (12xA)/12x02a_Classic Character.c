#include <stdio.h>
#include <assert.h>
#include "p1colour.h"

void print_space(int colour);

int main(void)
{
	set_text_colour(WHITE, BLACK);

	FILE* p_file = 0;

	p_file = fopen("Character.txt", "rt");

	int classic_data[252];

	for (int index = 0; index < 252; index++)
	{
		fscanf(p_file, "%d,", &classic_data[index]);
		print_space(classic_data[index]);

		if ((index + 1) > 1 && (index + 1) % 80 == 0)
		{
			printf("\n");
		}
	}

	fclose(p_file);
	p_file = 0;

	return 0;
}

void print_space(int colour)
{
	set_text_colour(BLACK, colour);
	printf(" ");
	printf(" ");
	set_text_colour(BLACK, BLACK);
}