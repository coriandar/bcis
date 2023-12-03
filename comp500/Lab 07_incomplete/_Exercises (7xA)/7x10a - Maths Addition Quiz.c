/*
//ERRORS
//DEBUGGING

//LEARNT
Order of definitions does not matter.
When input is void = seed_prng(), not seed_prng.
*/

// COMP500/ENSE501 Modular Math Quiz
// Student ID: 21152297
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int check_answer(int left_op, int right_op, int user_answer);
int get_random_number(void);
int get_user_input(void);
void print_prompt(void);
void print_question(int left_op, int right_op);
void run_quiz(int num_questions);
void seed_prng(void);

void seed_prng(void)
{
	srand(time(0));
}

int main(void)
{
	// Part a:
	seed_prng();

	// Part g:
	int rounds = 0;
	printf("Welcome to the Maths Addition Quiz!\n");
	printf("How many rounds\?\n");

	print_prompt();
	scanf("%d", &rounds);

	run_quiz(rounds);
	printf("\n");

	return 0;
}

// Part b:
void print_prompt(void)
{
	printf("> ");

	return;
}

// Part c:
int get_random_number(void)
{
	return (rand() % 10) + 1;
}

// Part d:
void print_question(int left_op, int right_op)
{
	printf("%d + %d = \?", left_op, right_op);
	printf("\n");

	return;
}

// Part e:
int check_answer(int left_op, int right_op, int user_answer)
{
	int check_result = -1;

	if ((left_op + right_op) == user_answer)
	{
		printf("Correct!");
		printf("\n");
		check_result = 1;
	}
	else if ((left_op + right_op) != user_answer)
	{
		printf("Incorrect!");
		printf("\n");
		check_result = 0;
	}
	
	return check_result;
}

// Part f:
int get_user_input(void)
{
	int user_input = 0;
	int scan_result = 0;
		
	while (scan_result == 0)
	{
		print_prompt();
		scan_result = scanf("%d", &user_input);

		if (scan_result == 0)
		{
			for (char buffer = '\0'; buffer != '\n'; scanf("%c", &buffer));
		}
		else if (scan_result == 1)
		{
			user_input = user_input;
		}
	}

	return user_input;
}

// Part h:
void run_quiz(int num_questions)
{
	printf("The %d question quiz begins!\n", num_questions);
	int total_correct = 0;

	for (int current_round = 0; current_round < num_questions; current_round++)
	{
		int number1 = get_random_number();
		int number2 = get_random_number();

		print_question(number1, number2);
		int user_answer = get_user_input();

		if (check_answer(number1, number2, user_answer) == 1)
		{
			++total_correct;
		}
	}
	printf("Result: %d out of %d correct!\n", total_correct, num_questions);

	return;
}