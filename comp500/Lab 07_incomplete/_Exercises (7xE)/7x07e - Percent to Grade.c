#include <stdio.h>

char convert_percent_to_grade(float grade);

int main(void)
{
	printf("Enter grade percent: ");
	float grade = 0.0f;
	scanf("%f", &grade);

	printf("Letter grade: %c\n", convert_percent_to_grade(grade));

	return 0;
}

char convert_percent_to_grade(float grade)
{
	char letter_equivalant = '\0';

	if (0 <= grade && grade < 50)
	{
		letter_equivalant = 'D';
	}
	else if (50 <= grade && grade < 65)
	{
		letter_equivalant = 'C';
	}
	else if (65 <= grade && grade < 80)
	{
		letter_equivalant = 'B';
	}
	else if (80 <= grade)
	{
		letter_equivalant = 'A';
	}

	return letter_equivalant;
}