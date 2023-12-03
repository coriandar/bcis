#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	//seed random
	srand(time(0));
	int mod = 0;
	int rolls[3];

	printf("How many sides are on the dice? ");
	scanf("%d", &mod);

	printf("\nRolling three %d-sided dice...\n\n", mod);

	rolls[0] = (rand() % mod) + 1;
	printf("The first dice rolls... %d\n\n", rolls[0]);

	rolls[1] = (rand() % mod) + 1;
	printf("The second dice rolls... %d\n\n", rolls[1]);

	rolls[2] = (rand() % mod) + 1;
	printf("The third dice rolls... %d\n\n", rolls[2]);

	return 0;
}