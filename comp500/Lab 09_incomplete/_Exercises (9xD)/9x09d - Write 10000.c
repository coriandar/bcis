#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
	srand(time(0));

	FILE* p_file = 0;
	p_file = fopen("write10000.txt", "wt");

	for (int roll = 0; roll < 10000; roll++)
	{
		fprintf(p_file, "Dice %d ", roll);
		fprintf(p_file, "shows ");
		fprintf(p_file, "%d\n", rand() % 6 + 1);
	}

	fclose(p_file);

	return 0;
}