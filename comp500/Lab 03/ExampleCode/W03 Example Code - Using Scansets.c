#include <stdio.h>

int main(void)
{
	char text_input[128];
	printf("Enter text with spaces: ");
	scanf("%127[^\n]", text_input);
	printf("Input was: %s\n\n", text_input);
	return 0;
}