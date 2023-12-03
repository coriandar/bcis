/*
Using a switch, write a program which asks the user to enter their birth month as a whole number, and then outputs the name of the month and the New Zealand season in which they were born.
*/

#include <stdio.h>
#include <string.h>

int main(void)
{
	char months[13][20] = { "Nope", "January", "February", "March", "April" , "May", "June", "July", "August", "September", "October", "November", "December" };
	int counter = 2;

	printf("Key:   January is 1\n");
	for (int i = 2; i <= 12; i++)
	{
		printf("       %s is %d\n", months[i], counter);
		++counter;
	}

	printf("\nWhat month were you born in\? ");
	int month_d = 0;
	scanf("%d", &month_d);

	char season[20] = "\0";

	switch (month_d)
	{
	case 9://fall through
	case 10:
	case 11:
		strcpy(season, "Spring");
		break;
	case 3://fall through
	case 4:
	case 5:
		strcpy(season, "Autumn");
		break;
	case 6://fall through
	case 7:
	case 8:
		strcpy(season, "Winter");
		break;
	case 1://fall through
	case 2:
	case 12:
		strcpy(season, "Summer");
		break;
	}

	printf("\n%s in New Zealand is in %s.\n", months[month_d], season);

	return 0;
}