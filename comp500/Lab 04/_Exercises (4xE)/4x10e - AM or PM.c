//Using sequence, selection and strcmp, 
//design and implement a program that asks the user
//whether they would like an AM or PM reservation.

//DESIGN
//Ask user for AM or PM.
//if and if else strcmp "AM" "PM"
//output text based upon condtions.

#include <stdio.h>
#include <string.h>

int main(void)
{
	printf("Would you like an AM or PM reservation (am/pm)\? ");
	char time[3] = "\0";
	scanf("%2s", &time);

	if (strcmp(time, "AM") == 0 || strcmp(time, "am") == 0)
	{
		printf("\nExcellent, we will book you in for the AM session.\n");
	}
	else if (strcmp(time, "PM") == 0 || strcmp(time, "pm") == 0)
	{
		printf("\nExcellent, we will book you in for the PM session.\n");
	}
	else
	{
		printf("\nSorry, your response makes no sense!\n");
	}

	return 0;
}