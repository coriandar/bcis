#include <stdio.h>

int main(void)
{
	printf("Input a word: ");
	char first_word[50];
	scanf("%99s", &first_word);

	printf("Input a word: ");
	char second_word[50];
	scanf("%99s", &second_word);

	int index = 0;
	int first_length = 0;

	while (first_word[index] != '\0')
	{
		index++;
		first_length++;
	}

	index = 0;
	int second_length = 0;

	while (second_word[index] != '\0')
	{
		index++;
		second_length++;
	}

	int match = 1;
	index = 0;

	if (first_length == second_length)
	{
		for (index = 0; index < first_length - 1; index++)
		{
			if (first_word[index] != second_word[index])
			{
				match = 0;
			}
		}
	}
	else
	{
		match = 0;
	}

	if (match == 1)
	{
		printf("\nThe words are identical!");
	}
	else
	{
		printf("\nThe words are different!");
	}

	printf("\n");

	return 0;
}