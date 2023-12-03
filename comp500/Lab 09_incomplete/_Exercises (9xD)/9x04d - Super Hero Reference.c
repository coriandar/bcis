#include <stdio.h>

struct Hero
{
	char name[32];
	char alter[32];
	int year;
};

void print_hero(struct Hero* p_hero);

int main(void)
{
	struct Hero superman;
	struct Hero* p_superman = &superman;
	sprintf(p_superman->name, "Superman");
	sprintf(p_superman->alter, "Clark Kent");
	p_superman->year = 1938;

	struct Hero batman;
	struct Hero* p_batman = &batman;
	sprintf(p_batman->name, "Batman");
	sprintf(p_batman->alter, "Bruce Wayne");
	p_batman->year = 1939;

	struct Hero wonder_woman;
	struct Hero* p_wonder_woman = &wonder_woman;
	sprintf(p_wonder_woman->name, "Wonder Woman");
	sprintf(p_wonder_woman->alter, "Diana Prince");
	p_wonder_woman->year = 1941;

	struct Hero supergirl;
	struct Hero* p_supergirl = &supergirl;
	sprintf(p_supergirl->name, "Supergirl");
	sprintf(p_supergirl->alter, "Kara Zor-El");
	p_supergirl->year = 1959;

	print_hero(p_superman);
	print_hero(p_batman);
	print_hero(p_wonder_woman);
	print_hero(p_supergirl);

	return 0;
}

void print_hero(struct Hero* p_hero)
{
	printf("Super Hero Name: %s\n", p_hero->name);
	printf("Alter Ego: %s\n", p_hero->alter);
	printf("Year of First Apperance: %d\n", p_hero->year);
	printf("\n");
}