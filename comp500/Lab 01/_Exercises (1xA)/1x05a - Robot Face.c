#include <stdio.h>

int main(void)
{
	printf("  +");
	for (int r = 0; r < 14; r++, printf("-"));
	printf("+\n");

	printf("  |   /\\    /\\   |\n");
	printf(" <|  /  \\  /  \\  |>\n");
	printf("<x|  \\O /  \\O /  |x>\n");
	printf(" <|   \\/    \\/   |>\n");
	printf("  |      %%%%      |\n");
	printf("  |  \\        /  |\n");
	printf("  |   \\______/   |\n");

	printf("  +");
	for (int r = 0; r < 14; r++, printf("-"));
	printf("+\n");

	return 0;
}