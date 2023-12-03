#include <stdio.h>

int main(void)
{
	int number = 0;
	while (number < 20)
	{
		++number;
		printf("%d", number);
		
		if (number % 2 == 0)
		{
			printf("\n");
			continue;
		}
	
		printf(" is odd.\n");
	}
	return 0;
}