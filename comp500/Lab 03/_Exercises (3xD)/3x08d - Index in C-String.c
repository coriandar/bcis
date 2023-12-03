#include <stdio.h>
#include <string.h>

int main(void)
{
	char sentence[64] = "\0";
	int look = 0;
	int index = 0;

	printf("Write a sentence? ");
	scanf(" %63[^\n]", &sentence);
	printf("Look up character at index? ");
	scanf("%d", &look);

	index = sentence[look];

	printf("\nIn \"%s\" index %d is the character '%c'.\n", sentence, look, index);

	return 0;
}