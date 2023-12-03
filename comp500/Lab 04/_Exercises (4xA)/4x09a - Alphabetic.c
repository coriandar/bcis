// if it is range A-Z or range a-z it was alphabetic, else not.


#include <stdio.h>

int main(void)
{
	printf("Input a character: ");
	char input = '\0';
	scanf(" %c", &input);

	if (input >= 'A' && input <= 'Z' || input >= 'a' && input <= 'z')
	{
		printf("\nThe input was alphabetic.\n");
	}
	else
	{
		printf("\nThe input was not alphabetic.\n");
	}

	return 0;
}