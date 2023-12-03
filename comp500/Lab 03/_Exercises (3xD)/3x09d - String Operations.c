#include <stdio.h>
#include <string.h>

int main(void)
{
	char sentence[128] = "\0";
	int len = 0;

	printf("Write a sentence? ");
	scanf("%[^\n]", sentence);

	len = strlen(sentence);
	printf("\n\"%s\" is %d characters.\n\n", sentence, len);

	int index = 0;
	printf("Place a null terminator at index: ");
	scanf("%d", &index);

	printf("\nReplacing '%c' with '\\0'...\n\n", sentence[index]);
	sentence[index] = '\0';

	len = strlen(sentence);
	printf("\"%s\" is %d characters long.\n", sentence, len);

	return 0;
}