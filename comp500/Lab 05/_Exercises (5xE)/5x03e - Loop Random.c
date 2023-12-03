#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
	srand(time(0));

	for (int iteration = 1; iteration <= 5; iteration++)
	{
		printf("Iteration %d: Random number is %d\n", iteration, (rand() % 5) + 3);
	}

	return 0;
}