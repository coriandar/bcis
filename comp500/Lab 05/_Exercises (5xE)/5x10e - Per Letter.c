#include <stdio.h>
#include <string.h>

int main(void)
{
	printf("Input a word: ");
	char input[100];
	scanf("%s", input);

	printf("\n");

	int length = strlen(input);
	for (int index = 0; index < length; index++)
	{
		printf("%c\n", input[index]);
	}

	return 0;
}