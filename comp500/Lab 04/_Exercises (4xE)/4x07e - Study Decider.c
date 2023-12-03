//Write a program that helps a student decide on their study activity 
//depending on their Practical Test 1 Result 
//and their submission of Reporting Journal – Stage 1.


#include <stdio.h>

int main(void)
{
	printf("What did you score in Practical Test 1\? ");
	float answer_1 = '\0';
	scanf("%f", &answer_1);

	printf("Did you submit Reporting Journal - Stage 1 (y/n)\? ");
	char answer_2 = '\0';
	scanf(" %c", &answer_2);

	if (answer_1 < 50.0f)
	{
		if (answer_2 == 'y')
		{
			printf("\nPractice more programming exercises!\n");
		}
		else
		{
			printf("\nMore practice and keep a journal!!!\n");
		}
	}

	if (answer_1 >= 50.0f)
	{
		if (answer_2 == 'y')
		{
			printf("\nWell done! Keep studying well...\n");
		}
		else
		{
			printf("\nOh no, you should keep a journal!!\n");
		}
	}

	return 0;
}