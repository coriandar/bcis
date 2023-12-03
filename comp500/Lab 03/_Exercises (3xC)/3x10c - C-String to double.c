#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char text[80] = "\0";
	printf("> ");
	scanf("%79s", &text);

	double whole_number = 0;
	//atoi char to double.
	whole_number = atof(text);

	printf("C-String: %s\n", text);
	printf("double: %f\n", whole_number);

	return 0;
}