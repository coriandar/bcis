#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>

int get_random(int low, int high);
int check_stars(int stars);
int check_risk(int stars, int risk);
int play(int risk);
void print_goodbye_banner(void);
void print_welcome(void);

int main(void)
{
	srand(time(0));

	int stars = 100;
	int risk = 0;
	char play_again = '\0';

	print_welcome();

	do
	{
		printf("You have %d \"stars\"...\n", stars);

		do
		{
			printf("How many \"stars\" do you want to risk\? ");
			risk = -1;
			scanf("%d", &risk);
		} 
		while (check_risk(stars, risk));

		stars = stars + play(risk);

		printf("Play again (y/n): ");
		scanf(" %c", &play_again);

		if (play_again != 'y')
		{
			printf("Time to stop...\nSorry, ");
			printf("you can\'t take your %d \"stars\" into ", stars);
			printf("the real world! Hope you play again soon!\n");
			stars = 0;
		}
	} 
	while (check_stars(stars));

	print_goodbye_banner();

	return 0;
}

int get_random(int low, int high)
{
	return low + (rand() % (high - low + 1));
}

int check_stars(int stars)
{
	if (stars == 0)
	{
		printf("Oh no!!! You have run out of \"stars\"!!!\n");
		return 0;
	}

	return 1;
}

int check_risk(int stars, int risk)
{
	const int LIMIT = 100;
	if (risk > stars)
	{
		printf("That's more \"stars\" than you have! (%d stars)\n", stars);
		return 1;
	}
	if (risk > LIMIT)
	{
		printf("That's more \"stars\" than the round limit! ");
		printf("(%d stars)\n", LIMIT);
		return 1;
	}
	if (risk < 0)
	{
		printf("You can't risk that number of \"Stars\"!!!\n");
		return 1;
	}
	return 0;
}

int play(int risk)
{
	int dice[3];
	dice[0] = get_random(1, 7);
	dice[1] = get_random(1, 7);
	dice[2] = get_random(1, 7);
	printf("The magic happens... the dice roll...\n");
	Sleep(1000);
	printf("The first die settles on %d...\n", dice[0]);
	Sleep(1000);
	printf("The second die settles on %d...\n", dice[1]);
	Sleep(1000);
	printf("The third die settles on %d...\n", dice[2]);

	printf("... [%d]-[%d]-[%d] ...\n", dice[0], dice[1], dice[2]);
	if (dice[0] == dice[1])
	{
		if (dice[1] == dice[2])
		{
			// Match three!
			if (dice[0] == 7)
			{
				printf("Well done!!! Three sevens!!! ");
				printf("Here's a big reward!!!\n");
				return risk * 11;
			}
			else
			{
				printf("Match three!!! Well done!!! ");
				printf("Here's a big reward!!!\n");
				return risk * 11;
			}
		}
		else
		{
			printf("Wow, a pair! Here's a small reward!\n");
			return risk * 4;
		}
	}
	else
	{
		if (dice[0] == dice[2])
		{
			printf("Look, a pair! Here's a small reward!\n");
			return risk * 4;
		}
		else if (dice[1] == dice[2])
		{
			printf("Yes, a pair! Here's a small reward!\n");
			return risk * 4;
		}
		else
		{
			printf("No matches! Sorry!\n");
			return -risk;
		}
	}
}

void print_goodbye_banner(void)
{
	for (int k = 0; k < 120; ++k)
	{
		Sleep(25);
		printf("%c", 176);
	}
}

void print_welcome(void)
{
	printf("Welcome to the RANDOM-MATCH-THREE game!\n\n");
}