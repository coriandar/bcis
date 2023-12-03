/*
//LEARNT
	Use of (What) ? "ifTrue" : "ifFalse"
*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
	srand(time(0));
	int random_number = (rand() % 100) + 1;
	int guess = 0;
	int turns_used = 1;
	int turns_left = 7;

	printf("I'm thinking of a number between 1 and 100");
	printf("\n");
	printf("\n");

	printf("You have %d turns left!", turns_left);
	printf("\n");
	printf("\n");

	while (turns_left > 0 && guess != random_number)
	{
		printf("What is your guess? ");
		scanf("%d", &guess);

		if (guess < random_number)
		{
			turns_used++;
			turns_left--;
			printf("Your guess of %d is too low!", guess);
			printf("\n");

			if (turns_left == 0)
			{
				printf("\n");
				printf("You could not guess my number! It was %d.", random_number);
				printf("\n");
			}
			else
			{
				//(What) ? "ifTrue" : "ifFalse"
				printf("You have %d turn%s left!", turns_left, (turns_left == 1) ? "" : "s");
				printf("\n");
				printf("\n");
			}
		}
		else if (guess > random_number)
		{
			turns_used++;
			turns_left--;
			printf("Your guess of %d is too high!", guess);
			printf("\n");

			if (turns_left == 0)
			{
				printf("\n");
				printf("You could not guess my number! It was %d.", random_number);
				printf("\n");
			}
			else
			{
				printf("You have %d turn%s left!", turns_left, (turns_left == 1) ? "" : "s");
				printf("\n");
				printf("\n");
			}
		}
		else if (guess == random_number)
		{
			if (turns_left == 7)
			{
				printf("You guessed it in 1 turn.");
				printf("\n");
				printf("\n");
				printf("Well done!");
				printf("\n");
			}
			else if (turns_left < 7)
			{
				printf("You guessed it in %d turn%s.", turns_used, (turns_left == 0) ? "" : "s");
				printf("\n");
				printf("\n");
				printf("Well done!");
				printf("\n");
			}
		}
	}

	return 0;
}