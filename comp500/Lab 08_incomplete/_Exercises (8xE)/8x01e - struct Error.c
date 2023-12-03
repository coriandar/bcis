/*
//ISSUES
Made char name an array.
Used strcpy to assign string.

*/

#include <stdio.h>
#include <string.h>

struct Student
{
	char name[32];
	float lecture_attendance;
	float lab_attendance;
};

void print_student(struct Student student);

int main(void)
{
	struct Student student;

	strcpy(student.name, "Jane Doe");
	student.lecture_attendance = 0.33f;
	student.lab_attendance = 1.00f;

	print_student(student);

	return 0;
}

void print_student(struct Student student)
{
	printf("Name: ");
	printf("%s\n",student.name);

	printf("Lecture Attendance: ");
	printf("%.2f\n",student.lecture_attendance);

	printf("Lab Attendance: ");
	printf("%.2f\n",student.lab_attendance);
}