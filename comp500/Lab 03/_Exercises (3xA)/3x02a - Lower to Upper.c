#include <stdio.h>

int main(void)
{
	char lower_c = '\0';
	char upper_c = '\0';

	printf("=================================\n");
	printf("Lowercase to Uppercase Converter:\n");
	printf("=================================\n\n");

	printf("Please input a lowercase letter: ");
	scanf("%c", &lower_c);

	upper_c = lower_c - 32;

	printf("\nThe uppercase version is %c.\n\n", upper_c);
	printf("The ASCII value of %c is %d in base-10.\n\n", lower_c, lower_c);
	printf("The ASCII value of %c is %d in base-10.\n\n", upper_c, upper_c);

	return 0;
}