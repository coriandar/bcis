#include <stdio.h>

void print_ascii_rectangle(char symbol, int width, int height);

int main(void)
{
	// TODO: Prompt the user for an ASCII symbol
	printf("Input symbol: ");
	char symbol = '\0';
	scanf(" %c", &symbol);

	// TODO: Prompt the user for a whole number width
	printf("Input width: ");
	int width = 0;
	scanf("%d", &width);

	// TODO: Prompt the user for a whole number height
	printf("Input height: ");
	int height = 0;
	scanf("%d", &height);

	// TODO: Call print_ascii_rectangle
	print_ascii_rectangle(symbol, width, height);

	return 0;
}

// TODO: Define print_ascii_rectangle
void print_ascii_rectangle(char symbol, int width, int height)
{
	printf("\n");

	for (int current_row = 0; current_row < height; current_row++)
	{
		for (int repeat = 0; repeat < width; repeat++)
		{
			printf("%c", symbol);
		}

		printf("\n");
	}

}