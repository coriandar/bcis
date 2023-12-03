#include <stdio.h>

int main(void)
{
	char letter = 'a';
	printf("1) letter holds: %c\n\n", letter);
	++letter;
	printf("2) letter holds: %c\n\n", letter);
	++letter;
	printf("3) letter holds: %c\n\n", letter);
	++letter;
	printf("4) letter holds: %c\n\n", letter);
	letter += 22;
	printf("5) letter holds: %c\n\n", letter);
	letter -= ('a' - 'A');
	printf("6) letter holds: %c\n\n", letter);
	letter -= 25;
	printf("7) letter holds: %c\n\n", letter);
	return 0;
}