#include <stdio.h>

int main(void)
{
	char name[21];
	int gold = 0;

	printf("Welcome to Pascal's Adventure Game!\n");
	printf("-----------------------------------\n");
	printf("\n");

	printf("What name do you wish to use?\n");
	printf("> ");
	scanf("%20s", &name);

	char classChar = -1;

	printf("\nWelcome %s, what class ", name);
	printf("do you wish to be?\n\n");

	printf("1) Knight\n");
	printf("2) Rogue\n");
	printf("3) Mage\n");
	printf("> ");
	scanf(" %c", &classChar);

	int playerClass = classChar - '0';

	while (playerClass < 1 || playerClass > 3)
	{
		printf("\nPLEASE ENTER A NUMBER FROM ");
		printf("1 to 3 FOR YOUR CLASS!!!\n\n");
		printf("1) Knight\n");
		printf("2) Rogue\n");
		printf("3) Mage\n");
		printf("> ");
		scanf(" %c", &classChar);
		playerClass = classChar - '0';
	}

	gold += 100;

	if (playerClass == 1)
	{
		printf("\nAs a Knight in shining armour, ");
		printf("%s steps out through the ", name);
		printf("castle gates to seek glory on the ");
		printf("battlefield, bringing along ");
		printf("%d gold earned in service of ", gold);
		printf("the castle.");
	}
	else if (playerClass == 2)
	{
		printf("\nAs a Rogue in leather and rags, ");
		printf("%s sneaks out the city sewers ", name);
		printf("to seek riches in the countryside. ");
		printf("On your way out you bring ");
		printf("%d gold that you stole from ", gold);
		printf("some nobles.");
	}
	else
	{
		printf("\nAs a Mage in mysterious robes, ");
		printf("%s passed through the castle ", name);
		printf("walls to find their purpose in the ");
		printf("world, bringing %d gold ", gold);
		printf("conjured from the air.");
	}	printf("\nOnce out of the castle, %s ", name);
	printf("decides to head to the first town, but ");
	printf("is met with a band of mercenaries, what ");
	printf("shall %s do? \n\n", name);

	char attackChar = -1;
	printf("1) Try to intimidate them to let ");
	printf("%s through\n", name);
	printf("2) Try to bribe them to let ");
	printf("%s through\n", name);
	printf("3) Try to persuade them to let ");
	printf("%s through\n", name);
	printf(">");
	scanf(" %c", &attackChar);

	int attackMove = attackChar - '0';

	while (attackMove < 1 || attackMove > 3)
	{
		printf("\nPLEASE ENTER A NUMBER FROM 1-3 ");
		printf("FOR YOUR ACTION\n");
		printf("1) Try to intimidate them to let ");
		printf("%s through\n", name);
		printf("2) Try to bribe them to let ");
		printf("%s through\n", name);
		printf("3) Try to persuade them to let ");
		printf("%s through\n", name);
		printf(">");
		scanf(" %c", &attackChar);

		attackMove = attackChar - '0';
	}

	if (attackMove == 1)
	{
		printf("\n%s tries to intimidate the ", name);
		printf("mercenaries...");

		if (playerClass == 1)
		{
			printf("\n	By drawing their sword ");
			printf("and shield towards the group");
			printf("\n	The mercenaries see ");
			printf("%s\'s heavy armour and ", name);
			printf("weapons, and decide to flee, ");
			printf("you have won!");
			printf("\n	As they leave you see ");
			printf("they dropped some items, you ");
			printf("gain 50 gold.");

			gold += 50;
		}
		else if (playerClass == 2)
		{
			printf("\n	By drawing their rusty ");
			printf("dagger and looking menacing");
			printf("\n	The mercenaries see ");
			printf("%s\'s poor clothes and ", name);
			printf("rusty weapon, and are not ");
			printf("frightened, since they ");
			printf("outnumber %s!", name);
			printf("\n	The mercenaries leave ");
			printf("%s bruised on the road, ", name);
			printf("and take 50 gold.");

			gold -= 50;
		}
		else
		{
			printf("\n	By summoning a ball of ");
			printf("light to frighten them.");
			printf("\n	The mercenaries see ");
			printf("%s\'s magic, whisper among ", name);
			printf("themselves and back away slowly.");
			printf("\n	Both parties leave in the ");
			printf("same condition, nothing is gained.");
		}
	}
	else if (attackMove == 2)
	{
		printf("\n%s tries to bribe the ", name);
		printf("mercenaries...");

		if (playerClass == 1)
		{
			printf("\n	By offering them a chance ");
			printf("to take 10 gold or be cut down.");
			printf("\n	The mercenaries hear ");
			printf("%s\'s offer, and laugh, ", name);
			printf("they throw dust in %s\'s ", name);
			printf("face and steal their gold while ");
			printf("they are not looking.");
			printf("\n	The mercenaries run away ");
			printf("with 50 gold.");

			gold -= 50;
		}
		else if (playerClass == 2)
		{
			printf("\n	By offering them 50 gold ");
			printf("to get through.");
			printf("\n	The mercenaries hear ");
			printf("%s\'s offer, and all agree ", name);
			printf("it is a good deal.");
			printf("\n	As the mercenaries walk ");
			printf("away, %s snatches their ", name);
			printf("gold back, nothing lost.");
		}
		else
		{
			printf("\n	By offering to turn one of ");
			printf("their weapons to gold.");
			printf("\n	The mercenaries accept ");
			printf("%s\'s offer and eagerly ", name);
			printf("watch one of their daggers turn ");
			printf("to gold, but the illusion does ");
			printf("not hold.");
			printf("\n	The mercenaries see through ");
			printf("%s\'s illusion, and attack, ", name);
			printf("stealing 50 gold in the process.");

			gold -= 50;
		}
	}
	else
	{
		printf("\n%s tries to persuade the ", name);
		printf("mercenaries...");

		if (playerClass == 1)
		{
			printf("\n	By explaining how many ");
			printf("attacks you repelled while ");
			printf("defending the castle.");
			printf("\n	The mercenaries listen to ");
			printf("%s and decide to leave ", name);
			printf("them alone.");
			printf("\n	The mercenaries leave, ");
			printf("nothing lost or gained.");
		}
		else if (playerClass == 2)
		{
			printf("\n	By trying to convince them ");
			printf("that if they gave gold, %s ", name);
			printf("would tell them of the next ");
			printf("merchant escort from the castle.");
			printf("\n	The mercenaries listen to ");
			printf("%s\'s offer, and all agree it is ", name);
			printf("a good deal.");
			printf("\n	They give 50 gold to ");
			printf("%s for the information", name);

			gold += 50;
		}
		else
		{
			printf("\n	By casting a spell on them.");
			printf("\n	The mercenaries will do ");
			printf("anything %s asks of them ", name);
			printf("now.");
			printf("\n	%s makes them give 50 ", name);
			printf("gold, and be on their way.");

			gold += 50;
		}
	}

	printf("\n\n%s arrives at the first town, ", name);
	printf("with %d gold to their name.\n\n", gold);

	printf("To be continued...\n\n");

	return 0;
}