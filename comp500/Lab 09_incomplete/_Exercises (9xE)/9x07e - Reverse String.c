/*
// LEARNT
	Reverse a string.
	Need to use mid point so doesn't overwrite already swapped.
	https://www.youtube.com/watch?v=PtSHcou0WIs

*/

#include <stdio.h>
#include <string.h>

void reverse_string(char* ptr);

int main(void)
{
	char buffer[10] = "abcde";
	printf("A1) buffer holds: %s\n", buffer);
	reverse_string(buffer);
	printf("A2) buffer holds: %s\n", buffer);

	char example[] = "Hello Programming 1";
	printf("B1) example holds: %s\n", example);
	reverse_string(example);
	printf("B2) example holds: %s\n", example);

	char example2[] = "1 gnimmargorP olleH";
	printf("C1) example holds: %s\n", example2);
	reverse_string(example2);
	printf("C2) example holds: %s\n", example2);

	char example3[] = "This is Programming 1, COMP500";
	printf("D1) example holds: %s\n", example3);
	reverse_string(example3);
	printf("D2) example holds: %s\n", example3);

	return 0;
}

void reverse_string(char* ptr)
{
	// TODO: Insert your code here...
	int length = strlen(ptr);
	int mid_point = length / 2; // Find point to stop doing swap
	char temp = '\0';

	for (int index = 0; index < mid_point; index++)
	{
		// index 0 store in temp
		temp = ptr[index];
		// index 0 = last
		ptr[index] = ptr[length - index - 1];
		// last = first (temp)
		ptr[length - index - 1] = temp;
	}

	/*
	// VERSION 02:
	char temp[1000] = "\0";

	for (int current = size - 1, index = 0; current >= 0; current--)
	{
		temp[index] = ptr[current];
		index++;
	}

	sprintf(ptr, "%s", temp);


	// VERSION 01:
	int size = 0;

	while (ptr[size] != '\0')
	{
		size++;
	}

	char temp = '\0';

	temp = ptr[0];
	ptr[0] = ptr[4 - 0];
	ptr[4 - 0] = temp;

	temp = ptr[1];
	ptr[1] = ptr[4 - 1];
	ptr[4 - 1] = temp;

	temp = ptr[2];
	ptr[2] = ptr[4 - 2];
	ptr[4 - 2] = temp;

	printf("\n%s\n", ptr);
	*/
}