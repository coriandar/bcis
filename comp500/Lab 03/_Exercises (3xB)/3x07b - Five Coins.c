#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	// adding + still works
	//srand(time(0) + 10);
	srand(time(0));

	int coin[5];

	// %2 always = 1 or 0
	coin[0] = (rand() % 2);
	coin[1] = (rand() % 2);
	coin[2] = (rand() % 2);
	coin[3] = (rand() % 2);
	coin[4] = (rand() % 2);

	printf("Coin1  Coin2  Coin3  Coin4  Coin5\n");
	printf("+---+  +---+  +---+  +---+  +---+\n");
	printf("| %d |  | %d |  | %d |  | %d |  | %d |\n", coin[0], coin[1], coin[2], coin[3], coin[4]);
	printf("+---+  +---+  +---+  +---+  +---+\n");
	printf("Key: Heads = 0, Tails = 1.\n\n");

	return 0;
}