#include <stdio.h>

struct Beverage
{
	char name[16];
	int serving_size;
	int energy;
	int daily_intake;
	float caffeine;
};

void assign_member_values(struct Beverage* pointer);
void print_soft_drink(struct Beverage* pointer);

int main(void)
{
	struct Beverage life_mod;
	struct Beverage* p_life_mod = &life_mod;

	assign_member_values(p_life_mod);
	
	print_soft_drink(p_life_mod);

	return 0;
}

void print_soft_drink(struct Beverage* pointer)
{
	printf("A soft drink...\n");
	printf("\n");

	printf("Name: %s\n", pointer->name);
	printf("Serving size: %d mL\n", pointer->serving_size);
	printf("Energy content: %d kJ\n", pointer->energy);
	printf("Caffeine content: %f mg\n", pointer->caffeine);
	printf("Maximum daily intake: %d mL\n", pointer->daily_intake);
}

void assign_member_values(struct Beverage* pointer)
{
	// derefence pointer then use dot operator
	//(*pointer).serving_size = 250;
	pointer->serving_size = 250;
	pointer->energy = 529;
	pointer->caffeine = 80.5f;
	pointer->daily_intake = 500;
	sprintf(pointer->name, "Life Modulus");
}