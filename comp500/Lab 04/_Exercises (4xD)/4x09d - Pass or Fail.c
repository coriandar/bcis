#include <stdio.h>

int main(void)
{
	printf("At least 80%% lab tutorial attendance (y/n)\? ");
	char atten = '\0';
	scanf(" %c", &atten);

	printf("Minimum of 40%% achieved in Final Exam (y/n)\? ");
	char exam = '\0';
	scanf(" %c", &exam);

	printf("Minimum of C- overall grade (y/n)\? ");
	char grade = '\0';
	scanf(" %c", &grade);

	if (atten == 'y' && exam == 'y' && grade == 'y')
	{
		printf("\nStudent passes COMP500/ENSE501.\n");
	}
	else
	{
		printf("\nStudent fails COMP500/ENSE501.\n");
	}

	return 0;
}