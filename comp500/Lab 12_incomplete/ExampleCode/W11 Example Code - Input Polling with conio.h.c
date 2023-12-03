#include <conio.h>
#include <stdio.h>

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
			if (224 == key_pressed)
			{
				int arrow_key = _getch();
				switch (arrow_key)
				{
					case UP_ARROW:
						printf("Up Arrow\n");
						break;
					case DOWN_ARROW:
						printf("Down Arrow\n");
						break;
					case LEFT_ARROW:
						printf("Left Arrow\n");
						break;
					case RIGHT_ARROW:
						printf("Right Arrow\n");
						break;
				}
			}
			else if ('q' == key_pressed)
			{
				poll_for_input = 0;
			}
		}
	}

	return 0;
}