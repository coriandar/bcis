#include <stdio.h>
#include <string.h>

int main(void)
{
	char initials[3];

	printf("What is the first letter of your first name? ");
	//space before %c cut whitespace.
	scanf(" %c", &initials[0]);

	printf("What is the first letter of your last name? ");
	scanf(" %c", &initials[1]);

	initials[2] = '\0';
	printf("\nYour initials are: %s", initials);

	return 0;
}