#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

enum My_Colours
{
	RED,
	GREEN,
	BLUE,
	CYAN,
	MAGENTA,
	YELLOW
};

char* My_Colours_Text[] =
{
	"* R-e-d *",
	"* G-r-e-e-n *",
	"* B-l-u-e *",
	"* C-y-a-n *",
	"* M-a-g-e-n-t-a *",
	"* Y-e-l-l-o-w *"
};

int main(void)
{
	// Print menu:
	printf("Supported colours:\n\n");
	
	for (int k = RED; k <= YELLOW; ++k)
	{
		printf("Item %d: %s\n", k, My_Colours_Text[k]);
	}
	
	// Get choice:
	printf("\nWhich item? ");
	
	int input = -1;
	scanf("%d", &input);
	
	// Print choice:
	printf("\nThe user chose");
	printf(" %s.\n\n", My_Colours_Text[input]);
	
	return 0;
}