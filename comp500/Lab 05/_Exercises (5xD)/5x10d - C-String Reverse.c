#include <stdio.h>
#include <string.h>

int main(void)
{
	printf("Enter a word: ");
	char word[100];
	scanf("%99s", &word);

	printf("\nReversed: ");

	int index = strlen(word);
	while (index >= 0)
	{
		printf("%c", word[index]);
		index--;
	}
	printf("\n");

	return 0;
}