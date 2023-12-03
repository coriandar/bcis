#include <stdio.h>
#include <stdlib.h
#include <time.h>

int main(void)
{
	srand(time(0)) 
	 
	int a_dice = 0 
	 
	a_dice = (rand() % 6) + 1 
	 
	printf("You rolled a: %d\n", a_dice)
	 
	return 0
}