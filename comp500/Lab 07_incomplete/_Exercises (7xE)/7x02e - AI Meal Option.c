#include <stdio.h>

enum Check
{
	HIGH,
	LOW,
	YES,
	NO,
	VALID,
	INVALID
};

enum Check input = VALID;
enum Check ai_hunger = VALID;
enum Check ai_healthy = VALID;

void print_ai_recommends(void);
void check_input_hunger(char hunger);
void check_input_healthy(char healthy);

int main(void)
{
	printf("Hunger level, high or low (h/l)\? ");
	char hunger = '\0';
	scanf(" %c", &hunger);

	printf("Must be healthy, yes or no (y/n)\? ");
	char healthy = '\0';
	scanf(" %c", &healthy);

	check_input_hunger(hunger);
	check_input_healthy(healthy);

	print_ai_recommends();

	return 0;
}

void check_input_hunger(char hunger)
{
	switch (hunger)
	{
	case 'l':
	case 'L':
		ai_hunger = LOW;
		break;
	case 'h':
	case 'H':
		ai_hunger = HIGH;
		break;
	default:
		input = INVALID;
		break;
	}
}

void check_input_healthy(char healthy)
{
	switch (healthy)
	{
	case 'y':
	case 'Y':
		ai_healthy = YES;
		break;
	case 'n':
	case 'N':
		ai_healthy = NO;
		break;
	default:
		input = INVALID;
		break;
	}
}

void print_ai_recommends(void)
{
	if (input == VALID)
	{
		printf("AI recommends ");

		if (ai_hunger == HIGH)
		{
			if (ai_healthy == YES)
			{
				printf("Wholesome Pasta.");
			}
			else if (ai_healthy == NO)
			{
				printf("Outrageous Roast.");
			}
		}
		else if (ai_hunger == LOW)
		{
			if (ai_healthy == YES)
			{
				printf("Nutritious Salad.");
			}
			else if (ai_healthy == NO)
			{
				printf("Cheese Burger.");
			}
		}
	}
	else if (input == INVALID)
	{
		printf("Invalid input!");
	}

	printf("\n");
}
