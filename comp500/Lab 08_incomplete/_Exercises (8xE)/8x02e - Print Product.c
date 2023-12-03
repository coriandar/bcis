#include <stdio.h>

struct Product
{
	char name[32];
	char brand[32];
	float price;
	int stock;
};

void print_space(int space);
void print_product(struct Product consoles);

int main(void)
{
	struct Product consoles[3];

	sprintf(consoles[0].name, "Xbox One S");
	sprintf(consoles[0].brand, "Microsoft");
	consoles[0].price = 395.50f;
	consoles[0].stock = 35;

	sprintf(consoles[1].name, "Playstation 4 Pro");
	sprintf(consoles[1].brand, "Sony");
	consoles[1].price = 538.00f;
	consoles[1].stock = 71;

	sprintf(consoles[2].name, "Switch");
	sprintf(consoles[2].brand, "Nintendo");
	consoles[2].price = 529.95f;
	consoles[2].stock = 8;
	
	for (int item = 0; item < 3; item++)
	{
		print_product(consoles[item]);
	}

	return 0;
}

void print_product(struct Product consoles)
{
	printf("Item name:");
	print_space(1);
	printf("%s\n", consoles.name);

	printf("Brand:");
	print_space(5);
	printf("%s\n", consoles.brand);

	printf("Price:");
	print_space(5);
	printf("$%.2f\n", consoles.price);

	printf("Quantity:");
	print_space(2);
	printf("%d\n", consoles.stock);
	printf("\n");
}	

void print_space(int space)
{
	for (int repeat = 0; repeat < space; repeat++)
	{
		printf(" ");
	}
}