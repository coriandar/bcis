#include <stdio.h>

int main(void)
{
	char text[] = "Learning about pointers.";
	char* ptr = text;

	// TODO: Insert code here...
	int size = sizeof(text) / sizeof(text[0]);

	for (int current = size - 1; current >= 0; current--)
	{
		printf("%c", *(ptr + current));
	}

	return 0;
}