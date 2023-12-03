#include <stdio.h>

int main(void)
{
	char first[256];
	char second[256];
	printf("Enter a string: ");
	scanf("%255s", first);
	printf("Enter another string: ");
	scanf("%255s", second);
	
	// Figure out how many characters are in first:
	int first_length = 0;
	while (first[first_length] != '\0')
	{
		++first_length;
	}
	
	// Figure out how many characters are in second:
	int second_length = 0;
	while (second[second_length] != '\0')
	{
		++second_length;
	}
	
	// Compare first to second:
	int match = 1;
	if (first_length == second_length)
	{
		for (int i = 0; i < first_length; ++i)
		{
			if (first[i] != second[i])
			{
				match = 0;
			}
		}
	}
	else
	{
		match = 0;
	}
	
	printf("Do the strings match... ");
	(match == 1) ? printf("Yes!\n") : printf("No!\n");
	
	return 0;
}