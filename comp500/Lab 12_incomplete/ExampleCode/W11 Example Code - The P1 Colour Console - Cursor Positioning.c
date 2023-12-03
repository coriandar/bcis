#include <stdio.h>
#include <string.h>
#include "p1colour.h"

int main(void)
{
	char line1[] = "Left Aligned - Black text on a white background";
	char line2[] = "Center Aligned - Green text on a yellow background";
	char line3[] = "Right Aligned - Blue text on a red background";
	
	int line_width = 80;
	
	move_cursor_to(0, 5);
	set_text_colour(BLACK, WHITE);
	printf("%s", line1);
	
	int line2_length = strlen(line2);
	int line2_x = (line_width / 2) - (line2_length / 2);
	
	move_cursor_to(line2_x, 7);
	set_text_colour(GREEN, YELLOW);
	printf("%s", line2);
	
	int line3_lenth = strlen(line3);
	int line3_x = line_width - line3_lenth;
	
	move_cursor_to(line3_x, 9);
	set_text_colour(BLUE, RED);
	printf("%s", line3);
	
	set_text_colour(WHITE, BLACK);
	move_cursor_to(0, 1);
	printf("---------1---------2---------3---------4");
	printf("---------5---------6---------7---------8");
	move_cursor_to(0, 0);
	printf("123456789 123456789 123456789 123456789 ");
	printf("123456789 123456789 123456789 123456789 ");
	
	set_text_colour(BLACK, BLACK);
	move_cursor_to(0, 15);
	
	return 0;
}

/**
Download p1colour.h and p1colour.lib from Blackboard.

Save p1colour.h and p1colour.lib in the same folder as the .vcxproj for this example.

Add p1colour.h to the Header files for this project.

Add p1colour.lib to the Linker settings for this project.
*/