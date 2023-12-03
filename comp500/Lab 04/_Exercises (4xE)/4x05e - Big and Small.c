//Using sequence and selection, write a program that 
//asks the user to input three whole numbers. 
//The program must then compute and output the biggest and smallest numbers.

#include <stdio.h>

int main(void)
{
	printf("Please enter a number: ");
	int num_1 = 0;
	scanf("%d", &num_1);

	printf("Please enter another number: ");
	int num_2 = 0;
	scanf("%d", &num_2);

	printf("Please enter a third number: ");
	int num_3 = 0;
	scanf("%d", &num_3);

	int biggest = 0;
	int smallest = 0;

	if (num_1 > num_2 && num_1 > num_3)
	{
		biggest = num_1;
	}
	else if (num_2 > num_1 && num_2 > num_3)
	{
		biggest = num_2;
	}
	else if (num_3 > num_1 && num_3 > num_2)
	{
		biggest = num_3;
	}

	if (num_1 < num_2 && num_1 < num_3)
	{
		smallest = num_1;
	}
	else if (num_2 < num_1 && num_2 < num_3)
	{
		smallest = num_2;
	}
	else if (num_3 < num_1 && num_3 < num_2)
	{
		smallest = num_3;
	}

	printf("\nBiggest number was: %d\n", biggest);
	printf("Smallest number was: %d\n", smallest);

	return 0;
}