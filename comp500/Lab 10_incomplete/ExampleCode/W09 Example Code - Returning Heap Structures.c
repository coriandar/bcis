#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>

struct Student
{
	char name[20];
	int gpa;
};

void print_student(struct Student* p_student)
{
	assert(p_student);
	printf("%s's GPA is %d\n", p_student->name, p_student->gpa);
}

struct Student* create_student(char* name, int gpa)
{
	struct Student* p_new_student = malloc(sizeof(struct Student));
	assert(p_new_student);
	
	int name_length = strlen(name);
	assert(name_length < 20);
	
	p_new_student->gpa = gpa;
	strcpy(p_new_student->name, name);
	
	return p_new_student;
}

int main(void)
{
	struct Student* p_student1 = 0;
	struct Student* p_student2 = 0;
	struct Student* p_student3 = 0;
	
	p_student1 = create_student("John", 2);
	p_student2 = create_student("Amy", 4);
	p_student3 = create_student("Sarah", 3);
	
	print_student(p_student1);
	print_student(p_student2);
	print_student(p_student3);
	
	free(p_student1);
	p_student1 = 0;
	
	free(p_student2);
	p_student2 = 0;
	
	free(p_student3);
	p_student3 = 0;
	
	return 0;
}