#include <stdio.h>
#include "p1colour.h"

int main(void)
{
	move_cursor_to(0, 0);
	printf("Width? ");
	move_cursor_to(7, 0);
	int width = 0;
	scanf("%d", &width);
	
	move_cursor_to(0, 0);
	printf("Height? ");
	move_cursor_to(8, 0);
	int height = 0;
	scanf("%d", &height);
	
	move_cursor_to(0, 0);
	printf("Spacing? ");
	move_cursor_to(9, 0);
	int spacing = 0;
	scanf("%d", &spacing);
	
	move_cursor_to(0, 0);
	set_text_colour(BLACK, WHITE);
	
	for (int x = 0; x < (width * spacing); x += spacing)
	{
		for (int y = 0; y < (height * spacing); y += spacing)
		{
			move_cursor_to(x, y);
			printf("*");
		}
	}
	
	return 0;
}