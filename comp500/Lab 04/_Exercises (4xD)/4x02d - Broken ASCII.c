#include <stdio.h>

int main(void)
{
	char first = '\0';
	char second = '\0';

	printf("Input a character: ");
	scanf(" %c", &first);
	printf("Input another character: ");
	scanf(" %c", &second);

	printf("\n");
	printf("ASCII %c is %d in base-10.\n", first, first);
	printf("ASCII %c is %d in base-10.\n", second, second);

	return 0;
}