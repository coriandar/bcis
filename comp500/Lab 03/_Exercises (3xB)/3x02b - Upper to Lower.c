#include <stdio.h>

int main(void)
{
	char upper_c = '\0';
	char lower_c = '\0';

	printf("---------------------------------\n");
	printf("Uppercase to Lowercase Converter:\n");
	printf("---------------------------------\n\n");

	printf("Please input an uppercase letter: ");
	scanf("%c", &upper_c);

	lower_c = upper_c + 32;

	printf("\nThe lowercase version is %c.\n\n", lower_c);
	printf("The ASCII value of %c is %d in base-10.\n\n", lower_c, lower_c);
	printf("The ASCII value of %c is %d in base-10.\n\n", upper_c, upper_c);

	return 0;
}