/*
//LEARNT
How call char* in function after passing in.
https://stackoverflow.com/questions/20064650/expression-must-have-a-pointer-to-object-type-in-c
*/

#include <stdio.h>

int count_digits(char* text);

int main(void)
{
	char* test[] =
	{
		"H3ll0",              // 2 digits
		"Qu3sti0n 3...",      // 3 digits
		"0ld Pr4ctic4l T3st", // 4 digits
		"is",                 // 0 digits
		"e4sy!"               // 1 digit
	};

	for (int k = 0; k < 5; ++k)
	{
		printf("%s : ", test[k]);
		printf("%d digits\n", count_digits(test[k]));
	}

	return 0;
}


int count_digits(char* text)
{
	int digit_count = 0;
	
	// TODO: Insert your code here...
	for (int index = 0; index < 5; index++)
	{
		if ('0' <= text[index] && text[index] <= '9')
		{
			digit_count++;
		}
	}

	// TODO: Temporary stub return...
	//return 3;

	return digit_count;
}