/*
// ERROR
	Reads in arrow keys quickly, polling for character keys is very slow.
	12x03b works fine however.
*/

#include <stdio.h>
#include <conio.h>

enum Arrow_Key_Codes
{
	LEFT_ARROW = 75,
	RIGHT_ARROW = 77,
	UP_ARROW = 72,
	DOWN_ARROW = 80
};

int main(void)
{
	int poll_for_input = 1;

	while (poll_for_input)
	{
		if (_kbhit())
		{
			int key_pressed = _getch();

			if (key_pressed == 224)
			{
				int arrow_key = _getch();

				switch (arrow_key)
				{
				case UP_ARROW:
					printf("Key: Up Arrow\n");
					break;
				case DOWN_ARROW:
					printf("Key: Down Arrow\n");
					break;
				case LEFT_ARROW:
					printf("Left Arrow\n");
					break;
				case RIGHT_ARROW:
					printf("Key: Right Arrow\n");
					break;
				}
			}
			else
			{
				printf("Key: %c", _getch());
				printf(" (ASCII: %d)", _getch());
				printf("\n");
			}
		}
	}
	return 0;
}