/*
//IMPLEMENTATION
Write a program that asks the user to input a starting number, a stopping number, and a step size as whole numbers. Next, set up a for loop with the user-specified whole numbers. When the loop executes, it must output the value of each step in the iteration, based upon the starting number and the step size. Finally, the program must output how many iterations the loop did.
*/

#include <stdio.h>

int main(void)
{
	printf("Starting number: ");
	int start = 0;
	scanf("%d", &start);

	printf("Stopping number: ");
	int stop = 0;
	scanf("%d", &stop);

	printf("Step size: ");
	int step = 0;
	scanf("%d", &step);

	printf("\nUsing a for loop:\n\n");

	printf("Starting at %d...\n\n", start);

	int iterations = 0;
	for (int number = start; number <= stop; number += step)
	{
		printf("In loop: %d...\n", number);
		iterations++;
	}

	printf("\n");
	printf("Stopping at %d...\n\n", stop);

	printf("This loop did %d iterations.\n", iterations);

	return 0;
}