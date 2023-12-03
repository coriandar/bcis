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

	char again = 0;
	int* p_all_my_dice = 0;

	do
	{
		printf("How many dice shall we roll? ");
		int how_many_dice = 0;
		scanf("%d", &how_many_dice);

		printf("How many faces does each die have? ");
		int face_count = 0;
		scanf("%d", &face_count);

		p_all_my_dice = get_n_dice_rolls(how_many_dice, face_count);

		print_dice(p_all_my_dice, how_many_dice);

		printf("\nRoll more dice (y/n)? ");
		scanf(" %c", &again);

		free(p_all_my_dice);
		p_all_my_dice = 0;
	}
	while (again == 'y');

	return 0;
}

void print_dice(int* p_dice_values, int number_of_dice)
{
	for (int k = 0; k < number_of_dice; ++k)
	{
		printf("Dice %d shows %d\n", k, p_dice_values[k]);
	}
}

int* get_n_dice_rolls(int number_of_dice, int max_sides)
{
	int* new_dice = malloc(number_of_dice * sizeof(int));

	for (int k = 0; k < number_of_dice; ++k)
	{
		new_dice[k] = (rand() % max_sides) + 1;
	}

	return new_dice;
}