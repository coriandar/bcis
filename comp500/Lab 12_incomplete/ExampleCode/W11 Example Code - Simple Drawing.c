#include <conio.h>
#include <stdio.h>
#include "p1colour.h"

enum Arrow_Key_Codes
{
	LEFT_ARROW = 75,
	RIGHT_ARROW = 77,
	UP_ARROW = 72,
	DOWN_ARROW = 80
};

void print_cursor(int x, int y)
{
	move_cursor_to(x, y);
	printf("X");
}

int main(void)
{
	// Set the cursor to the middle of the console by default
	int cursorX = 80 / 2;
	int cursorY = 24 / 2;
	
	print_cursor(cursorX, cursorY);
	
	enum P1Colours current_colour = BLUE;
	
	int poll_for_input = 1;
	
	while (poll_for_input)
	{
		if (_kbhit())
		{
			int key_pressed = _getch();
			
			if (224 == key_pressed)
			{
				int arrow_key = _getch();
				
				switch (arrow_key)
				{
					case UP_ARROW:
						--cursorY;
						break;
					case DOWN_ARROW:
						++cursorY;
						break;
					case LEFT_ARROW:
						--cursorX;
						break;
					case RIGHT_ARROW:
						++cursorX;
						break;
				}

				print_cursor(cursorX, cursorY);
			}
			else if (' ' == key_pressed)
			{ 	++current_colour;
		
				if (current_colour > WHITE)
				{
					current_colour = BLUE;
				}

				set_text_colour(current_colour, BLACK);
				print_cursor(cursorX, cursorY);
			}
			else if ('q' == key_pressed)
			{
				poll_for_input = 0;
			}
		}
	}

	return 0;
}

/**
Download p1colour.h and p1colour.lib from Blackboard.

Save p1colour.h and p1colour.lib in the same folder as the .vcxproj for this example.

Add p1colour.h to the Header files for this project.

Add p1colour.lib to the Linker settings for this project.
*/