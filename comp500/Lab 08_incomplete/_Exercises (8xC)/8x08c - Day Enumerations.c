/*
// DESIGN
	START main
		FOR EACH Day
			CALL print_day_name WITH current day
			PRINT " is a "
			CALL print_day_category WITH current day
			PRINT newline
		ENDFOR
	END
*/

#include <stdio.h>

enum Day
{
	MON,
	TUE,
	WED,
	THU,
	FRI,
	SAT,
	SUN
};

void print_day_category(enum Day day);
void print_day_name(char* days_of_week);

int main(void)
{
	char* days_of_week[] =
	{
		"Monday",
		"Tuesday",
		"Wednesday",
		"Thursday",
		"Friday",
		"Saturday",
		"Sunday"
	};

	for (int day = MON; day <= SUN; day++)
	{
		print_day_name(days_of_week[day]);
		print_day_category(day);
		printf("\n");
	}

	return 0;
}

void print_day_name(char* days_of_week)
{
	printf("%s\n", days_of_week);
}

void print_day_category(enum Day day)
{
	if (day == 5 || day == 6)
	{
		printf("Weekend");
	}
	else
	{
		printf("Weekday");
	}

	printf("\n");
}