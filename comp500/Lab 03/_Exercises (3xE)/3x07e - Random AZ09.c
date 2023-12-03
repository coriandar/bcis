#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
	srand(time(0));

	int letter_low = 65;
	int letter_high = 90;
	int ran_letter = (rand() % ((letter_high - letter_low) + 1)) + letter_low;

	int number_low = 0;
	int number_high = 9;
	int ran_number = (rand() % ((number_high - number_low) + 1)) + number_low;

	printf("Random Letter: %c\n", ran_letter);
	printf("Random Number: %d\n", ran_number);

	return 0;
}