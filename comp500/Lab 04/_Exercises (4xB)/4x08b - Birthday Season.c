//LEARNT
// 2-D char array. Trial and error to initialise.

//ERROR
//Summer kept failing, not copying into season.

//FIX
// else if (12 <= month_d && month_d <= 2)
// Changed to be just else statement.

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
	if ( 9 <= month_d && month_d <= 11)
	{
		strcpy(season, "Spring");
	}
	else if (3 <= month_d && month_d <= 5)
	{
		strcpy(season, "Autumn");
	}
	else if (6 <= month_d && month_d <= 8)
	{
		strcpy(season, "Winter");
	}
	else
	{
		strcpy(season, "Summer");
	}
	printf("\n%s in New Zealand is in %s.\n", months[month_d], season);

	return 0;
}