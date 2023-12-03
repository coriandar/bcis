/*
//LEARNT
	ctrl + r = rename variable. Similar to find & replace.

	Clear the buffer for more than 1 char input.
	for (char buffer = '\0'; buffer != '\n'; scanf("%c", &buffer));

//REVIEW
	Still have not found how to reject ne, ns, nw etc.
*/

#include <stdio.h>

int main(void)
{
	int position_y = 0;
	int position_x = 0;
	char move = '\0';

	printf("The player starts at (%d,%d)...", position_x, position_y);
	printf("\n");

	while (move != 'q' && move != 'Q')
	{
		printf("Player at (%d,%d) - move N,S,E,W (q to quit)\? ", position_x, position_y);
		scanf("%c", &move);

		//clear buffer, remove double input.
		for (char buffer = '\0'; buffer != '\n'; scanf("%c", &buffer));

		switch (move)
		{
		case 'N': //Fall through...
		case 'n': //Fall through...
			position_y++;
			break;
		case 'S': //Fall through...
		case 's': //Fall through...
			position_y--;
			break;
		case 'E': //Fall through...
		case 'e': //Fall through...
			position_x++;
			break;
		case 'W': //Fall through...
		case 'w': //Fall through...
			position_x--;
			break;
		case 'Q': //Fall through...
		case 'q': //Fall through...
			printf("The player ends at (%d,%d)", position_x, position_y);
			printf("\n");
			break;
		default:
			printf("Invalid input.");
			printf("\n");
			break;
		}
	}

	return 0;
}