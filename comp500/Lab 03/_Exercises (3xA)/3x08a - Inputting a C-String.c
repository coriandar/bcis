#include <stdio.h>

int main(void)
{
	char colour[10];

	printf("What is your favourite colour? ");
	scanf("%s", &colour);
	printf("You like the colour %s.\n", colour);

	return 0;
}