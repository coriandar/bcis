#include <stdio.h>

struct Super_Hero
{
	char name[15];
	int year;
	float tomato;
};

void print_super_hero(struct Super_Hero hero);

int main(void)
{
	struct Super_Hero hero;

	sprintf(hero.name, "Batman");
	hero.year = 1939;
	hero.tomato = 0.27f;

	print_super_hero(hero);

	return 0;
}

void print_super_hero(struct Super_Hero hero)
{
	printf("Super hero name: ");
	printf("%s\n", hero.name);
	printf("Years created: ");
	printf("%d\n", hero.year);
	printf("Latest Tomatometer: ");
	printf("%.2f\n", hero.tomato);
}