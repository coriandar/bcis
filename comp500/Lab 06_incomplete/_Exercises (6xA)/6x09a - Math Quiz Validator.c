#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
	srand(time(0));
	int rand_1 = rand() % 11 + 2;
	int rand_2 = rand() % 11 + 2;
	const int CORRECT = rand_1 * rand_2;
	int scan_result = 0;
	int answer = 0;

	while (scan_result == 0)
	{
		printf("What is %d x %d\? ", rand_1, rand_2);
		scan_result = scanf("%d", &answer);

		if (scan_result == 0)
		{
			printf("Invalid input!");
			printf("\n");
			char bad_input = '\0';
			while (bad_input != '\n')
			{
				scanf("%c", &bad_input);
			}
		}
		else if (answer == CORRECT)
		{
			printf("\n");
			printf("Congratulations!");
			printf("\n");
		}
		else if (answer != CORRECT)
		{
			printf("\n");
			printf("Incorrect! %d x %d is %d", rand_1, rand_2, CORRECT);
			printf("\n");
		}
	}

	return 0;
}