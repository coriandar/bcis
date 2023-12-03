#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char text[80] = "\0";
	printf("> ");
	scanf("%79s", &text);

	int whole_number = 0;
	//atoi char to int.
	whole_number = atoi(text);

	printf("C-String: %s\n", text);
	printf("int: %d\n", whole_number);

	return 0;
}