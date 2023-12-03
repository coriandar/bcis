//DESIGN
//take two number and compare if one is bigger.
//evaluate and print result.

//LEARNT
//int first_num = scanf("%d", &first_num), evaluates as 1. Debug.
//Need remeber to put full stops.


#include <stdio.h>

int main(void)
{
	printf("First number\? ");
	int first_num = 0;
	scanf("%d", &first_num);

	printf("Second number\? ");
	int second_num = 0;
	scanf("%d", &second_num);

	printf("\nThe larger of %d and %d is %d.\n", first_num, second_num, (first_num > second_num) ? first_num : second_num);

	return 0;
}