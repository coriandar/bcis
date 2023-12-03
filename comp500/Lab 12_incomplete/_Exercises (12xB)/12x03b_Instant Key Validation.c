#include <stdio.h>
#include <conio.h>

int main(void)
{
	int poll_for_input = 1;

	while (poll_for_input)
	{
		if (_kbhit())
		{
			int key_pressed = _getch();

			if ('a' <= key_pressed && key_pressed <= 'z')
			{
				printf("%c ", key_pressed);
				printf("is a ");

				switch (key_pressed)
				{
				case 'a':
				case 'e':
				case 'i':
				case 'o':
				case 'u':
					printf("vowel\n");
					break;
				default:
					printf("consonant\n");
				}
			}
			else
			{
				printf("%c ", key_pressed);
				printf("is not a letter of the alphabet\n");
			}

		}
	}

	return 0;
}