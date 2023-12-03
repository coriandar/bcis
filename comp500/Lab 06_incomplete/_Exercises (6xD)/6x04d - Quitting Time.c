/*
//IMPLEMENTATION
Write a program that first prints out the message “Welcome to Quitting Time!” followed by a new line.

Next the program must prompt the user, asking if they want to quit. If the user responds with 'y' then the program must finish by printing “Ok! Bye!” followed by a new line.

If the user decides not to quit, the program must print out “Let's keep going ...” and then ask again if the user wants to quit.

*/

#include <stdio.h>

int main(void)
{
	printf("Welcome to Quitting Time!\n");

	char quit = 'n';

	while (quit == 'n')
	{
		printf("Do you want to quit (y/n)\? ");
		char quit_q = 'y';
		scanf(" %c", &quit_q);
		for (char buffer = '\0'; buffer != '\n'; scanf("%c", &buffer));

		if (quit_q == 'n')
		{
			printf("Let's keep going...\n");
		}
		else if (quit_q == 'y')
		{
			quit = 'y';
			printf("Ok! Bye!\n");
		}
	}

	return 0;
}