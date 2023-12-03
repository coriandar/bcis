#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	// seed random, use time
	srand(time(0));

	// rand = range 0 to 32767
	// mod 6 = 0 to 5. +1 = range 1 to 6.
	int die_roll_1 = (rand() % 6) + 1;
	int die_roll_2 = (rand() % 6) + 1;
	int die_roll_3 = (rand() % 6) + 1;
	int die_roll_4 = (rand() % 6) + 1;
	int die_roll_5 = (rand() % 6) + 1;

	printf("Dice1  Dice2  Dice3  Dice4  Dice5\n");
	printf("+---+  +---+  +---+  +---+  +---+\n");
	printf("| %d |  | %d |  | %d |  | %d |  | %d |\n", die_roll_1, die_roll_2, die_roll_3, die_roll_4, die_roll_5);
	printf("+---+  +---+  +---+  +---+  +---+\n");

	return 0;
}