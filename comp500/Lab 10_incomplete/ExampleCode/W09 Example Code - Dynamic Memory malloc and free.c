#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Person
{
	char name[20];
	int age;
};

void print_person(struct Person* p_person)
{
	printf("%s is %d years old.\n", p_person->name, p_person->age);
}

void fill_person(struct Person* p_person)
{
	printf("Name? ");
	scanf("%19s", &p_person->name);
	printf("Age? ");
	scanf("%d", &p_person->age);
}

int main(void)
{
	int number_of_people = 0;
	struct Person* people = 0;
	
	printf("How many people? ");
	scanf("%d", &number_of_people);
	
	people = malloc(sizeof(struct Person) * number_of_people);
	
	for (int k = 0; k < number_of_people; ++k)
	{
		fill_person(&people[k]);
	}
	
	for (int k = 0; k < number_of_people; ++k)
	{
		print_person(&people[k]);
	}
	
	free(people);
	people = 0;
	
	return 0;
}