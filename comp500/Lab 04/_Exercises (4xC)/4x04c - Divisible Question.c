//DESIGN
//use mod % if r = 0 is divisible by x.

#include <stdio.h>
#include <string.h>

int main(void)
{
	printf("Please input a whole number: ");
	int whole = 0;
	scanf("%d", &whole);

	char result[30] = "\0";
	if (whole % 2 != 0 && whole % 3 != 0)
	{
		strcpy(result, "not divisible by 2 or 3");
	}
	else if (whole % 2 == 0 && whole % 3 == 0)
	{
		strcpy(result, "divisible by 2 and 3");
	}
	else if (whole % 2 == 0 && whole % 3 != 0)
	{
		strcpy(result, "divisible by 2, but not by 3");
	}
	else if (whole % 2 != 0 && whole % 3 == 0)
	{
		strcpy(result, "divisible by 3, but not by 2");
	}
	printf("\n%d is %s.\n", whole, result);

	return 0;
}