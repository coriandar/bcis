#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int roll_dice(int* address1, int* address2);
void generate_seed(void);

int main(void)
{
	generate_seed();

	int dice1 = 0;
	int* address1 = &dice1;

	int dice2 = 0;
	int* address2 = &dice2;

	printf("main: Week 9: Pass by Reference, with Pointers\n");
	printf("main: Starting main function:\n");
	printf("main: variable dice1 holds the value: %d\n", dice1);

	// holds the same address as &dice1
	printf("main: variable dice1 stored at: %p\n", &dice1);

	printf("main: variable dice2 holds the value: %d\n", dice2);
	printf("main: variable dice2 stored at: %p\n", &dice2);
	printf("\n");

	printf("main: calling: roll_dice(%p, %p)\n", address1, address2);
	printf("roll_dice: Starting roll_dice function!\n");
	printf("roll_dice: variable address1 holds the value: %d\n", *address1);
	printf("roll_dice: variable address2 holds the value: %d\n", *address2);
	printf("roll_dice: ROLLING TWO DICE!\n");

	int total_roll = roll_dice(address1, address2);

	printf("roll_dice: Assigning first dice to caller's memory...\n");
	printf("roll_dice: Assigning second dice to caller's memory...\n");
	printf("roll_dice: Returning the sum of two dices...\n");
	printf("\n");

	printf("main: variable dice1 holds the value: %d\n", *address1);
	printf("main: variable dice1 stored at: %p\n", address1);
	printf("main: variable dice2 holds the value: %d\n", *address2);
	printf("main: variable dice2 stored at: %p\n", address2);
	printf("main: variable total_roll holds the value: %d\n", total_roll);
	printf("main: Returning zero to the operating system...\n");

	return 0;
}


int roll_dice(int* address1, int* address2)
{
	*address1 = rand() % 6 + 1;
	*address2 = rand() % 6 + 1;

	return *address1 + *address2;
}


void generate_seed(void)
{
	srand(time(0));
}