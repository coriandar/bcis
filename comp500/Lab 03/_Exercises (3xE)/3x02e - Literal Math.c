#include <stdio.h>

int main(void)
{
	// To convert inputted lowercase character to uppercase.
	char a;

	printf("Enter one lowercase character to be converted to uppercase.\n");
	printf("> ");
	scanf("%c", &a);

	printf("The uppercase version of %c is %c\n", a, a - ('a' - 'A'));

	return 0;
}