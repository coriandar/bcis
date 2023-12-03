//Write a program using a loop that will output a count up from 17 to 122 in steps of three.

#include <stdio.h>

int main(void)
{
	for (int count = 17; count <= 122; count += 3)
	{
		printf("%d...\n", count);
	}

	return 0;
}