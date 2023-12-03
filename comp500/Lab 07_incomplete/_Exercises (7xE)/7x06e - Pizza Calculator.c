#include <stdio.h>

const int PIZZA_SLICES = 8;

int calculate_pizza_share(int number_of_people);

int main(void)
{
	printf("How many people\? ");
	int number_of_people = 0;
	scanf("%d", &number_of_people);

	int slices_each = calculate_pizza_share(number_of_people);

	printf("%d ", number_of_people);
	printf("people get ");
	printf("%d ", slices_each);
	printf("slice(s) each.\n");

	return 0;
}

int calculate_pizza_share(int number_of_people)
{
	return PIZZA_SLICES / number_of_people;
}