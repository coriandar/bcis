#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>

typedef struct Student_Structure
{
	char name[20];
	int gpa;
} Student;

Student* create_student(char* name, int gpa);
void print_student(Student* p_student);

int main(void)
{
	Student* p_student1 = 0;
	Student* p_student2 = 0;
	Student* p_student3 = 0;

	p_student1 = create_student("John", 2);
	p_student2 = create_student("Amy", 4);
	p_student3 = create_student("Sarah", 3);

	print_student(p_student1);
	free(p_student1);
	p_student1 = 0;

	print_student(p_student2);
	free(p_student2);
	p_student2 = 0;

	print_student(p_student3);
	free(p_student3);
	p_student3 = 0;

	return 0;
}

void print_student(Student* p_student)
{
	assert(p_student);
	printf("%s's GPA is %d\n", p_student->name, p_student->gpa);
}

Student* create_student(char* name, int gpa)
{
	Student* p_new_student = malloc(sizeof(Student));
	assert(p_new_student);

	int name_length = strlen(name);
	assert(name_length < 20);

	p_new_student->gpa = gpa;
	strcpy(p_new_student->name, name);

	return p_new_student;
}