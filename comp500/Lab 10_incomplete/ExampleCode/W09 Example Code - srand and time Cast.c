#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	// The following cast (int) suppresses warning C4242
	// (warning C4242: 'function': conversion from 'time_t' to 'unsigned int', possible loss of data)
	srand((int)time(0));
	
	char again = '\0';
	
	do
	{
		int six_sided_dice = (rand() % 6) + 1;
		int twenty_sided_dice = (rand() % 20) + 1;
		int random_zero_to_100 = (rand() % 101);
		int random_negative_7_to_positive_7 = (rand() % 15) - 7;
		char random_lower_case = (rand() % 26) + 'a';
		char random_upper_case = (rand() % 26) + 'A';
		float random_percentage_0dp = 1.0f * (rand() % 101);
		float random_percentage_2dp = 0.01f * (rand() % 10001);
		
		printf("Six-sided dice shows: %d\n", six_sided_dice);
		printf("Twenty-sided dice shows: %d\n", twenty_sided_dice);
		printf("Random between [0, 100]: %d\n", random_zero_to_100);
		printf("Random between [-7, +7]: %d\n", random_negative_7_to_positive_7);
		printf("Random lower-case: %c (%d)\n", random_lower_case, random_lower_case);
		printf("Random upper-case: %c (%d)\n", random_upper_case, random_upper_case);
		printf("Random percentage (0dp): %f\n", random_percentage_0dp);
		printf("Random percentage (2dp): %f\n", random_percentage_2dp);
		
		printf("\n");
		printf("Generate randoms again (y/n)? ");
		scanf(" %c", &again);
		printf("\n");
	}
	while (again == 'y');

	return 0;
}