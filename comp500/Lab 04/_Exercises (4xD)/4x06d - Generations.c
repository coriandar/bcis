#include <stdio.h>
#include <string.h>

int main(void)
{
	printf("Input your birth year: ");
	int year = 0;
	char gen[30] = "\0";
	scanf("%d", &year);

	if (1910 <= year && year <= 1924)
	{
		strcpy(gen, "The Greatest Generation");
	}
	else if (1925 <= year && year <= 1945)
	{
		strcpy(gen, "The Silent Generation");
	}
	else if (1946 <= year && year <= 1964)
	{
		strcpy(gen, "Baby Boomer Generation");
	}
	else if (1965 <= year && year <= 1979)
	{
		strcpy(gen, "Generation X");
	}
	else if (1980 <= year && year <= 1995)
	{
		strcpy(gen, "Generation Y – The Millennial");
	}
	else if (1996 <= year && year <= 2010)
	{
		strcpy(gen, "Generation Z");
	}
	else if (2011 <= year && year <= 2025)
	{
		strcpy(gen, "Gen Alpha");
	}
	printf("\n%d is %s.\n", year, gen);

	return 0;
}