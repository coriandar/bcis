#include <stdio.h>

int main(void)
{
	printf("Enter a word to encrypt: ");
	char word[128];
	scanf("%127s", &word);

	for (int index = 0; word[index] != '\0'; index++)
	{
		word[index]--;
	}

	printf("\nDecrypted: %s\n", word);

	return 0;
}