#include <stdio.h>
#include <string.h>

int main(void)
{
	// how can I make it place a '\0' if it's 4 letter?
	char original[6];
	char copy[6];

	printf("Type in a lowercase five letter word:\n");
	printf("> ");
	scanf("%s", &original);

	printf("\nOriginal: %s\n\n", original);

	strcpy(copy, original);

	copy[0] = copy[0] - 32;
	copy[1] = copy[1] - 32;
	copy[2] = copy[2] - 32;
	copy[3] = copy[3] - 32;
	copy[4] = copy[4] - 32;
	printf("Copy: %s\n\n", copy);

	return 0;
}