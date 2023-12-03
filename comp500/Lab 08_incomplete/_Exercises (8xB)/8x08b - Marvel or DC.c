/*
// DESIGN
	START main
		FOR EACH Super_Hero
			CALL print_hero_name WITH current hero
			CALL print_marvel_or_dc WITH current hero
			PRINT newline
		ENDFOR
	END
*/

#include <stdio.h>

enum Super_hero
{
	AQUAMAN,
	BATMAN,
	CYBORG,
	SUPERMAN,
	THE_FLASH,
	WONDER_WOMAN,
	BLACK_WIDOW,
	CAPTAIN_AMERICA,
	HAWKEYE,
	IRON_MAN,
	SPIDERMAN,
	THE_HULK
};

void print_hero_name(char* hero_name);
void print_marvel_or_dc(enum Super_hero name);

int main(void)
{
	char* hero_name[] =
	{
		"Aquaman",
		"Batman",
		"Cyborg",
		"Superman",
		"The Flash",
		"Wonder Woman",
		"Black Widow",
		"Captain America",
		"Hawkeye",
		"Iron Man",
		"Spiderman",
		"The Hulk",
	};

	for (int name = AQUAMAN; name <= THE_HULK; name++)
	{
		print_hero_name(hero_name[name]);
		print_marvel_or_dc(name);
		printf("\n");
	}
	

	return 0;
}

void print_hero_name(char* hero_name)
{
	printf("%s\n", hero_name);
}

void print_marvel_or_dc(enum Super_hero name)
{
	if (0 <= name && name <= 5)
	{
		printf("DC\n");
	}
	else
	{
		printf("Marvel\n");
	}
}