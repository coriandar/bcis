#include <stdio.h>

int main(void)
{
	int input = 0;
	do {
		printf("Enter a whole number in decimal (0 to stop): ");
		scanf("%d", &input);
		
		int num_bytes = sizeof(int);
		int num_bits = num_bytes * 8;
		
		printf("\n%d in base-10 is", input);
		
		for (int i = num_bits - 1; i >= 0; --i)
		{
			int bit_to_check = (1 << i);
			if (0 == (i + 1) % 8)
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
	while (0 != input);
	
	return 0;
}