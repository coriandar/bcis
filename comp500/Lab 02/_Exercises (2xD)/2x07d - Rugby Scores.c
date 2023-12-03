#include <stdio.h>

int main(void)
{
	float score_1 = 0;
	float score_2 = 0;
	float score_3 = 0;
	float score_4 = 0;
	float score_5 = 0;
	float score_6 = 0;
	float average = 0;

	printf("Rubgy Scores Average Calculator\n");
	printf("-------------------------------\n\n");

	printf("Score of game 1: ");
	scanf("%f", &score_1);

	printf("Score of game 2: ");
	scanf("%f", &score_2);

	printf("Score of game 3: ");
	scanf("%f", &score_3);

	printf("Score of game 4: ");
	scanf("%f", &score_4);

	printf("Score of game 5: ");
	scanf("%f", &score_5);

	printf("Score of game 6: ");
	scanf("%f", &score_6);

	average = (score_1 + score_2 + score_3 + score_4 + score_5 + score_6) / 6.0f;
	printf("\nAverage score over last six games is: %.2f\n", average);

	return 0;
}