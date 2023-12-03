#include <stdio.h>

float compute_bill(float starter, float main, float dessert);
void print_bill(float starter, float main, float dessert);
void print_space(int spaces);

int main(void)
{
	printf("Starter price\? ");
	float starter_price = 0.0f;
	scanf("%f", &starter_price);

	printf("Main price\? ");
	float main_price = 0.0f;
	scanf("%f", &main_price);

	printf("Dessert price\? ");
	float dessert_price = 0.0f;
	scanf("%f", &dessert_price);

	printf("\n");

	print_bill(starter_price, main_price, dessert_price);

	return 0;
}

/*
 * Function: compute_bill
 * --------------------------------------------------
 *	Returns the sum of the 3 real values input.
 * 
 *	real1: value of starter
 *	real2: value of main
 *	real3: value of dessert
 * 
 *	return: the sum of the 3 real values input.
*/
float compute_bill(float starter, float main, float dessert)
{
	return starter + main + dessert;
}

/*
 * Function: print_bill
 * --------------------------------------------------
 *	Prints the 3 input real values into a bill format.
 *	Calls compute_bill to calculate the total bill.
 *
 *	real1: value of starter
 *	real2: value of main
 *	real3: value of dessert
 *
 *	return: void
*/
void print_bill(float starter, float main, float dessert)
{
	printf("Starter: $%6.2f\n", starter);
	printf("Main: ");
	print_space(3);
	printf("$%6.2f\n", main);
	printf("Dessert: $%6.2f\n", dessert);
	printf("----------------\n");
	printf("Total:");
	print_space(3);
	printf("$%6.2f\n", compute_bill(starter, main, dessert));
}

/*
 * Function: print_space
 * --------------------------------------------------
 *	Prints specified number of 'spaces'
 *
 *	whole1: How many spaces
 *
 *	return: void
*/
void print_space(int spaces)
{
	for (int p = 0; p < spaces; p++, printf(" "));
}