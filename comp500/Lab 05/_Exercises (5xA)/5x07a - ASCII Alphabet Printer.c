//DESIGN
//loop lowercase letters. one line. ASCII 97 - 122
//loop uppercase letters. one line. ASCII 65 - 90
//single space, for loop, ++loop

#include <stdio.h>

int main(void)
{
	for (int count = 97; count <= 122; ++count)
	{
		printf("%c ", count);
	}
	printf("\n\n");

	for (int count = 65; count <= 90; ++count)
	{
		printf("%c ", count);
	}
	printf("\n\n");

	return 0;
}