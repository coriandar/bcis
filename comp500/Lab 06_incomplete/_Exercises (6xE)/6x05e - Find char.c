#include <stdio.h>

int main(void)
{
	printf("Enter some text: ");
	char input[100];
	scanf("%[^\n]", &input);

	printf("Count which character\? ");
	char count_char = '\0';
	scanf(" %c", &count_char);
	printf("\n");

	int count = 0;
	int index = 0;

	while (input[index] != '\n')
	{
		if (input[index] == count_char)
		{
			count++;
		}

		index++;
	}

	printf("\'%c\' appears %d ", count_char, count);
	printf("time%s ", (count == 1) ? "" : "s");
	printf("in \"%s\"", input);
	printf("\n");

	return 0;
}