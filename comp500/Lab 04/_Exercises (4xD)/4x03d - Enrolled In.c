#include <stdio.h>

int main(void)
{
	printf("Which course are you enrolled in, COMP500 (C) or ENSE501 (E)\? ");
	char course = '\0';
	scanf(" %c", &course);

	if (course == 'C' || course == 'c')
	{
		printf("\nThe user is enrolled in COMP500\n");
	}
	else if (course == 'E' || course == 'e')
	{
		printf("\nThe user is enrolled in ENSE501\n");
	}
	else
	{
		printf("\nInvalid response!\n");
	}

	return 0;
}