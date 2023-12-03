/*
//LEARNT
How to get random float, between range. A little bit of casting.

https://www.youtube.com/watch?v=pnTiYdxafQE
*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

enum Monster_Type
{
	ZOMBIE,
	WEREWOLF,
	VAMPIRE,
	MUMMY,
	CHANGELING
};

struct Monster
{
	enum Monster_Type type;
	int age;
	int power;
	float speed;
	int stamina;
};

struct Monster create_monster(enum Monster_Type type);
void print_monster(struct Monster monster);

int gen_age(enum Monster_Type type);
int gen_power(enum Monster_Type type);
int gen_stamina(enum Monster_Type type);
float gen_speed(enum Monster_Type type);

void get_seed(void);
int get_random(int high, int low);
float get_random_float(float high, float low);
void print_space(int space);

int main(void)
{
	get_seed();

	// TODO: Create monsters here:
	struct Monster zombie = create_monster(ZOMBIE);
	struct Monster werewolf = create_monster(WEREWOLF);
	struct Monster vampire = create_monster(VAMPIRE);
	struct Monster mummy = create_monster(MUMMY);
	struct Monster changeling = create_monster(CHANGELING);

	print_monster(zombie);
	print_monster(werewolf);
	print_monster(vampire);
	print_monster(mummy);
	print_monster(changeling);

	return 0;
}

// TODO: Define functions here:
struct Monster create_monster(enum Monster_Type type)
{
	struct Monster create;
	
	create.type = type;
	create.age = gen_age(type);
	create.power = gen_power(type);
	create.speed = gen_speed(type);
	create.stamina = gen_stamina(type);

	return create;
}

int get_random(int high, int low)
{
	// (rand() mod (75 - 3) + 1) + 3 = 3 to 75
	return (rand() % (high - low) + 1) + low;
}


float get_random_float(float high, float low)
{
	// rand() / RAND_MAX = 0 to 1
	// range 10 to 30
	// (0 * (30-10)) + 10 = 10
	// (1 * (30-10)) + 10 = 30
	// range 0 to 30
	// (0 * (30-0)) + 0 = 0
	// (1 * (30-0)) + 0 = 30
	return (((float)rand() / (float)RAND_MAX) * (high - low)) + low;
}

int gen_age(enum Monster_Type type)
{
	int gen_age = 0;
	int high = 0;
	int low = 0;

	if (type == ZOMBIE)
	{
		gen_age = -1;
	}
	else if (type == WEREWOLF)
	{
		high = 75;
		low = 3;
		gen_age = get_random(high, low);
	}
	else if (type == VAMPIRE)
	{
		high = 2000;
		low = 20;
		gen_age = get_random(high, low);
	}
	else if (type == MUMMY)
	{
		high = 9999;
		low = 1500;
		gen_age = get_random(high, low);
	}
	else if (type == CHANGELING)
	{
		high = 25;
		low = 15;
		gen_age = get_random(high, low);
	}

	return gen_age;
}

int gen_power(enum Monster_Type type)
{
	int gen_power = 0;
	int high = 0;
	int low = 0;

	if (type == ZOMBIE)
	{
		high = 100;
		low = 0;
		gen_power = get_random(high, low);
	}
	else if (type == WEREWOLF)
	{
		high = 450;
		low = 99;
		gen_power = get_random(high, low);
	}
	else if (type == VAMPIRE)
	{
		high = 600;
		low = 1;
		gen_power = get_random(high, low);
	}
	else if (type == MUMMY)
	{
		high = 200;
		low = 0;
		gen_power = get_random(high, low);
	}
	else if (type == CHANGELING)
	{
		high = 99;
		low = 50;
		gen_power = get_random(high, low);
	}

	return gen_power;
}

int gen_stamina(enum Monster_Type type)
{
	int gen_stamina = 0;
	int high = 0;
	int low = 0;

	if (type == ZOMBIE)
	{
		high = 500;
		low = 1;
		gen_stamina = get_random(high, low);
	}
	else if (type == WEREWOLF)
	{
		high = 7500;
		low = 500;
		gen_stamina = get_random(high, low);
	}
	else if (type == VAMPIRE)
	{
		high = 10000;
		low = 0;
		gen_stamina = get_random(high, low);
	}
	else if (type == MUMMY)
	{
		high = 1000;
		low = 0;
		gen_stamina = get_random(high, low);
	}
	else if (type == CHANGELING)
	{
		high = 5000;
		low = 0;
		gen_stamina = get_random(high, low);
	}

	return gen_stamina;
}

float gen_speed(enum Monster_Type type)
{
	float gen_speed = 0.0f;
	float high = 0.0f;
	float low = 0.0f;

	if (type == ZOMBIE)
	{
		high = 0.5f;
		low = 0.0f;
		gen_speed = get_random_float(high, low);
	}
	else if (type == WEREWOLF)
	{
		high = 40.0f;
		low = 20.0f;
		gen_speed = get_random_float(high, low);
	}
	else if (type == VAMPIRE)
	{
		high = 50.0f;
		low = 10.0f;
		gen_speed = get_random_float(high, low);
	}
	else if (type == MUMMY)
	{
		high = 5.0f;
		low = 0.0f;
		gen_speed = get_random_float(high, low);
	}
	else if (type == CHANGELING)
	{
		high = 25.0f;
		low = 5.0f;
		gen_speed = get_random_float(high, low);
	}

	return gen_speed;
}

void print_monster(struct Monster monster)
{
	printf("Monster Type: ");

	if (monster.type == ZOMBIE)
	{
		printf("Zombie\n");
	}
	else if (monster.type == WEREWOLF)
	{
		printf("Werewolf\n");
	}
	else if (monster.type == VAMPIRE)
	{
		printf("Vampire\n");
	}
	else if (monster.type == MUMMY)
	{
		printf("Mummy\n");
	}
	else if (monster.type == CHANGELING)
	{
		printf("Changeling\n");
	}

	print_space(9);
	printf("Age: ");
	printf("%d years\n", monster.age);

	print_space(7);
	printf("Power: ");
	printf("%d\n", monster.power);

	print_space(7);
	printf("Speed: ");
	printf("%.2f\n", monster.speed);

	print_space(5);
	printf("Stamina: ");
	printf("%d\n", monster.stamina);

	printf("\n");
}

void get_seed(void)
{
	srand(time(0));
}

void print_space(int space)
{
	for (int repeat = 0; repeat < space; repeat++)
	{
		printf(" ");
	}
}