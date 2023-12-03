#include <stdio.h>
#include <string.h>

int main(void)
{
	char secret[20] = "programmer";
	char guess[20] = "\0";
	int guess_left = 4;
	
	while (strcmp(guess, secret) != 0 && guess_left >= 0)
	{
		printf("Guess the password: ");
		scanf("%19s", &guess);

		if (strcmp(guess, secret) == 0)
		{
			printf("You guessed correctly! Well done!\n");
			printf("\n");
		}
		else
		{
			printf("Incorrect! You have ");
			printf("%d ", guess_left);
			printf("guess%s ", (guess_left == 1) ? "" : "es");
			printf("left.\n");
			printf("\n");
		}
		guess_left--;
	}

	return 0;
}