//Using a switch, write a program which asks the user to input a whole number representing a month of the year.The program must then output the number of days in the month.

#include <stdio.h>
#include <string.h>

int main(void)
{
	printf("Enter a month (Jan is 1, Dec is 12): ");
	int month = 0;
	scanf("%d", &month);

	int days = 0;
	char days_c[10] = "\0";

	switch (month)
	{
	case 1://fall through
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		days = 31;
		printf("\nThat month has %d days in it.\n", days);
		break;
	case 2:
		strcpy(days_c, "28 or 29");
		printf("\nThat month has %s days in it.\n", days_c);
		break;
	case 4://fall through
	case 6:
	case 9:
	case 11:
		days = 30;
		printf("\nThat month has %d days in it.\n", days);
		break;
	default:
		printf("\nInvalid month!\n");
		break;
	}

	return 0;
}