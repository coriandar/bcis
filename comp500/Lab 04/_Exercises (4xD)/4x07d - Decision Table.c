#include <stdio.h>
#include <string.h>

int main(void)
{
	printf("Is the player's health low or high (l/h)\? ");
	char health = '\0';
	scanf(" %c", &health);

	printf("Where is the player, close  or far (c/f)\? ");
	char loc = '\0';
	scanf(" %c", &loc);

	char response[30] = "\0";
	
	if (health == 'h')
	{
		if (loc == 'c')
		{
			strcpy(response, "call for reinforcements");
		}
		else if (loc == 'f')
		{
			strcpy(response, "go to sleep");
		}
	}
	else if (health == 'l')
	{
		if (loc == 'c')
		{
			strcpy(response, "attack");
		}
		else if (loc == 'f')
		{
			strcpy(response, "start searching");
		}
	}
	printf("\nThe AI should %s.\n", response);

	return 0;
}