#include <stdio.h>

void print_space(int spaces);
void print_fzbz(int num);

int main(void)
{
	int count = 0;

	for (int num = 1; num <= 100; num++)
	{
		printf("%s", (num < 10) ? " " : "");
		printf("%d ", num);
		print_fzbz(num);
		print_space(4);
		count++;

		if (count % 5 == 0)
		{
			printf("\n");
		}
	}

	return 0;
}

void print_space(int spaces)
{
	for (int repeat = 0; repeat < spaces; repeat++)
	{
		printf(" ");
	}
}

void print_fzbz(int num)
{
	if (num % 3 == 0 && num % 5 == 0)
	{
		printf("FzBz");
	}
	else if (num % 3 == 0)
	{
		printf("Fizz");
	}
	else if (num % 5 == 0)
	{
		printf("Buzz");
	}
	else
	{
		printf("----");
	}
}