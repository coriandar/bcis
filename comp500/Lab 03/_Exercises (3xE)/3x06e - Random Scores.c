#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	srand(time(0));

	int left_low = 75;
	int left_high = 99;

	int left = (rand() % (left_high - left_low) + 1) + left_low;
	int me = 100;
	int right = rand() % 51;

	printf("Left    Me     Right\n");
	printf("+---+   +---+  +---+\n");

	// %3d to format as 3 digit max, leading spaces otherwise.
	printf("|%3d|   |%3d|  |%3d|\n", left, me, right);

	printf("+---+   +---+  +---+\n");

	return 0;
}