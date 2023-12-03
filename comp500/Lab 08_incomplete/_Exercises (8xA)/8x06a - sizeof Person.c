/*
//LEARNT
Just needs to be grouped together. char_at_top and int_at_top is the same size
*/

#include <stdio.h>

struct Person
{
	char first_initial;
	char last_initial;
	int age;
	int weight;
	char sex;
	int height;
	char blood_type[4];
	int shoe_type;
};

struct Person_int_at_top
{
	int age;
	int weight;
	int height;
	int shoe_type;
	char sex;
	char first_initial;
	char last_initial;
	char blood_type[4];
};

struct Person_char_at_top
{
	char blood_type[4];
	char first_initial;
	char last_initial;
	char sex;
	int age;
	int weight;
	int height;
	int shoe_type;
};

int main(void)
{
	struct Person unoptimised;
	struct Person_int_at_top int_at_top;
	struct Person_char_at_top char_at_top;

	printf("Sizeof person_unoptimised: %d\n", sizeof(unoptimised));
	printf("Sizeof person_optimised_int_at_top: %d\n", sizeof(int_at_top));
	printf("Sizeof person_optimised_char_at_top: %d\n", sizeof(char_at_top));

	return 0;
}