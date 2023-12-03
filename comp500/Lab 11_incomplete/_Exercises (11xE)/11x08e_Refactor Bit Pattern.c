#include <stdio.h>

void print_bit_pattern(int num_bits, int input);
int get_input(int input);

int main(void)
{
	int input = 0;
	int num_bytes = sizeof(int);
	int num_bits = num_bytes * 8;

	do
	{
		input = get_input(input);
		print_bit_pattern(num_bits, input);
	}
	while (0 != input);

	return 0;
}

int get_input(int input)
{
	printf("Enter a whole number in decimal (0 to stop): ");
	scanf("%d", &input);

	return input;
}

void print_bit_pattern(int num_bits, int input)
{
	printf("\n%d in base-10 is", input);

	for (int index = num_bits - 1; index >= 0; index--)
	{
		int bit_to_check = (1 << index);

		if (0 == (index + 1) % 8)
		{
			printf(" ");
		}
		if (input & bit_to_check)
		{
			printf("1");
		}
		else
		{
			printf("0");
		}
	}

	printf(" in base-2.\n\n");
}