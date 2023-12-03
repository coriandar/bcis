#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

struct Car
{
	char manufacturer[20];
	char model[20];
	int year;
	float price;
};

void print_car(struct Car* p_car)
{
	assert(p_car);
	printf("Manufacturer: %s\n", p_car->manufacturer);
	printf("Model: %s\n", p_car->model);
	printf("Year: %d\n", p_car->year);
	printf("Price: %0.2f\n", p_car->price);
	printf("\n");
}

int main(void)
{
	struct Car* p_nissan = 0;
	struct Car* p_mazda = 0;
	
	p_nissan = malloc(sizeof(struct Car));
	assert(p_nissan);
	
	p_nissan->year = 2008;
	p_nissan->price = 38070.0;
	sprintf(p_nissan->manufacturer, "Nissan");
	sprintf(p_nissan->model, "Fairlady Z Z33");
	
	p_mazda = malloc(sizeof(struct Car));
	assert(p_mazda);
	
	p_mazda->year = 2012;
	p_mazda->price = 33000.0;
	sprintf(p_mazda->manufacturer, "Mazda");
	sprintf(p_mazda->model, "RX-8");
	
	print_car(p_nissan);
	print_car(p_mazda);
	
	free(p_nissan);
	p_nissan = 0;
	
	free(p_mazda);
	p_mazda = 0;
	
	return 0;
}