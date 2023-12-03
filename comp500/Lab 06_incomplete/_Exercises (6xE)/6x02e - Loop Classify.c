/*
//IMPLEMENTATION
Write a program using a loop, and nested selection, that allows the user to input a single character, and then classifies the character. The possible classifications are digit, lower case letter, upper case letter, or something else. Allow the user to quit by typing the '~' key. When the user quits, the program must print out a leaving message.
*/

#include <stdio.h>

void check_input(char input);

int main(void)
{
	char quit = '\0';

	while (quit != '~')
	{
		printf("Type and key (~ to quit)...\n");

		printf("> ");
		char input = '\0';
		scanf(" %c", &input);
		for (char buffer = '\0'; buffer != '\n'; scanf("%c", &buffer));
		check_input(input);
		printf("\n");
		printf("\n");

		if (input == '~')
		{
			quit = '~';
			printf("All done! Goodbye!");
			printf("\n");
		}
	}

	return 0;
}

void check_input(char input)
{
	printf("That was ");

	if (48 <= input && input <= 57)
	{
		printf("a digit.");
	}
	else if (97 <= input && input <= 122)
	{
		printf("a lowercase letter.");
	}
	else if (65 <= input && input <= 90)
	{
		printf("an uppercase letter.");
	}
	else
	{
		printf("something else.");
	}
}