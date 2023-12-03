#include <stdio.h>

int main(void)
{
	int time = 0;
	int remain = 0;
	int exam = 150;

	printf("How many minutes since the start of the exam? ");
	scanf("%d", &time);

	remain = exam - time;
	printf("\nYou have %d minutes left!!!", remain);
	
	return 0;
}