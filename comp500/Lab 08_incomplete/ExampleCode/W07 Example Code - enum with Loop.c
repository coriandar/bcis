#include <stdio.h>

int main(void)
{
	enum Colour
	{
		RED,
		GREEN,
		BLUE,
		MAX_COLOUR
	};
	
	char keypress = 0;
	enum Colour current = RED;
	
	do
	{
		if (current >= MAX_COLOUR)
		{
			current = RED;
		}
		
		switch (current)
		{
			case RED:
			{
				printf("SELECTED: Red");
			}
			break;
			case GREEN:
			{
				printf("SELECTED: Green");
			}
			break;
			case BLUE:
			{
				printf("SELECTED: Blue");
			}
			break;
			default:
			{
				printf("SELECTED: Error!");
			}
			break;
		}
		
		printf("\n\nPress Enter to select the next colour");
		printf(" (0 to quit)\n");
		
		int next = current + 1;
		current = next;
		
		scanf("%c", &keypress);
	}
	while ('0' != keypress);
	
	return 0;
}