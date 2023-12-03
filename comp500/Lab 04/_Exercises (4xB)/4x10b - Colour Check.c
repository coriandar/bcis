//DESIGN
//is primary or not, uppercase / lowercase.
//strcmp

#include <stdio.h>
#include <string.h>

int main(void)
{
	printf("Colour\? ");
	char colour[10] = "\0";
	char check[30] = "\0";
	scanf("%20s", &colour);

	if (strcmp(colour, "Yellow") == 0)
	{
		strcpy(check, "a primary colour");
	}
	else if (strcmp(colour, "Red") == 0)
	{
		strcpy(check, "a primary colour");
	}
	else if (strcmp(colour, "Blue") == 0)
	{
		strcpy(check, "a primary colour");
	}
	else
	{
		strcpy(check, "not a primary colour");
	}
	printf("%s is %s.", colour, check);

	return 0;
}