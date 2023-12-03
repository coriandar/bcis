/*
//DESIGN
Pass c-string, name of array is pointer to first [0]
loop to go through each letter, ending at '\n'
if conditions match ++

//LEARNT
Dereference, arithmatic (*pointer)++
Also specific number in array *(array_name + 0) == array_name[0]
Possible to pass through address with just &variable, not storing the address in a variable.
Directly manipulate values from a function call without return.
*/
#include <stdio.h> 

void count_categories(char* p_cstring, int* p_upper_count, int* p_lower_count, int* p_digit_count);

int main(void)
{
	char buffer1[] = "Hello Programming 1 Students";
	char buffer2[] = "Learn to program using arrays and pointers!";

	int upper_count = 0;
	int lower_count = 0;
	int digit_count = 0;

	count_categories(buffer1, &upper_count, &lower_count, &digit_count);
	printf("[%s] upper: %d, lower: %d, digit: %d\n", buffer1, upper_count, lower_count, digit_count);

	upper_count = 0;
	lower_count = 0;
	digit_count = 0;

	count_categories(buffer2, &upper_count, &lower_count, &digit_count);
	printf("[%s] upper: %d, lower: %d, digit: %d\n", buffer2, upper_count, lower_count, digit_count);

	return 0;
}

void count_categories(char* p_cstring, int* p_upper_count, int* p_lower_count, int* p_digit_count)
{
	do
	{
		if ('A' <= *p_cstring && *p_cstring <= 'Z')
		{
			(*p_upper_count)++;
		}
		else if ('a' <= *p_cstring && *p_cstring <= 'z')
		{
			(*p_lower_count)++;
		}
		else if ('0' <= *p_cstring && *p_cstring <= '9')
		{
			(*p_digit_count)++;
		}

		*p_cstring++;
	}
	while (*p_cstring != '\0');
}