//Using sequence, selection and relational operators, 
//write a program that asks the user to input two whole numbers.
//The program must then respond with whether the two numbers are equal or not,
//and whether one number is greater than the other

#include <stdio.h>

int main(void)
{
	printf("Input a: ");
	int a = 0;
	scanf("%d", &a);

	printf("Input b: ");
	int b = 0;
	scanf("%d", &b);

	if (a == b)
	{
		printf("\na is equal to b.\n");
	}
	else if (a < b)
	{
		printf("\na is not equal to b\n");
		printf("b is greater than a\n");
	}
	else if (b < a)
	{
		printf("\na is not equal to b\n");
		printf("a is greater than b\n");
	}

	return 0;
}