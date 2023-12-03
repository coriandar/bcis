
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct tagCat
{
	char name[32];
	int age;
	float tail_length;
} Cat;

int compare_by_age(const void *a, const void *b)
{
	const Cat *cat_a = a;
	const Cat *cat_b = b;
	return (cat_a->age - cat_b->age);
}

int compare_by_tail_length(const void *a, const void *b)
{
	const Cat *cat_a = a;
	const Cat *cat_b = b;
	return (cat_a->tail_length > cat_b->tail_length ? 1 : -1);
}

void print_all_cats(Cat *all_cats, int num_cats)
{
	for (int k = 0; k < num_cats; ++k)
	{
		printf("%s, ", all_cats[k].name);
		printf("%d years, ", all_cats[k].age);
		printf("tail is %.2f cm long.\n", all_cats[k].tail_length);
	}
	printf("\n\n");
}

int main(void)
{
	Cat all_my_cats[4];
	
	strcpy(all_my_cats[0].name, "Whiskers");
	all_my_cats[0].age = 5;
	all_my_cats[0].tail_length = 29.7 f;
	
	strcpy(all_my_cats[1].name, "Tigger");
	all_my_cats[1].age = 15;
	all_my_cats[1].tail_length = 28.5 f;
	
	strcpy(all_my_cats[2].name, "Shadow");
	all_my_cats[2].age = 7;
	all_my_cats[2].tail_length = 30.2 f;
	
	strcpy(all_my_cats[3].name, "Paws");
	all_my_cats[3].age = 3;
	all_my_cats[3].tail_length = 27.7 f;
	
	printf("My cats, prior to sorting: \n");
	print_all_cats(all_my_cats, 4);
	
	qsort(all_my_cats, 4, sizeof(Cat), compare_by_age);
	printf("Sorted by Age: \n");
	print_all_cats(all_my_cats, 4);
	
	qsort(all_my_cats, 4, sizeof(Cat), compare_by_tail_length);
	
	printf("Sorted by Tail Length: \n");
	print_all_cats(all_my_cats, 4);
	
	return 0;
}