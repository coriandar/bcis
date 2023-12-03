/*
//LEARNT
How to implement press enter to continue.
	Clear buffers for all other scanf.
	Must scan %[^\n] into array, then clear buffer. 
*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

enum Game
{
	WIN,
	LOSE,
	UNDEFINED
};

enum Game state = UNDEFINED;

int roll_dice(void);
char game_start(char play);
int roll_check(void);
void check_win_lose_repeat(int sum);
void press_enter(void);

int main(void)
{
	srand(time(0));
	char play = '\0';

	play = game_start(play);

	while (play == 'y')
	{
		while (state == UNDEFINED)
		{
			int sum = roll_check();
			check_win_lose_repeat(sum);
		}

		printf("\nPlay again (y/n)\? ");
		scanf(" %c", &play);
		for (char buffer = '\0'; buffer != '\n'; scanf("%c", &buffer));

		if (play == 'y')
		{
			state = UNDEFINED;
		}
	}

	printf("\nGoodbye player!\n");

	return 0;
}

void check_win_lose_repeat(int sum)
{
	if (sum == 7 || sum == 11)
	{
		state = WIN;
		printf("\nNatural! The player wins!\n");
	}
	else if (sum == 2 || sum == 3 || sum == 12)
	{
		state = LOSE;
		printf("\nCraps! The player loses!\n");
	}
	else
	{
		printf("\nMust roll again...\n");
		press_enter();
	}
}

void press_enter(void)
{
	printf("\nPress enter to roll again...");

	char array[100];
	scanf("%[^\n]", &array);
	for (char buffer = '\0'; buffer != '\n'; scanf("%c", &buffer));
}

int roll_check(void)
{
	printf("\nRolling two dice!\n\n");

	int dice_1 = roll_dice();
	printf("The first dice shows %d...\n", dice_1);

	int dice_2 = roll_dice();
	printf("The second dice shows %d...\n", dice_2);

	int sum = dice_1 + dice_2;
	printf("The total is %d...\n", sum);

	return sum;
}

int roll_dice(void)
{
	return rand() % 6 + 1;
}

char game_start(char play)
{
	printf("Ready to \"Simple Craps\" play (y/n)\? ");
	scanf(" %c", &play);
	for (char buffer = '\0'; buffer != '\n'; scanf("%c", &buffer));

	return play;
}