/*
//IMPLEMENTATION
Write a program that asks the user to input two words. The program must then print out whether or not the two words input both contain the exact same number of each letter.
*/

#include <stdio.h>

int main(void)
{
	printf("Word 1: ");
	char word_1[20];
	scanf("%19s", &word_1);

	printf("Word 2: ");
	char word_2[20];
	scanf("%19s", &word_2);

	int index = 0;
	int first_length = 0;

	while (word_1[index] != '\0')
	{
		index++;
		first_length++;
	}

	index = 0;
	int second_length = 0;

	while (word_2[index] != '\0')
	{
		index++;
		second_length++;
	}

	if (first_length == second_length)
	{
		printf("\n");
		printf("YES! ");
		printf("%s ", word_1);
		printf("and ");
		printf("%s", word_2);
		printf("\n");
	}
	else
	{
		printf("\n");
		printf("NO!");
		printf("\n");
	}

	return 0;
}