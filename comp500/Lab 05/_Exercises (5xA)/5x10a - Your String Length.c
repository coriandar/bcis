//DESIGN
//Do not use string.h, strlen
//do what it does with a loop.
//use ! = '\0'

//LEARNT
//Used wrong variable at end previously.
//use %s not %c.

#include <stdio.h>

int main(void)
{
	printf("Enter a word: ");
	char word[128] = "\0";
	int count = 0;
	scanf("%s", &word);

	while (word[count] != '\0')
	{
		++count;
	}

	printf("\nThe word is %d characters long.\n", count);

	return 0;
}