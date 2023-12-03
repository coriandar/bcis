/*
//IMPLEMENTATION
Declare student structure, then assign the values in main. Create a function that will print out the details of the student.


//LEARNT
How to declare and initialise structure.
How to assign values.
How to pass through to functions.
*/

#include <stdio.h>

//declare structure
struct Student
{
	char name[30];
	int age;
	float gpa;
};

void print_student(struct Student student);

int main(void)
{
	struct Student student;

	// input parameters.
	sprintf(student.name, "Jane Doe");
	student.age = 21;
	student.gpa = 3.99f;

	print_student(student);

	return 0;
}

void print_student(struct Student student)
{
	printf("Name: %s\n", student.name);
	printf("Age: %d\n", student.age);
	printf("GPA: %.2f\n", student.gpa);
}