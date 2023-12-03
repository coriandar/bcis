#include <stdio.h>

struct Comic_Hero
{
	char name[32];
	char alter[32];
	int year;
};

void print_hero(struct Comic_Hero hero);

int main(void)
{
	struct Comic_Hero superman;
	sprintf(superman.name, "Superman");
	sprintf(superman.alter, "Clark Kent");
	superman.year = 1938;

	struct Comic_Hero batman;
	sprintf(batman.name, "Batman");
	sprintf(batman.alter, "Bruce Wayne");
	batman.year = 1939;

	struct Comic_Hero wonder_woman;
	sprintf(wonder_woman.name, "Wonder Woman");
	sprintf(wonder_woman.alter, "Diana Prince");
	wonder_woman.year = 1941;

	struct Comic_Hero supergirl;
	sprintf(supergirl.name, "Supergirl");
	sprintf(supergirl.alter, "Kara Zor-El");
	supergirl.year = 1959;

	print_hero(superman);
	print_hero(batman);
	print_hero(wonder_woman);
	print_hero(supergirl);

	return 0;
}

void print_hero(struct Comic_Hero hero)
{
	printf("Super Hero Name: ");
	printf("%s\n", hero.name);

	printf("Alter Ego: ");
	printf("%s\n", hero.alter);

	printf("Year of First Appearance: ");
	printf("%d\n", hero.year);
	printf("\n");
}