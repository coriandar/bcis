#include <stdio.h>

int main(void)
{
	char input = '\0';
	char input_let_num = '\0';
	char input_low = '\0';
	char input_incre = '\0';
	char input_decr = '\0';

	printf("Alphabet Facts!\n");
	printf("^^^^^^^^^^^^^^^\n\n");

	printf("Please input an uppercase letter: ");
	scanf("%c", &input);

	input_low = input + 32;
	input_decr = input - 1;
	input_incre = input + 1;

	// upper case range 65 to 90. H = 72
	// (input - 65) + 1 = 7, add one to include 65.
	input_let_num = (input - 65) + 1;

	printf("\nSome interesting facts:\n\n");
	printf("  1) The lowercase version of the letter is '%c'.\n\n", input_low);
	printf("  2) The letter '%c' comes before '%c' in the alphabet.\n\n", input_decr, input);
	printf("  3) The letter '%c' comes after '%c' in the alphabet.\n\n", input_incre, input);
	printf("  4) %c is letter number %d in the alphabet!\n\n", input, input_let_num);

	return 0;
}