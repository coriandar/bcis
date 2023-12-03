#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define NUM_DICE 20

void roll_dice(int* dice_array, int dice_count, int min, int max);
void print_dice(int* dice_array, int dice_count);

int main(void)
{
	srand(time(0));

	int dice_rolls[NUM_DICE];
	roll_dice(dice_rolls, NUM_DICE, 3, 7);
	print_dice(dice_rolls, NUM_DICE);

	return 0;
}

/*
* Function: roll_dice
* ----------------------------
* Returns value to array of pointers
*
* param: min, max values, pointer where to store result, how many dice
*
* returns: random value between specified range.
*/
void roll_dice(int* dice_array, int dice_count, int min, int max)
{
	for (int k = 0; k < dice_count; ++k)
	{
		dice_array[k] = (rand() % (max - min + 1)) + min;
	}
}

/*
* Function: print_dice
* ----------------------------
* Prints out values stored in array
*
* param: pointer and how many iterations
*
* returns: void
*/
void print_dice(int* dice_array, int dice_count)
{
	for (int k = 0; k < dice_count; ++k)
	{
		printf("Dice %d rolled %d\n", k + 1, dice_array[k]);
	}
}