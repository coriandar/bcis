//DESIGN
//	1. generate rand number.
//	2. Ask user for guess
//	3. If correct print well done, you took x guesses.
//	4. repeat 2 - 3 until third guess.
//	5. if third guess correct than well done, you took...
//	6. if thrid guess wrong, "you could not guess... it was...


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	srand(time(0));
	int secret = rand() % 10 + 1;

	// testing, show secret
	//printf("secret is: %d\n", secret);
	printf("I'm thinking of a number between 1 and 10...\n");
	printf("You have three chances to guess the number...\n");

	printf("\nWhat is your first guess\? ");
	int first = 0;
	scanf("%d", &first);

	if (secret == first)
	{
		printf("Correct!\n\n");
		printf("Well done, %d was my number! You took one guess!\n", secret);
	}
	else
	{
		printf("Incorrect!\n");
		printf("\nWhat is your second guess\? ");
		int second = 0;
		scanf("%d", &second);

		if (secret == second)
		{
			printf("Correct!\n\n");
			printf("Well done, %d was my number! You took two guesses!\n", secret);
		}
		else
		{
			printf("Incorrect!\n");
			printf("\nWhat is your third guess\? ");
			int third = 0;
			scanf("%d", &third);

			if (secret == third)
			{
				printf("Correct!\n\n");
				printf("Well done, %d was my number! You took three guesses!\n", secret);
			}
			else
			{
				printf("Incorrect!\n");
				printf("\nYou could not guess my number! It was %d.\n", secret);
			}
		}
	}

	return 0;
}