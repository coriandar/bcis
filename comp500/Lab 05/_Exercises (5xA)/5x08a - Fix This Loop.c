//DESIGN
//countdown from 10, print expired at the end.

//ISSUE
//Infinite loop of 10.
//no --count_down;

//FIX
//Added --count_down;
//Also can use for loop.

#include <stdio.h>

int main(void)
{
	int count_down = 10;

	while (count_down > 0)
	{
		printf("%d... ", count_down);
		--count_down;
	}

	printf("\n\nTimer has expired!\n");

	return 0;
}