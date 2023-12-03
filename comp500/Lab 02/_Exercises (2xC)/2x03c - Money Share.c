#include <stdio.h>

int main(void)
{
	int dollars = 0;
	int people = 0;
	int share = 0;

	printf("Equal Money Share\n");
	printf("-----------------\n\n");

	// Amount money.
	printf("Please input amount of dollars to be shared: ");
	scanf("%d", &dollars);

	// Amount people.
	printf("Please input amount of people: ");
	scanf("%d", &people);

	// Divide equal share, dollar amount only. = int.
	share = dollars / people;
	printf("\n%d dollars split equally among %d people is: %d", dollars, people, share);

	return 0;
}