// COMP500/ENSE501 Modular Guess My Number
// Student ID: 21152297
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

const int MAX_TURNS = 7;

void seed_prng(void);
void print_prompt(void);
void print_turns_prompt(int turns_left);
void print_guess_prompt(void);
int get_guess(void);
int check_guess(int hidden, int the_guess);
void print_result(int turn_count, int hidden);
void print_hint(int hidden, int the_guess);

int main(void)
{
	// TODO: Part a)
	seed_prng();
	int correct = 0;
	int turns_remaining = MAX_TURNS;
	int secret = rand() % 10 + 1;

	// TODO: Part c)
	print_prompt();

	do
	{
		// TODO: Part e)
		print_turns_prompt(turns_remaining);

		// TODO: Part h)
		print_guess_prompt();
		int guess = get_guess();
		correct = check_guess(secret, guess);

		// TODO: Part k)
		if (correct != 1)
		{
			print_hint(secret, guess);
			turns_remaining--;
		}
	}
	while (correct != 1 && turns_remaining > 0);


	// TODO: Part m)
	print_result(turns_remaining, secret);

	return 0;
}

void seed_prng(void)
{
	srand(time(0));
}

// TODO: Part b)
void print_prompt(void)
{
	printf("I'm thinking of a number between 1 and 100...");
	printf("\n");
	printf("\n");
}

// TODO: Part d)
void print_turns_prompt(int turns_left)
{
	printf("You have %d turns left!", turns_left);
	printf("\n");
	printf("\n");
}
// TODO: Part f)
void print_guess_prompt(void)
{
	printf("What is your guess\? ");
}

// TODO: Part g)
int get_guess(void)
{
	int the_guess = 0;
	scanf("%d", &the_guess);

	return the_guess;
}

int check_guess(int hidden, int the_guess)
{
	int check_guess = 0;
	
	if (the_guess == hidden)
	{
		check_guess = 1;
	}

	return check_guess;
}

// TODO: Part i)
void print_hint(int hidden, int the_guess)
{
	if (hidden < the_guess)
	{
		printf("Your guess of %d is too high!\n", the_guess);
	}
	else if (hidden > the_guess)
	{
		printf("Your guess of %d is too low!\n", the_guess);
	}
}

// TODO: Part j)
void print_result(int turn_count, int hidden)
{
	if (turn_count > 0)
	{
		printf("You guessed it in %d turns!", MAX_TURNS - turn_count);
		printf("\n");
		printf("\n");
		printf("Well done!");
	}
	else if (turn_count <= 0)
	{
		printf("Oh no! No turns left! My number was %d", hidden);
		printf("\n");
	}
}
