#include <stdio.h>

int main(void)
{
	char first_initial = 0;
	char last_initial = 0;

	printf("Input the initial of your first name: ");
	scanf(" %c", &first_initial);
	printf("Input the initial of your last name: ");
	scanf(" %c", &last_initial);

	printf("\n");
	printf("Your initials are: ");
	printf("%c %c\n", first_initial, last_initial);

	return 0;
}