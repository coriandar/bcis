#include <stdio.h>

int main(void)
{
	printf("Please enter an ASCII character: ");
	char ascii = '\0';
	scanf(" %c", &ascii);

	printf("\n%c is %s.\n", ascii, (65 <= ascii && ascii <= 90 || 97 <= ascii && ascii <= 122) ? "alphabetic" : "not alphabetic");

	return 0;
}