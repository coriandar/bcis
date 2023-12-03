#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int input = 0;
	printf("Enter a whole number (eight digits or less): ");
	scanf("%d", &input);

	char con_char[9];
	sprintf(con_char, "%08d", input);

	printf("\nConverting int input into ASCII C-String array...\n\n");

	printf("Element 0 is: '%c' which is ASCII %d\n", con_char[0], con_char[0]);
	printf("Element 1 is: '%c' which is ASCII %d\n", con_char[1], con_char[1]);
	printf("Element 2 is: '%c' which is ASCII %d\n", con_char[2], con_char[2]);
	printf("Element 3 is: '%c' which is ASCII %d\n", con_char[3], con_char[3]);
	printf("Element 4 is: '%c' which is ASCII %d\n", con_char[4], con_char[4]);
	printf("Element 5 is: '%c' which is ASCII %d\n", con_char[5], con_char[5]);
	printf("Element 6 is: '%c' which is ASCII %d\n", con_char[6], con_char[6]);
	printf("Element 7 is: '%c' which is ASCII %d\n", con_char[7], con_char[7]);


	return 0;
}