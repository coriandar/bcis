#include <stdio.h>
#include "p1colour.h"

typedef enum Repeat_Check_Enum
{
	YES,
	NO
} Repeat_Check;

void print_mouse(int colour);

int main(void)
{
	int colour = 0;

	Repeat_Check repeat = YES;

	do
	{
		printf("Mouse colour (1-15)\? ");
		scanf("%d", &colour);

		if (1 <= colour && colour <= 15)
		{
			repeat = NO;
		}

		if (repeat == NO)
		{
			print_mouse(colour);
		}

	}
	while (repeat == YES);

	return 0;
}

void print_mouse(int colour)
{
	set_text_colour(colour, BLACK);

	printf("(\\___/)\n");
	printf("=(o.o)=\n");
	printf("(\")_(\")\n");

	set_text_colour(WHITE, BLACK);
}