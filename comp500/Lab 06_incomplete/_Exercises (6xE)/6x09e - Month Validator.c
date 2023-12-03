#include <stdio.h>
#include <string.h>

enum Months
{
	VALID,
	INVALID,
	NO_INPUT
};

enum Months check_month = NO_INPUT;

void check_if_month_valid(char* month_input);

int main(void)
{
	printf("What month\? ");
	char month_input[20] = "\0";
	scanf("%19s", &month_input);

	check_if_month_valid(month_input);

	if (check_month == VALID)
	{
		printf("\n");
		printf("VALID: %s is a month.\n", month_input);
	}
	else
	{
		printf("\n");
		printf("VALID: %s is not month.\n", month_input);
	}

	return 0;
}


void check_if_month_valid(char* month_input)
{
	if (strcmp(month_input, "1") == 0)
	{
		check_month = VALID;
		strcpy(month_input, "January");
	}
	else if (strcmp(month_input, "2") == 0)
	{
		check_month = VALID;
		strcpy(month_input, "February");
	}
	else if (strcmp(month_input, "3") == 0)
	{
		check_month = VALID;
		strcpy(month_input, "March");
	}
	else if (strcmp(month_input, "4") == 0)
	{
		check_month = VALID;
		strcpy(month_input, "April");
	}
	else if (strcmp(month_input, "5") == 0)
	{
		check_month = VALID;
		strcpy(month_input, "May");
	}
	else if (strcmp(month_input, "6") == 0)
	{
		check_month = VALID;
		strcpy(month_input, "June");
	}
	else if (strcmp(month_input, "7") == 0)
	{
		check_month = VALID;
		strcpy(month_input, "July");
	}
	else if (strcmp(month_input, "8") == 0)
	{
		check_month = VALID;
		strcpy(month_input, "August");
	}
	else if (strcmp(month_input, "9") == 0)
	{
		check_month = VALID;
		strcpy(month_input, "September");
	}
	else if (strcmp(month_input, "10") == 0)
	{
		check_month = VALID;
		strcpy(month_input, "October");
	}
	else if (strcmp(month_input, "11") == 0)
	{
		check_month = VALID;
		strcpy(month_input, "November");
	}
	else if (strcmp(month_input, "12") == 0)
	{
		check_month = VALID;
		strcpy(month_input, "December");
	}
	else if (strcmp (month_input, "January") == 0)
	{
		check_month = VALID;
	}
	else if (strcmp(month_input, "February") == 0)
	{
		check_month = VALID;
	}
	else if (strcmp(month_input, "March") == 0)
	{
		check_month = VALID;
	}
	else if (strcmp(month_input, "April") == 0)
	{
		check_month = VALID;
	}
	else if (strcmp(month_input, "May") == 0)
	{
		check_month = VALID;
	}
	else if (strcmp(month_input, "June") == 0)
	{
		check_month = VALID;
	}
	else if (strcmp(month_input, "July") == 0)
	{
		check_month = VALID;
	}
	else if (strcmp(month_input, "August") == 0)
	{
		check_month = VALID;
	}
	else if (strcmp(month_input, "September") == 0)
	{
		check_month = VALID;
	}
	else if (strcmp(month_input, "October") == 0)
	{
		check_month = VALID;
	}
	else if (strcmp(month_input, "November") == 0)
	{
		check_month = VALID;
	}
	else if (strcmp(month_input, "December") == 0)
	{
		check_month = VALID;
	}
	else
	{
		check_month = INVALID;
	}
}