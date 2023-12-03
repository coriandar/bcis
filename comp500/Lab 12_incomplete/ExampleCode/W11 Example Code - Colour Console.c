#include <Windows.h>
#include <stdio.h>

void move_cursor_to(int column, int row)
{
	HANDLE console_window = GetStdHandle(STD_OUTPUT_HANDLE);
	
	COORD position;
	position.X = column;
	position.Y = row;
	
	SetConsoleCursorPosition(console_window, position);
}

void set_text_colour(int foreground, int background)
{
	HANDLE console_window = GetStdHandle(STD_OUTPUT_HANDLE);
	
	int colour = ((background & 0x0F) << 4) | (foreground & 0x0F);
	
	SetConsoleTextAttribute(console_window, colour);
}

int main(void)
{
	move_cursor_to(10, 5);
	set_text_colour(4, 15);	// RED, WHITE
	
	printf("Colour printing!\n");
	
	return 0;
}