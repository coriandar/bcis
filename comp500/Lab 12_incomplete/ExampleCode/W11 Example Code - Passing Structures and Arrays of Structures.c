#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>
#include "p1colour.h"

struct Star
{
	int x;
	int y;
	enum P1Colours colour;
};

struct Star create_star(void)
{
	struct Star new_star;
	
	new_star.x = rand() % 80;
	new_star.y = rand() % 24;
	new_star.colour = (rand() % WHITE) + 1;
	
	return new_star;
}

void draw_sky(struct Star sky[], int num_stars)
{
	for (int k = 0; k < num_stars; ++k)
	{
		move_cursor_to(sky[k].x, sky[k].y);
		set_text_colour(sky[k].colour, BLACK);
		printf("*");
	}
}

void clear_star(struct Star to_clear)
{
	move_cursor_to(to_clear.x, to_clear.y);
	set_text_colour(BLACK, BLACK);
	printf(" ");
}

int main(void)
{
	srand((int) time(0));
	struct Star night_sky[20];
	int twinkle;

	for (int k = 0; k < 20; ++k)
	{
		night_sky[k] = create_star();
	}

	int loop_forever = 1;
	
	while (loop_forever)
	{
		draw_sky(night_sky, 20);
		twinkle = rand() % 20;
		clear_star(night_sky[twinkle]);
		move_cursor_to(0, 0);
		Sleep(1000);
	}

	return 0;
}

/**
Download the p1colour.zip from Blackboard and extract the p1colour.h and p1colour.lib files.

Save p1colour.h and p1colour.lib in the same folder as the .vcxproj for this example.

Add p1colour.h to the Header files for this project.

Add p1colour.lib to the Linker settings for this project.
*/