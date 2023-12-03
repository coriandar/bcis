/*
//IMPLEMENTATION
Declare a structure variable instance named life_mod, which will store the data for the energy drink named “Life Modulus”. This drink has a serving size of 250 mL, an energy content of 529 kJ, a caffeine content of 80.5 mg, and a maximum daily intake recommendation of 500 mL. Set the members of life_mod to the appropriate values.
*/

#include <stdio.h>

struct Soft_Drink
{
	char name[16];
	int serving_size;
	int energy_content;
	float caffeine_content;
	int max_daily_intake;
};

void print_soft_drink(struct Soft_Drink life_mode);
void print_newline(int newline);

int main(void)
{
	struct Soft_Drink life_mode;

	sprintf(life_mode.name, "Life Modulus");
	life_mode.serving_size = 250;
	life_mode.energy_content = 529;
	life_mode.caffeine_content = 80.5f;
	life_mode.max_daily_intake = 500;

	print_soft_drink(life_mode);

	return 0;
}

void print_soft_drink(struct Soft_Drink life_mode)
{
	printf("A soft drink...");
	print_newline(2);
	printf("Name: %s\n", life_mode.name);
	printf("Serving size: %d mL\n", life_mode.serving_size);
	printf("Energy content: %d kJ\n", life_mode.energy_content);
	printf("Caffeine content: %f mg\n", life_mode.caffeine_content);
	printf("Maximum daily intake: %d mL\n", life_mode.max_daily_intake);
}

void print_newline(int newline)
{
	for (int repeat = 0; repeat < newline; repeat++)
	{
		printf("\n");
	}
}