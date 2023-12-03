#include <stdio.h>

enum Animal
{
	ANTELOPE,
	BAT,
	CAT,
	DOG,
	DOLPHIN,
	DUCK,
	HORSE,
	MOUSE,
	OWL,
	SNAKE
};

void make_animal_noise(enum Animal type);

int main(void)
{
	enum Animal type;

	for (int animal = 0; animal < 10; animal++)
	{
		type = animal;
		make_animal_noise(type);
	}

	return 0;
}

void make_animal_noise(enum Animal type)
{
	if (type == ANTELOPE)
	{
		printf("Antelope noise: ");
		printf("Snort");
	}
	else if (type == BAT)
	{
		printf("Bat noise: ");
		printf("Screech");
	}
	else if (type == CAT)
	{
		printf("Cat noise: ");
		printf("Meow");
	}
	else if (type == DOG)
	{
		printf("Dog noise: ");
		printf("Woof");
	}
	else if (type == DOLPHIN)
	{
		printf("Dolphon noise: ");
		printf("Click");
	}
	else if (type == DUCK)
	{
		printf("Duck noise: ");
		printf("Quack");
	}
	else if (type == HORSE)
	{
		printf("Horse noise: ");
		printf("Neigh");
	}
	else if (type == MOUSE)
	{
		printf("Mouse noise: ");
		printf("Squeak");
	}
	else if (type == OWL)
	{
		printf("Owl noise: ");
		printf("Hoot");
	}
	else if (type == SNAKE)
	{
		printf("Snake noise: ");
		printf("Hiss");
	}

	printf("\n");
}