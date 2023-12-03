// Student ID: 21152297
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

// TODO: Part a) Declare enumerations here:
enum Boolean
{
	FALSE,
	TRUE,
};

enum Result
{
	DRAW,
	AI_WINS,
	PLAYER_WINS
};

enum Choice
{
	INVALID_CHOICE = -1,
	ROCK,
	PAPER,
	SCISSORS,
	MAX_CHOICE
};



// Function Prototypes:
enum Choice convert_input_to_choice(char player_input);
enum Choice get_ai_choice(void);
enum Choice get_player_choice(void);
enum Boolean is_draw(enum Choice ai, enum Choice player);
enum Boolean is_player_win(enum Choice ai, enum Choice player);
enum Boolean play_again(void);

void print_choice(enum Choice choice);
void print_game_over(int ai_wins, int player_wins, int draws);

void print_player_turn_prompt(void);
void print_players_move(enum Choice player);

void print_ais_move(enum Choice ai);
void print_result(enum Result result);

void print_stats(int ai_wins, int player_wins, int draws);
void print_welcome(void);

// The main function definition:
int main(void)
{
	srand(time(0));

	// TODO: Part c) Insert main code here:

	return 0;
}

// TODO: Part b) Define functions here: