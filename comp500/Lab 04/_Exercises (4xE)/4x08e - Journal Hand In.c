//Implement a program that asks the user if they 
//handed in Stage 1, Stage 2 and Stage 3 of the Reporting Journal assignment.

//When the user states they handed in any or all stages,
//the program must output the text "Great, that should be worth some marks!"
//Otherwise output the text "Oh no, those were easy marks!"

#include <stdio.h>

int main(void)
{
	printf("Did you hand in Stage 1 (Y/N)\? ");
	char stage_1 = '\0';
	scanf(" %c", &stage_1);

	printf("Did you hand in Stage 2 (Y/N)\? ");
	char stage_2 = '\0';
	scanf(" %c", &stage_2);

	printf("Did you hand in Stage 3 (Y/N)\? ");
	char stage_3 = '\0';
	scanf(" %c", &stage_3);

	if (stage_1 == 'Y' || stage_2 == 'Y' || stage_3 == 'Y')
	{
		printf("\nGreat, that shoulde be worth some marks!\n");
	}
	else
	{
		printf("\nOh no, those were easy marks!\n");
	}

	return 0;
}