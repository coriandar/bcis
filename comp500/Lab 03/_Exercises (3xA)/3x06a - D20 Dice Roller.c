#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	// seed random, use time
	srand(time(0));

	// rand = range 0 to 32767
	// mod 20 = 0 to 19. +1 = range 1 to 20.
	//int die_roll_1 = ((rand() %20)+1);
	//int die_roll_2 = ((rand() %20)+1);
	//try with array

	int die_roll[2];

	die_roll[0] = ((rand() % 20) + 1);
	die_roll[1] = ((rand() % 20) + 1);

	printf("D20 Dice Roller:\n");
	printf("----========----\n\n");

	printf("The first die rolls the value: %d", die_roll[0]);

	printf("\n\nThen...\n\n");

	printf("The second die rolls the value: %d\n", die_roll[1]);

	return 0;
}