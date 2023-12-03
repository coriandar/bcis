//DESIGN
//Do not use pow() or powf()
//Use a loop to repeat the multiplication the "power" amount of times.

//LEARNT
//Declare once.
//break up into smaller steps.

#include <stdio.h>

int main(void)
{
	printf("Enter the base: ");
	int base = 0;
	scanf("%d", &base);

	printf("Enter the power: ");
	int power = 0;
	scanf("%d", &power);

	int result = 1;
	for (int repeat = 0; repeat < power; ++repeat)
	{
		result = result * base;
	}
	printf("\n%d ^ %d is the same as...\n\n", base, power);

	//get it to 1 before. Step by step thinking.
	for (int count = 0; count < power - 1; ++count)
	{
		printf("%d * ", base);
	}
	printf("%d which is %d\n", base, result);

	return 0;
}