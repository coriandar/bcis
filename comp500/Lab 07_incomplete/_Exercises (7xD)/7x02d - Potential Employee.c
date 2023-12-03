#include <stdio.h>

enum Valid
{
	VALID,
	INVALID,
	YES,
	NO,
	EMPTY
};

enum Valid check = VALID;
enum Knows_c check_knows_c = EMPTY;

void print_ai_recommends(int years_experience);
void valid_input_knows_c_check(char knows_c);

int main(void)
{
	printf("How many years' experience does the candidate have\? ");
	int years_experience = 0;
	scanf("%d", &years_experience);

	printf("Do they know C programming, yes or no (y/n)\? ");
	char knows_c = '\0';
	scanf(" %c", &knows_c);
	for (char buffer = '\0'; buffer != '\n'; scanf("%c", &buffer));
	
	valid_input_knows_c_check(knows_c);

	print_ai_recommends(years_experience);

	return 0;
}

void print_ai_recommends(int years_experience)
{
	if (check == VALID)
	{
		printf("AI recommends ");

		if (years_experience < 3)
		{
			if (check_knows_c == YES)
			{
				printf("Hire at salary band B.");
			}
			else if (check_knows_c == NO)
			{
				printf("Reject.");
			}
		}
		else if (3 <= years_experience)
		{
			if (check_knows_c == YES)
			{
				printf("Hire at salary band A.");
			}
			else if (check_knows_c == NO)
			{
				printf("Hire at salary band Z.");
			}
		}

		printf("\n");
	}
	else if (check == INVALID)
	{
		printf("Invalid input!\n");
	}
}

void valid_input_knows_c_check(char knows_c)
{
	switch (knows_c)
	{
	case 'y':
	case 'Y':
		check_knows_c = YES;
		break;
	case 'n':
	case 'N':
		check_knows_c = NO;
		break;
	default:
		check = INVALID;
		break;
	}
}