/*
//LEARNT
my_pointer variable holds the address of my_age.
my_pointer address will be different.
Dereference and assign a new value that it is pointed to.
*/

#include <stdio.h>

int main(void)
{
	printf("Week 9: Intro to Pointers\n");

	int my_age = 27;
	int* my_pointer = &my_age;

	printf("my_age holds the value %d\n", my_age);
	printf("my_pointer holds the value %p\n", &my_age);

	// address of my_pointer not what it holds.
	printf("my_pointer holds the value %p\n", &my_pointer);
	printf("my_pointer holds the value %p\n", my_pointer);
	printf("my_pointer points to the value %d\n", *my_pointer);

	printf("Indirection test!\n");

	*my_pointer = -1;

	printf("my_age holds the value %d\n", my_age);
	printf("my_pointer holds the value %p\n", &my_age);
	printf("my_pointer holds the value %p\n", &my_pointer);
	printf("my_pointer holds the value %p\n", my_pointer);
	printf("my_pointer points to the value %d\n", *my_pointer);

	return 0;
}