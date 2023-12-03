#include <stdio.h>

int power(int base, int power_raised);

int main(void)
{
	int base = 0;
	int power_raised = 0;
	
	printf("Base? ");
	scanf("%d", &base);
	printf("Power? ");
	scanf("%d", &power_raised);
	int result = power(base, power_raised);
	printf("%d^%d is... ", base, power_raised);
	printf("%d\n", result);
	
	return 0;
}

int power(int base, int power_raised)
{
	if (power_raised == 0)
	{
		return 1;
	}
	else if (power_raised == 1)
	{
		return base;
	}
	else
	{
		return (base * power(base, power_raised - 1));
	}
}