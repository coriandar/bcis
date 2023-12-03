#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <crtdbg.h>

void print_dice(int* dice_values, int number_of_dice);
int* get_n_dice_rolls(int number_of_dice, int max_sides);

int main(void)
{
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

	srand((int)time(0));

	int* p_all_my_dice = 0;

	printf("How many dice shall we roll? ");
	int how_many_dice = 0;
	scanf("%d", &how_many_dice);

	printf("How many faces does each die have? ");
	int face_count = 0;
	scanf("%d", &face_count);

	p_all_my_dice = get_n_dice_rolls(how_many_dice, face_count);

	print_dice(p_all_my_dice, how_many_dice);

	free(p_all_my_dice);
	p_all_my_dice = 0;

	return 0;
}

// TODO: Define print_dice
int* get_n_dice_rolls(int number_of_dice, int max_sides)
{
	int* dice_roll = 0;
	dice_roll = malloc(sizeof(int) * number_of_dice);
	
	for (int index = 0; index < number_of_dice; index++)
	{
		dice_roll[index] = rand() % max_sides + 1;
	}

	return dice_roll;
}

// TODO: Define get_n_dice_rolls
void print_dice(int* dice_values, int number_of_dice)
{
	for (int index = 0; index < number_of_dice; index++)
	{
		printf("Dice %d shows ", index + 1);
		printf("%d\n", dice_values[index]);
	}
}