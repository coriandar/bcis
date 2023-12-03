#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void press_enter(void);

int main(void)
{
	srand(time(0));

	int coin = 0;

	printf("Coin Toss Simulator\n");
	printf("-------------------\n\n");

	printf(" * Remember: 0 represents heads, 1 represents tails.\n\n");

	press_enter();

	printf("\n...Tossing...\n\n");

	coin = (rand() % 2);
	printf("The coin shows %d.\n\n", coin);

	return 0;
}

void press_enter(void)
{
	printf("Press enter to toss:");

	char enter[10];
	scanf("%[^\n]", &enter);
	for (char buffer = '\0'; buffer != '\n'; scanf("%c", &buffer));
}