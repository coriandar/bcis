#include <stdio.h>
#include <string.h>

// main, will run this.
int main(void)
{
	printf("Input a word: ");
	char word[100];
	scanf("%99s", &word);

	int count = 0;

	//how strlen works.
	while (word[count] != '\0')
	{
		count++;
	}

	printf("%s is %d characters in length.\n", word, count);

	return 0;
}