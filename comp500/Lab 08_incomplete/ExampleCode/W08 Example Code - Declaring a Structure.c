#include <stdio.h>

struct Car
{
	char manufacturer[20];
	char model[20];
	int year;
	float price;
};

int main(void)
{
	struct Car nissan;
	nissan.year = 2008;
	nissan.price = 38070.0;
	sprintf(nissan.manufacturer, "Nissan");
	sprintf(nissan.model, "Fairlady Z Z33");
	struct Car mazda;
	mazda.year = 2012;
	mazda.price = 33000.0;
	sprintf(mazda.manufacturer, "Mazda");
	sprintf(mazda.model, "RX-8");
	printf("Manufacturer: %s\n", nissan.manufacturer);
	printf("Model: %s\n", nissan.model);
	printf("Year: %d\n", nissan.year);
	printf("Price: %0.2f\n", nissan.price);
	printf("\n");
	printf("Manufacturer: %s\n", mazda.manufacturer);
	printf("Model: %s\n", mazda.model);
	printf("Year: %d\n", mazda.year);
	printf("Price: %0.2f\n", mazda.price);
	printf("\n");
	return 0;
}