//DESIGN
//	PRINT Ask user for input month.
//	READ input
//	IF (strcmp(input, "month") == 0)
//		PRINT relevant season
//	ELSE IF (strcmp(input, "month") == 0)
//		PRINT relevant season
//	ELSE
//		PRINT %s is not a month!
//	ENDIF

//IMPLEMENTATION
//	Asks the user to enter birth month(text), evaluate with strcmp
//	output name of month and related season.

//LEARNT
//printf to debug, print value, strcmp match = 0, no match = 1.
//	int str_cmp = 3;
//	str_cmp = strcmp(month, "September");
//	printf("strcmp %d", str_cmp);

#include <stdio.h>
#include <string.h>

int main(void)
{
	printf("What month were you born in\? ");
	char month[20] = "\0";
	scanf("%19s", &month);

	if (strcmp(month, "September") == 0 || strcmp(month, "October") == 0 || strcmp(month, "November") == 0)
	{
		printf("\n%s in New Zealand is in Spring.\n", month);
	}
	else if (strcmp(month, "December") == 0 || strcmp(month, "January") == 0 || strcmp(month, "February") == 0)
	{
		printf("\n%s in New Zealand is in Summer.\n", month);
	}
	else if (strcmp(month, "March") == 0 || strcmp(month, "April") == 0 || strcmp(month, "May") == 0)
	{
		printf("\n%s in New Zealand is in Autumn.\n", month);
	}
	else if (strcmp(month, "June") == 0 || strcmp(month, "July") == 0 || strcmp(month, "August") == 0)
	{
		printf("\n%s in New Zealand is in Winter.\n", month);
	}
	else
	{
		printf("\n%s is not a month!\n", month);
	}

	return 0;
}