#include <stdio.h>
#include <math.h>

int main(void)
{
	int num = 0;

	//take input scanf
	printf("Please enter a whole number: ");
	scanf("%d", &num);

	//print input, use input and power of 3
	printf("%d cubed is: %.0f", num, pow(num, 3)); 
	//printf("%d cubed is: %d", num, num*num*num);

	return 0;
}