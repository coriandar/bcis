//DESIGN
//loop, for (int x = 0; x < 3; ++x)

//LEARNT
//count += 10, same as count = count + 10

#include <stdio.h>

int main(void)
{
	for (int count = 40; count <= 400; count = count + 10)
	{
		printf("%d\n", count);
	}

	return 0;
}