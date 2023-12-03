#include <stdio.h>

int main(void)
{
	for (int current = 1; current <= 100; current++)
	{
		if (current % 2 == 1)
		{
			printf("%d is odd\n", current);
		}
		else
		{
			printf("%d is even\n", current);
		}
	}

	return 0;
}