#include <stdio.h>

enum Valid
{
	VALID,
	INVALID,
	EMPTY
};

enum Check
{
	LOW,
	HIGH,
	SIMPLE,
	COMPLICATED,
	NO_INPUT
};

enum Valid input = VALID;
enum Check ai_value = EMPTY;
enum Check ai_complexity = EMPTY;

void input_value_checker(char value);
void input_complexity_checker(char complexity);
void print_ai_recommends(void);

int main(void)
{
	printf("Task value, low or high (l/h)\? ");
	char value = '\0';
	scanf(" %c", &value);

	printf("Task complexity, simple or complicated (s/c)\? ");
	char complexity = '\0';
	scanf(" %c", &complexity);

	input_value_checker(value);
	input_complexity_checker(complexity);

	if (input == VALID)
	{
		print_ai_recommends();
	}
	else if (input == INVALID)
	{
		printf("Invalid input!\n");
	}

	return 0;
}

void print_ai_recommends(void)
{
	printf("AI recommends ");

	if (ai_value == LOW)
	{
		if (ai_complexity == SIMPLE)
		{
			printf("Save task for later.");
		}
		else if (ai_complexity == COMPLICATED)
		{
			printf("Consider deleting this task!");
		}
	}
	else if (ai_value == HIGH)
	{
		if (ai_complexity == SIMPLE)
		{
			printf("Do this task soon...");
		}
		else if (ai_complexity == COMPLICATED)
		{
			printf("Do this task first!");
		}
	}

	printf("\n");
}

void input_value_checker(char value)
{
	switch (value)
	{
	case ('l'):
	case ('L'): //fall through
		ai_value = LOW;
		break;
	case ('h'):
	case ('H'): //fall through
		ai_value = HIGH;
		break;
	default:
		input = INVALID;
	}
}

void input_complexity_checker(char complexity)
{
	switch (complexity)
	{
	case ('s'):
	case ('S'): //fall through
		ai_complexity = SIMPLE;
		break;
	case ('c'):
	case ('C'): //fall through
		ai_complexity = COMPLICATED;
		break;
	default:
		input = INVALID;
	}
}