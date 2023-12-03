#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	srand(time(0));
	//https://www.youtube.com/watch?v=ZaZxHzRn-AY
	//Generate betwen range.

	int high = 0;
	int low = 0;
	int random = 0;
	
	printf("Low? ");
	scanf("%d", &low);

	printf("High? ");
	scanf("%d", &high);

	//mod 6 = 0 to 5. +8 = 8 to 13.
	//if high = 6 low = 1, mod = 5, need +1, then +low to bring range up.
	random = rand() % ((high - low) + 1) + low;
	printf("\nRandom: %d ", random);

	return 0;
}