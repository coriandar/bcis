#include <stdio.h>
#include "p1colour.h"

int main(void)
{
	set_text_colour(BLACK, WHITE);
	printf("Black text on a white background\n\n");
	
	set_text_colour(GREEN, YELLOW);
	printf("Green text on a yellow background\n\n");
	
	set_text_colour(BLUE, RED);
	printf("Blue text on a red background\n\n");
	
	set_text_colour(BLACK, BLACK);
	
	return 0;
}

/**
Download p1colour.h and p1colour.lib from Blackboard.

Save p1colour.h and p1colour.lib in the same folder as the .vcxproj for this example.

Add p1colour.h to the Header files for this project.

Add p1colour.lib to the Linker settings for this project.
*/