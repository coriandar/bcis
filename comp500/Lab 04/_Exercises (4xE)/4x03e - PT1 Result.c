//DESIGN
//Ask user if scored more than 50%.
//if 'y' || 'Y'
//	print Great! Hope you score well...
//else if
//	print Oh no! Hopefully...
//else
//	print Your response makes no...

//IMPLEMENTATION
//Ask the user if they score more than 50%, response based on their answer.
//use printf, then scanf to read input.
//process through if, else if ladder to output relevant response.

//TESTING
//tested upper and lower case y/n, other characters as well.

#include <stdio.h>

int main(void)
{
	printf("Did you score more than 50%% in Practical Test 1 (y/n)\? ");
	char ans = '\0';
	scanf(" %c", &ans);

	if (ans == 'y' || ans == 'Y')
	{
		printf("\nGreat! Hope you score well in Practical Test 2!\n");
	}
	else if (ans == 'n' || ans == 'N')
	{
		printf("\nOh no! Hopefully your Practical Test 2 result is better!\n");
	}
	else
	{
		printf("\nYour response makes no sense!\n");
	}

	return 0;
}