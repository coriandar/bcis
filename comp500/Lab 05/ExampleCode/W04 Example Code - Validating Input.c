#include <stdio.h>

int main(void)
{
	int number = 0;
	printf("Input a number: ");
	int scan_result = 0;
	
	while (0 == scan_result)
	{
		scan_result = scanf("%d", &number);
		
		if (0 == scan_result)
		{
			printf("Please enter a number! Try again: ");
			
			char bad_input = 0;
			while (bad_input != '\n')
			{
				scanf("%c", &bad_input);
			}
		}
	}
	
	printf("The number: %d was entered.\n", number);
	
	return 0;
}