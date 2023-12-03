#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
	printf("What is your word\? ");
	char word[100];
	scanf("%99s", &word);

	printf("What is your minimum number\? ");
	int min = 0;
	scanf("%d", &min);

	printf("What is your maximum number\? ");
	int max = 0;
	scanf("%d", &max);

	srand(time(0));
	int random = (rand() % ((max - min) + 1)) + min;
	printf("\nYour word will be printed %d times...\n\n", random);

	for (int repeat = 0; repeat < random; repeat++)
	{
		printf("%s ", word);
	}
	printf("\n");

	return 0;
}