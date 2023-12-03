#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	srand(time(0));
	
	//mod 6 = 0 to 5. +8 = 8 to 13.
	int str = (rand() % 6) + 8;
	int dex = (rand() % 6) + 8;
	int cont = (rand() % 6) + 8;
	int inte = (rand() % 6) + 8;
	int wis = (rand() % 6) + 8;
	int cha = (rand() % 6) + 8;

	printf("Random NPC Ability Generator\n");
	printf("----------------------------\n\n");

	printf("Strength: %d\n", str);
	printf("Dexterity: %d\n", dex);
	printf("Constitution: %d\n", cont);
	printf("Intelligence: %d\n", inte);
	printf("Wisdom: %d\n", wis);
	printf("Charisma: %d\n", cha);

	return 0;
}