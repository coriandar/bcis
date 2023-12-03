#include <stdio.h>

int main(void)
{
	printf("Input a character: ");
	char input = '\0';
	scanf("%c", &input);

	if (48 <= input && input <= 57)
	{
		printf("\nThe input was a digit.\n");
	}
	else
	{
		printf("\nThe input was not a digit.\n");
	}

	return 0;
}