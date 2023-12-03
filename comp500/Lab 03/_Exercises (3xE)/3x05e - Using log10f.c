#include <stdio.h>
#include <math.h>

int main(void)
{
	float input = 0;
	printf("Input a number: ");
	scanf("%f", &input);

	//Kept getting x.34 etc. trial and error + 1.0f = nope
	//trial and error +1 change to int. Why does it work??
	//int result = log10f(input) + 1;
	//printf("\n%.0f is %d digit(s).", input, result);

	//Kept getting x.34 etc. round upwards.
	float result = log10f(input);
	result = ceil(result);
	printf("\n%.0f is %.0f digit(s).", input, result);

	return 0;
}