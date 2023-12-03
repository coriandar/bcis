/*
// REQUIREMENTS
 To count the number of characters in the C-String passed into function.

// DESIGN
Function has counter that increments until %c == '\0'
	return counter value.

// ERRORS
	C2109 subscript require array or pointer type
		expression must have pointer-to-object type

// DEBUGGING
	Error within the function: cstr_length(char* text)
		Value k.
		How to get to the individual char in string?

	Reason was that it was already passing in the array[num];
		test == array[num]
*/

#include <stdio.h>

int cstr_length(char* text);

int main(void)
{
	char* test[] =
	{
		"Hello",              //  5 characters
		"Question 3...",      // 13 characters
		"Old Practical Test", // 18 characters
		"is",                 //  2 characters
		"easy!"               //  5 characters
	};

	for (int k = 0; k < 5; k++)
	{
		printf("%s : ", test[k]);
		printf("%d ", cstr_length(test[k]));
		printf("chars\n");
	}

	return 0;
}

int cstr_length(char* text)
{
	int length = 0;
	int k = 0;

	// TODO: Insert your code here...
	while (text[k] != '\0')
	{
		k++;
		length++;
	}

	// TODO: Temporary stub return...
	//length = 5;

	return length;
}
