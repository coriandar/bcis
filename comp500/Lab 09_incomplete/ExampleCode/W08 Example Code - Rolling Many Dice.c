#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

enum
{
	NUM_DICE = 20
};

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

void roll_dice(int* dice_array, int dice_count, int min, int max)
{
	for (int k = 0; k < dice_count; ++k)
	{
		dice_array[k] = (rand() % (max - min + 1)) + min;
	}
}
void print_dice(int* dice_array, int dice_count)
{
	for (int k = 0; k < dice_count; ++k)
	{
		printf("Dice %d rolled %d\n", k + 1, dice_array[k]);
	}
}