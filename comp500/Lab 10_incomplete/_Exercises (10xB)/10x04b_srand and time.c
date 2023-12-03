/*
// ERRORS
warning C4242: 'function' : conversion from 'time_t' to 'unsigned int', possible loss of data

	enable warning 4242.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int roll_dice(void)
{
	return (rand() % 6) + 1;
}
int main(void)
{
	// TODO: Fix the warning caused by the line below:
	// type casted time
	srand((int)time(0));

	int dice[2];

	dice[0] = roll_dice();
	dice[1] = roll_dice();

	printf("Dice 1: %d\n", dice[0]);
	printf("Dice 2: %d\n", dice[1]);
	return 0;
}