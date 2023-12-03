#include <stdio.h>
#include <conio.h>
#include "p1colour.h"

void clear_screen(void);
void draw_box_at(int w, int h, int x, int y);
void draw_row(char edge, char middle, int width);
void print_box_details(int x, int y, int w, int h);
void print_help_text(void);

int main(void)
{
	// Default box size and location:
	int box_x = 2;
	int box_y = 4;
	int box_w = 7;
	int box_h = 5;
	
	// Draw the UI:
	clear_screen();
	print_help_text();
	print_box_details(box_x, box_y, box_w, box_h);
	draw_box_at(box_w, box_h, box_x, box_y);
	
	int looping = 1;
	
	// Check for user input:
	while (looping)
	{
		int key_pressed = _kbhit();
		
		if (key_pressed)
		{
			int key = _getch();
			if (key == 'w')
			{ 	
				--box_y;
			}
			else if (key == 's')
			{ 	
				++box_y;
			}
			else if (key == 'a')
			{
				--box_x;
			}
			else if (key == 'd')
			{
				++box_x;
			}
			else if (key == 'i')
			{
				--box_h;
			}
			else if (key == 'k')
			{
				++box_h;
			}
			else if (key == 'j')
			{
				--box_w;
			}
			else if (key == 'l')
			{
				++box_w;
			}
			else if (key == 'q')
			{
				looping = 0;
			}

			// Draw the UI, based upon new user input:
			clear_screen();
			print_help_text();
			print_box_details(box_x, box_y, box_w, box_h);
			draw_box_at(box_w, box_h, box_x, box_y);
		}
	}

	// Clear the screen before quitting:
	clear_screen();
	
	return 0;
}

void draw_row(char edge, char middle, int width)
{
	printf("%c", edge);
	for (int k = 0; k < width - 2; ++k)
	{
		printf("%c", middle);
	}

	printf("%c", edge);
}

void draw_box_at(int w, int h, int x, int y)
{
	move_cursor_to(x, y);
	
	draw_row('+', '-', w);
	
	for (int i = 0; i < h - 2; ++i)
	{
		move_cursor_to(x, y + i + 1);
		draw_row('|', ' ', w);
	}

	move_cursor_to(x, y + h - 1);
	draw_row('+', '-', w);
}

void clear_screen(void)
{
	const int console_width = 120 - 1;
	const int console_height = 30 - 1;
	
	move_cursor_to(0, 0);
	
	for (int y = 0; y < console_height; ++y)
	{
		for (int x = 0; x < console_width; ++x)
		{
			printf(" ");
		}

		printf("\n");
	}
}

void print_box_details(int x, int y, int w, int h)
{
	const int col = 70;
	int row = 20;
	
	move_cursor_to(col, row++);
	printf("Box (x, y) is: (%d, %d)\n", x, y);
	
	move_cursor_to(col, row++);
	printf("Box width: %d\n", w);
	
	move_cursor_to(col, row++);
	printf("Box height: %d\n", h);
}

void print_help_text(void)
{
	move_cursor_to(70, 0);
	printf("Move box: w,a,s,d");
	move_cursor_to(70, 1);
	printf("Resize box: i,j,k,l");
	move_cursor_to(70, 2);
	printf("Quit: q");
}

/**
Download p1colour.h and p1colour.lib from Blackboard.

Save p1colour.h and p1colour.lib in the same folder as the .vcxproj for this example.

Add p1colour.h to the Header files for this project.

Add p1colour.lib to the Linker settings for this project.
*/

















