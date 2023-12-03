/*
//REQUIREMENTS
Input lower/ uppercase. Detect bad input.
From user input determine what drink to recommend.
The program does not need to validate user input for negative numbers or unexpected data types such as text.

//IMPLEMENTATION
Create a simple AI program that helps the user select a drink option.

//DESIGN
SCAN temperature
SCAN straw
CALL input_formatter_temperature
	IF (conditions 'H', 'C')
	OUTPUT temperature
	ENDIF
CALL input_formatter_straw
	IF (conditions 'Y', 'N')
	OUTPUT straw
	ENDIF
CALL print_recommended_drink
	IF (conditions)
	PRINTF output
	ENDIF

IPO temperature --> Compare --> Output formatted temperature
IPO straw --> Compare --> Output formatted straw
IPO drink conditions --> Compare --> Output recommendations

//LEARNT
Remove comment out for prototype after testing.
Can use created functions in created functions.
Can also use switch with fallthrough.
*/

#include<stdio.h>

char input_formatter_temperature(char temperature);
char input_formatter_straw(char straw);
void print_recommended_drink(char temperature, char straw);

int main(void)
{
	printf("Drink temperature, hot or cold (h/c)\? ");
	char temperature;
	scanf("%c", &temperature);
	//Discard extra letters.
	for (char buffer = '\0'; buffer != '\n'; scanf("%c", &buffer));

	printf("Must use a straw, yes or no (y/n)\? ");
	char straw;
	scanf("%c", &straw);
	for (char buffer = '\0'; buffer != '\n'; scanf("%c", &buffer));

	temperature = input_formatter_temperature(temperature);
	straw = input_formatter_straw(straw);

	print_recommended_drink(temperature, straw);
	printf("\n");

	return 0;
}

char input_formatter_temperature(char temperature)
{
	if (temperature == 'H')
	{
		temperature = 'h';
	}
	else if (temperature == 'C')
	{
		temperature = 'c';
	}

	return temperature;
}

char input_formatter_straw(char straw)
{
	if (straw == 'Y')
	{
		straw = 'y';
	}
	else if (straw == 'N')
	{
		straw = 'n';
	}

	return straw;
}

void print_recommended_drink(char temperature, char straw)
{
	if (temperature == 'h')
	{
		if (straw == 'y')
		{
			printf("AI recommends Bubble Tea.");
		}
		else if (straw == 'n')
		{
			printf("AI recommends Mocha Coffee.");
		}
		else
		{
			printf("Invalid input!");
		}
	}
	else if (temperature == 'c')
	{
		if (straw == 'y')
		{
			printf("AI recommends Fizzy Cola.");
		}
		else if (straw == 'n')
		{
			printf("AI recommends Apple Juice.");
		}
		else
		{
			printf("Invalid input!");
		}
	}
	else
	{
		printf("Invalid input!");
	}

	return;
}