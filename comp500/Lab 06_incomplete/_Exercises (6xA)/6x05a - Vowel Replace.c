#include <stdio.h>
#include <string.h>

int main(void)
{
	printf("> ");
	int index = 0;
	char input[80] = "\0";
	scanf("%[^\n]", &input);
	printf("\n");

	while (input[index] != '\0')
	{
		switch (input[index])
		{
		case 'a': //Fall through...
		case 'A': //Fall through...
			printf("$");
			break;
		case 'e': //Fall through...
		case 'E': //Fall through...
			printf("#");
			break;
		case 'i': //Fall through...
		case 'I': //Fall through...
			printf("@");
			break;
		case 'o': //Fall through...
		case 'O': //Fall through...
			printf("*");
			break;
		case 'u': //Fall through...
		case 'U': //Fall through...
			printf("=");
			break;
		default:
			printf("%c", input[index]);
			break;
		}
		index++;
	}
	printf("\n");

	return 0;
}