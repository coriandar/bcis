#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	srand(time(0));
	int low = 2;
	int high = 12;

	int left = (rand() % ((high - low) + 1)) + low;
	int right = (rand() % ((high - low) + 1)) + low;


	printf("What is %d x %d\? ", left, right);
	int ans = 0;
	scanf("%d", &ans);

	int correct = left * right;

	if (ans == correct)
	{
		printf("\nCongratulations!\n");
	}
	else
	{
		printf("\nIncorrect! %d x %d is %d!\n", left, right, correct);
	}

	return 0;
}