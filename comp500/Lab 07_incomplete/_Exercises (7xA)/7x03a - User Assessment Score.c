/*
//REQUIREMENTS
get_letter_grade function must not call printf or scanf.

//IMPLEMENTATION
Create a program that asks the user for their first and last initials, as well as their assessment score. The program must then compute and display equivalent letter grade.
*/

#include <stdio.h>

void print_newline(int newline);
char get_letter_grade(float score);
void print_report(char first, char last, float score);

int main(void)
{
	printf("First name initial\? ");
	char first = '\0';
	scanf(" %c", &first);

	printf("Last name initial\? ");
	char last = '\0';
	scanf(" %c", &last);
	
	printf("Assessment score\? ");
	float score = 0.0f;
	scanf("%f", &score);

	print_newline(1);
	print_report(first, last, score);
	print_newline(1);

	return 0;
}

void print_newline(int newline)
{
	for (int lines = 0; lines < newline; lines++)
	{
		printf("\n");
	}

	return;
}

char get_letter_grade(float score)
{
	char letter_grade = '\0';

	if (0.0f <= score && score <= 100.0f)
	{
		if (80.0f <= score && score <= 100.0f)
		{
			letter_grade = 'A';
		}
		else if (65.0f <= score && score < 80.0f)
		{
			letter_grade = 'B';
		}
		else if (50.0f <= score && score < 65.0f)
		{
			letter_grade = 'C';
		}
		else if (0.0f <= score && score < 50.0f)
		{
			letter_grade = 'D';
		}
	}
	else
	{
		letter_grade = 'N';
	}

	return letter_grade;
}


void print_report(char first, char last, float score)
{
	printf("%c%c's assessment score  of %f is a %c grade.", first, last, score, get_letter_grade(score));

	return;
}