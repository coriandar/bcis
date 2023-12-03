#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <crtdbg.h>

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
	int stamina;
	float speed;
};

struct Monster* create_monster(enum Monster_Type type);
void print_monster(struct Monster* p_monster);
int get_random(int high, int low);
float get_random_float(float high, float low);
int gen_age(enum Monster_Type type);
int gen_power(enum Monster_Type type);
int gen_stamina(enum Monster_Type type);
float gen_speed(enum Monster_Type type);
void print_space(int space);

int main(void)
{
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

	srand(time(0));

	// TODO: Create monsters here:
	struct Monster* p_make_zombie = create_monster(ZOMBIE);
	print_monster(p_make_zombie);
	free(p_make_zombie);
	p_make_zombie = 0;

	struct Monster* p_make_werewolf = create_monster(WEREWOLF);
	print_monster(p_make_werewolf);
	free(p_make_werewolf);
	p_make_werewolf = 0;

	struct Monster* p_make_vampire = create_monster(VAMPIRE);
	print_monster(p_make_vampire);
	free(p_make_vampire);
	p_make_vampire = 0;

	struct Monster* p_make_mummy = create_monster(MUMMY);
	print_monster(p_make_mummy);
	free(p_make_mummy);
	p_make_mummy = 0;

	struct Monster* p_make_changeling = create_monster(CHANGELING);
	print_monster(p_make_changeling);
	free(p_make_changeling);
	p_make_changeling = 0;

	return 0;
}

// TODO: Define functions here:
struct Monster* create_monster(enum Monster_Type type)
{
	struct Monster* p_create = 0;
	p_create = malloc(sizeof(struct Monster));

	p_create->type = type;
	p_create->age = gen_age(type);
	p_create->power = gen_power(type);
	p_create->speed = gen_speed(type);
	p_create->stamina = gen_stamina(type);

	return p_create;
}

void print_monster(struct Monster* p_monster)
{
	printf("Monster Type: ");

	if (p_monster->type == ZOMBIE)
	{
		printf("Zombie\n");
	}
	else if (p_monster->type == WEREWOLF)
	{
		printf("Werewolf\n");
	}
	else if (p_monster->type == VAMPIRE)
	{
		printf("Vampire\n");
	}
	else if (p_monster->type == MUMMY)
	{
		printf("Mummy\n");
	}
	else if (p_monster->type == CHANGELING)
	{
		printf("Changeling\n");
	}

	print_space(9);
	printf("Age: ");
	printf("%d years\n", p_monster->age);

	print_space(7);
	printf("Power: ");
	printf("%d\n", p_monster->power);

	print_space(7);
	printf("Speed: ");
	printf("%.2f\n", p_monster->speed);

	print_space(5);
	printf("Stamina: ");
	printf("%d\n", p_monster->stamina);

	printf("\n");
}

int get_random(int high, int low)
{
	return (rand() % (high - low) + 1) + low;
}

float get_random_float(float high, float low)
{
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

void print_space(int space)
{
	for (int repeat = 0; repeat < space; repeat++)
	{
		printf(" ");
	}
}