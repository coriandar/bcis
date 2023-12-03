#include <stdio.h>

int main(void)
{
	for (int i = 2; i < 100; ++i)
	{
		int k = 0;
		for (k = 2; k <= (i / k); ++k)
		{
			if ((i % k) == 0)
			{
				break;
			}
		}
		
		if (k > (i / k))
		{
			printf("%d is prime.\n", i);
		}
	}
	
	return 0;
}