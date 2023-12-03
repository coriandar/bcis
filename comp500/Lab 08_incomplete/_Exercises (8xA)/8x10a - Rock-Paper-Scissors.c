/*
//LEARNT
From trying it out, learnt how to pass a structure pointer.
*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

enum Rock_Paper_Scissors
{
	ROCK, // 0
	PAPER, // 1
	SCISSORS, // 2
	EMPTY
};

enum Check
{
	YES,
	NO,
	WIN,
	LOSE,
	TIE,
	VALID,
	INVALID
};

struct Scoreboard
{
	int tie;
	int win;
	int lose;
	int games;
};

enum Check play_again = YES;
enum Check valid = INVALID;

int gen_player_move(char input);
void print_player_move(int player_input);
int players_turn(char input);

void seed_number(void);
int gen_cpu_move(void);
void print_cpu_move(int cpu_move);
int cpus_turn(void);

int compute_game(int player_move, int cpu_move);
void print_game_result(int game_result);

char start_game(void);
char validate_input_move(char input);

void check_play_again(void);
char validate_input_cont(char input);

void print_scoreboard(struct Scoreboard* p_tracker);
void count_scoreboard(struct Scoreboard* p_tracker, int game_result);

int main(void)
{
	seed_number();

	struct Scoreboard tracker;
	struct Scoreboard* p_tracker = &tracker;

	p_tracker->tie = 0;
	p_tracker->win = 0;
	p_tracker->lose = 0;
	p_tracker->games = 0;

	do
	{
		char input = start_game();
		int player_move = players_turn(input);
		int cpu_move = cpus_turn();
		int game_result = compute_game(player_move, cpu_move);

		print_game_result(game_result);
		check_play_again();
		count_scoreboard(p_tracker, game_result);
	}
	while (play_again == YES);

	print_scoreboard(p_tracker);

	return 0;
}

void seed_number(void)
{
	srand(time(0));
}

void print_scoreboard (struct Scoreboard* p_tracker)
{
	printf("W: %d\n", p_tracker->win);
	printf("D: %d\n", p_tracker->tie);
	printf("L: %d\n", p_tracker->lose);
	printf("\n");
	printf("Games: %d\n", p_tracker->games);
}

void count_scoreboard(struct Scoreboard* p_tracker, int game_result)
{
	p_tracker->games++;

	if (game_result == TIE)
	{
		p_tracker->tie++;
	}
	else if (game_result == WIN)
	{
		p_tracker->win++;
	}
	else if (game_result == LOSE)
	{
		p_tracker->lose++;
	}
}

void check_play_again(void)
{
	printf("\n");
	
	char input_continue = '\0';

	do
	{
		printf("Play again (y/n)\? ");
		scanf(" %c", &input_continue);
		for (char buffer = '\0'; buffer != '\n'; scanf("%c", &buffer));

		input_continue = validate_input_move(input_continue);
	}
	while (input_continue != 'y' && input_continue != 'n');

	printf("\n");
}

char validate_input_move(char input)
{
	switch (input)
	{
	case 'N': //Fall through
	case 'n':
		input = 'n';
		play_again = NO;
		break;
	case 'Y': //Fall through
	case 'y':
		input = 'y';
		play_again = YES;
		break;
	}

	return input;
}

void print_game_result(int game_result)
{
	if (game_result == TIE)
	{
		printf("It's a tie.");
	}
	else if (game_result == WIN)
	{
		printf("Player wins.");
	}
	else if (game_result == LOSE)
	{
		printf("Player loses.");
	}

	printf("\n");
}

int compute_game(int player_move, int cpu_move)
{
	int result = 0;

	if (player_move == cpu_move)
	{
		result = TIE;
	}
	else if (player_move == ROCK)
	{
		if (cpu_move == SCISSORS)
		{
			result = WIN;
		}
		else if (cpu_move == PAPER)
		{
			result = LOSE;
		}
	}
	else if (player_move == PAPER)
	{
		if (cpu_move == ROCK)
		{
			result = WIN;
		}
		else if (cpu_move == SCISSORS)
		{
			result = LOSE;
		}
	}
	else if (player_move == SCISSORS)
	{
		if (cpu_move == PAPER)
		{
			result = WIN;
		}
		else if (cpu_move == ROCK)
		{
			result = LOSE;
		}
	}

	return result;
}

int cpus_turn(void)
{
	int cpu_move = gen_cpu_move();
	print_cpu_move(cpu_move);

	return cpu_move;
}

void print_cpu_move(int cpu_move)
{
	if (cpu_move == ROCK)
	{
		printf("CPU chose: Rock");
	}
	else if (cpu_move == PAPER)
	{
		printf("CPU chose: Paper");
	}
	else if (cpu_move == SCISSORS)
	{
		printf("CPU chose: Scissors");
	}

	printf("\n");
}

int gen_cpu_move(void)
{
	return rand() % 3;
}


int players_turn(char input)
{
	int player_input = gen_player_move(input);
	print_player_move(player_input);

	return player_input;
}

void print_player_move(int player_input)
{
	if (player_input == ROCK)
	{
		printf("You chose: Rock");
	}
	else if (player_input == PAPER)
	{
		printf("You chose: Paper");
	}
	else if (player_input == SCISSORS)
	{
		printf("You chose: Scissors");
	}

	printf("\n");
}

int gen_player_move(char input)
{
	int player_move = EMPTY;

	if (input == 'r')
	{
		player_move = ROCK;
	}
	else if (input == 'p')
	{
		player_move = PAPER;
	}
	else if (input == 's')
	{
		player_move = SCISSORS;
	}

	return player_move;
}

char start_game(void)
{
	char input = '\0';

	do
	{
		printf("Rock, paper or scissors (r,p,s)\? ");
		scanf(" %c", &input);
		for (char buffer = '\0'; buffer != '\n'; scanf("%c", &buffer));
		input = validate_input_cont(input);
	}
	while (valid == INVALID);

	return input;
}

char validate_input_cont(char input)
{
	switch (input)
	{
	case 'R': //Fall through
	case 'r':
		input = 'r';
		valid = VALID;
		break;
	case 'P': //Fall through
	case 'p':
		input = 'p';
		valid = VALID;
		break;
	case 'S': //Fall through
	case 's':
		input = 's';
		valid = VALID;
		break;
	default:
		input = input;
		valid = INVALID;
		break;
	}

	return input;
}