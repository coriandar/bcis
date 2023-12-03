//DESIGN
//	PRINT 'Are you enjoying...(y/n)
//	READ answer
//	IF (answer == 'y')
//		PRINT 'Great!...'
//	ELSE IF (answer == 'n')
//		PRINT 'Oh no!...'
//	ELSE
//		PRINT 'Your response makes no sense!'
//	ENDIF

//IMPLEMENTATION
//	Ask user for y or no if they enjoy COMP500

//CRITIQUE
// should add OR to include yes, YES, Y etc. 


#include <stdio.h>

int main(void)
{
	printf("Are you enjoying the COMP500/ENSE501 labs (y/n)? ");
	char answer = '\0';
	scanf("%c", &answer);

	if (answer == 'y')
	{
		printf("\nGreat! Keep going this is only week 4!\n");
	}
	else if (answer == 'n')
	{
		printf("\nOh no! Don't worry only eight short weeks to go!\n");
	}
	else
	{
		printf("\nYour response makes no sense!\n");
	}

	return 0;
}