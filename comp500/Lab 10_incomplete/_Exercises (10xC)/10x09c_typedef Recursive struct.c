#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>

typedef struct Person_Structure
{
	char name[20];
	struct Person_Structure* mother;
	struct Person_Structure* father;
} Person;

void print_person(Person* p_person);

int main(void)
{
	Person grampa_simpson;
	Person sunny;
	Person homer;
	Person grandpa_bouvier;
	Person gramda_bouvier;
	Person marge;
	Person bart;

	strcpy(grampa_simpson.name, "Abraham Simpson");
	grampa_simpson.father = 0;
	grampa_simpson.mother = 0;

	strcpy(sunny.name, "Mona Simpson");
	sunny.father = 0;
	sunny.mother = 0;

	strcpy(homer.name, "Homer Simpson");
	homer.father = &grampa_simpson;
	homer.mother = &sunny;

	strcpy(grandpa_bouvier.name, "Clancy Bouvier");
	grandpa_bouvier.father = 0;
	grandpa_bouvier.mother = 0;

	strcpy(gramda_bouvier.name, "Jacqueline Bouvier");
	gramda_bouvier.father = 0;
	gramda_bouvier.mother = 0;

	strcpy(marge.name, "Marge Simpson");
	marge.father = &grandpa_bouvier;
	marge.mother = &gramda_bouvier;

	strcpy(bart.name, "Bart Simpson");
	bart.father = &homer;
	bart.mother = &marge;

	print_person(&bart);

	return 0;
}

void print_person(Person* p_person)
{
	assert(p_person);

	if (p_person->father)
	{
		printf("%s's father", p_person->name);
		printf(" is: %s \n", p_person->father->name);

		print_person(p_person->father);
	}

	if (p_person->mother)
	{
		printf("%s's mother", p_person->name);
		printf(" is: %s \n", p_person->mother->name);

		print_person(p_person->mother);
	}
}