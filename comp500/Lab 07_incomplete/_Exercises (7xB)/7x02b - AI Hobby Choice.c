#include <stdio.h>

enum Valid
{
	VALID,
	INVALID,
	EMPTY
};

enum Check
{
	OUTDOORS,
	INDOORS,
	YES,
	NO,
	NO_INPUT
};

enum Valid input = VALID;
enum Check ai_location = EMPTY;
enum Check ai_active = EMPTY;

char input_location_checker(char location);
char input_active_checker(char active);
void print_ai_recommendation(void);

int main(void)
{

	printf("Location, indoor or outdoor (i/o)\? ");
	char location = '\0';
	scanf(" %c", &location);

	printf("Active hobby, yes or no (y/n)\? ");
	char active = '\0';
	scanf(" %c", &active);

	location = input_location_checker(location);
	active = input_active_checker(active);

	if (input == VALID)
	{
		printf("AI recommends ");
		print_ai_recommendation();
	}
	else if (input == INVALID)
	{
		printf("Invalid input!\n");
	}
	
	return 0;
}

void print_ai_recommendation(void)
{
	if (ai_location == OUTDOORS)
	{
		if (ai_active == YES)
		{
			printf("Tennis");
		}
		else if (ai_active == NO)
		{
			printf("Bird Watching");
		}
	}
	else if (ai_location == INDOORS)
	{
		if (ai_active == YES)
		{
			printf("Tenpin Bowling");
		}
		else if (ai_active == NO)
		{
			printf("Stamp Collecting");
		}
	}

	printf("\n");
}

char input_location_checker(char location)
{
	switch(location)
	{
	case ('o'):
	case ('O'): //fall through
		location = 'o';
		ai_location = OUTDOORS;
		break;
	case ('i'):
	case ('I'): //fall through
		location = 'i';
		ai_location = INDOORS;
		break;
	default:
		input = INVALID;
	}

	return location;
}

char input_active_checker(char active)
{
	switch (active)
	{
	case ('y'):
	case ('Y'): //fall through
		active = 'y';
		ai_active = YES;
		break;
	case ('n'):
	case ('N'): //fall through
		active = 'n';
		ai_active = NO;
		break;
	default:
		input = INVALID;
	}
	
	return active;
}