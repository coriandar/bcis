#include <stdio.h>

int main(void)
{
	for (int n = 0; n < 10; n++)
	{
		if (n > 4)
		{
			printf("%d", n);
			printf("\n");
		}
		else
		{
			printf("%d", 9 - n);
			printf("\n");
		}
	}

	return 0;
}