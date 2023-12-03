#include <stdio.h>
#include <stdlib.h>
#include <crtdbg.h>

typedef struct Student_Structure
{
	char first_name[32];
	char last_name[32];
	char stream_code[4];
} Student;

Student* query_student(void)
{
	// TODO: Declare a Student pointer.
	Student* p_student_who = 0;

	// TODO: Allocate a Student variable on the heap.
	p_student_who = malloc(sizeof(Student));

	printf("Input first name: ");
	scanf("%31s", p_student_who->first_name);

	printf("Input last name: ");
	scanf("%31s", p_student_who->last_name);

	printf("Input stream code: ");
	scanf("%3s", p_student_who->stream_code);

	// TODO: Return the heap Student variable.
	return p_student_who;
}
int main(void)
{
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

	Student* p_query = 0;

	p_query = query_student();

	printf("%s ", p_query->first_name);
	printf("%s ", p_query->last_name);
	printf("is in stream %s.\n", p_query->stream_code);

	// TODO: Deallocate p_query.
	free(p_query);

	return 0;
}