/*
// LEARNT
	Bitwise coutn binary.
	to count zero: if ((value & 1) == 0)
	https://stackoverflow.com/questions/1777709/number-of-zeros-in-the-binary-representation-of-an-integer
*/

#include <stdio.h>

int count_1s(unsigned int value);
int count_0s(unsigned int value);

int main(void)
{
	unsigned int input = 0;

	int looping = 1;

	while (looping)
	{
		printf("> ");
		scanf("%d", &input);

		int num_zeroes = count_0s(input);
		int num_ones = count_1s(input);

		printf("%u contains ", input);
		printf("%u zeroes and ", num_zeroes);
		printf("%u ones\n\n", num_ones);
	}
	
	return 0;
}

// TODO
int count_1s(unsigned int value)
{
	// 1 byte = 8 bits
	// int = 4 bytes
	// 4 * 8 = 32bits
	int size = sizeof(int) * 8;
	
	int count_1 = 0;

	for (int current = 0; current < size; current++)
	{
		// both corresponding bits must be set to yield 1
		if (value & 1)
		{
			count_1++;
		}

		// right shift bits
		value >>= 1;
	}

	return count_1;
}

int count_0s(unsigned int value)
{
	int size = sizeof(int) * 8;

	int count_0 = 0;

	for (int current = 0; current < size; current++)
	{
		if ((value & 1) == 0)
		{
			count_0++;
		}

		// right shift bits
		value >>= 1;
	}

	return count_0;
}
