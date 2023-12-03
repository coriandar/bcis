#include <stdio.h>

int main(void)
{
	printf("Which hero is your favourite, Superman (S) or Batman (B)\? ");
	char hero = '\0';
	scanf(" %c", &hero);

	if (hero == 'S' || hero == 's')
	{
		printf("\nThe user's favourite super hero is Superman\n");
	}
	else if (hero == 'B' || hero == 'b')
	{
		printf("\nThe user's favourite super hero is Batman\n");
	}
	else
	{
		printf("\nInvalid response!\n");
	}

	return 0;
}