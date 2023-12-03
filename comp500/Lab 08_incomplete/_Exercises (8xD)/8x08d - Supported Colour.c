/*
// DESIGN
	START main
		FOR EACH Colour
			CALL print_colour_as_text WITH current colour
			CALL detect_RGB WITH current colour
			CALL detect_CMYK WITH current colour
			PRINT newline
		ENDFOR
	END
*/

#include <stdio.h>

enum Colour
{
	RED,
	GREEN,
	BLUE,
	CYAN,
	MAGENTA,
	YELLOW,
	BLACK
};

void print_colour_as_text(enum Colour colour);
void detect_CMYK(enum Colour colour);
void detect_RGB(enum Colour colour);

int main(void)
{
	for (int colour = RED; colour < BLACK; colour++)
	{
		print_colour_as_text(colour);
		detect_RGB(colour);
		detect_CMYK(colour);
		printf("\n");
	}

	return 0;
}

void detect_RGB(enum Colour colour)
{
	if (colour == RED || colour == GREEN || colour == BLUE)
	{
		printf("RGB: Supported\n");
	}
	else
	{
		printf("RGB: Not Supported\n");
	}
}

void detect_CMYK(enum Colour colour)
{
	if (colour == CYAN || colour == MAGENTA || colour == YELLOW || colour == BLACK)
	{
		printf("CMYK: Supported\n");
	}
	else
	{
		printf("CMYK: Not Supported\n");
	}
}

void print_colour_as_text(enum Colour colour)
{
	switch (colour)
	{
	case RED:
		printf("Red\n");
		break;
	case GREEN:
		printf("Green\n");
		break;
	case BLUE:
		printf("Blue\n");
		break;
	case CYAN:
		printf("Cyan\n");
		break;
	case MAGENTA:
		printf("Magenta\n");
		break;
	case YELLOW:
		printf("Yellow\n");
		break;
	case BLACK:
		printf("Black\n");
		break;
	}
}