#include <stdio.h>

int main(void)
{
	char char_char;
	unsigned char char_uns;
	signed char char_sign;



	printf("The sizeof a char is: %zu byte(s)\n", sizeof(char_char));

	printf("The sizeof an unsigned char is: %zu byte(s)\n", sizeof(char_uns));

	printf("The sizeof an signed char is: %zu byte(s)\n\n", sizeof(char_sign));

	printf("Input a single character\n");
	printf("> ");
	char literal = '\0';
	scanf("%c", &literal);

	printf("\nThe '%c' character literal in ASCII is %d.\n", literal, literal);


	return 0;
}