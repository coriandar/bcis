#include <stdio.h>

typedef enum
{
	JAN = 1,
	FEB,
	MAR,
	APR,
	MAY,
	JUN,
	JUL,
	AUG,
	SEP,
	OCT,
	NOV,
	DEC
} month_input;

void print_char(int repeat, char what_char);
void print_key(char* month_text[]);
void print_season(int* p_user_month);

int main(void)
{
	char* month_text[] =
	{
		"Error",
		"January",
		"February",
		"March",
		"April",
		"May",
		"June",
		"July",
		"August",
		"September",
		"October",
		"November",
		"December",
	};

	print_key(month_text);
	
	printf("What month were you born in\? ");
	int user_month = 0;
	int* p_user_month = &user_month;
	scanf("%d", p_user_month);

	printf("\n");
	printf("%s ", month_text[*p_user_month]);
	printf("in New Zealand is in ");
	print_season(p_user_month);

	return 0;
}

void print_season(int* p_user_month)
{
	if (SEP <= *p_user_month && *p_user_month <= NOV)
	{
		printf("Spring");
	}
	else if (DEC <= *p_user_month && *p_user_month <= FEB)
	{
		printf("Summer");
	}
	else if (MAR <= *p_user_month && *p_user_month <= MAY)
	{
		printf("Autumn");
	}
	else if (JUN <= *p_user_month && *p_user_month <= AUG)
	{
		printf("Winter");
	}

	printf("\n");
}

void print_key(char* month_text[])
{
	for (int month = JAN; month <= DEC; month++)
	{
		if (month == JAN)
		{
			printf("Key:");
			print_char(4, ' ');
			printf("%s ", month_text[month]);
			printf("is ");
			printf("%d", month);
			printf("\n");
		}
		else
		{
			print_char(8, ' ');
			printf("%s ", month_text[month]);
			printf("is ");
			printf("%d", month);
			printf("\n");
		}
	}
	
	printf("\n");
}

void print_char(int repeat, char what_char)
{
	for (int current = 0; current < repeat; current++)
	{
		printf("%c", what_char);
	}
}