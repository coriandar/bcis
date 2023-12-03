#include <stdio.h>
#include <string.h>

int main(void)
{
	printf("Input a character: ");
	char ASCII = '\0';
	char classif[30] = "\0";
	scanf(" %c", &ASCII);

	if (0 <= ASCII && ASCII <= 31 || ASCII == 127)
	{
		strcpy(classif, "non-printable");
	}
	else if (ASCII == 32)
	{
		strcpy(classif, "space");
	}
	else if (33 <= ASCII && ASCII <= 47 || 58 <= ASCII && ASCII <= 64 || 91 <= ASCII && ASCII <= 96 || 123 <= ASCII && ASCII <= 126)
	{
		strcpy(classif, "symbol");
	}
	else if (48 <= ASCII && ASCII <= 57)
	{
		strcpy(classif, "digit");
	}
	else if (65 <= ASCII && ASCII <= 90)
	{
		strcpy(classif, "uppercase");
	}
	else if (97 <= ASCII && ASCII <= 122)
	{
		strcpy(classif, "lowercase");
	}
	printf("\nInput is %s.", classif);

	return 0;
}