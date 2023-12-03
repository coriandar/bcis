#include <stdio.h>

struct Student
{
	char first_name[32];
	char last_name[32];
	int stream_code;
};

struct Student query_student(void)
{
	// TODO: Declare a local Student variable.
	struct Student query_student;

	printf("Input first name: ");
	// TODO: Scan for user input...
	scanf("%31s", &query_student.first_name);

	printf("Input last name: ");
	// TODO: Scan for user input...
	scanf("%31s", &query_student.last_name);

	printf("Input stream code: ");
	// TODO: Scan for user input...
	scanf("%d", &query_student.stream_code);

	// TODO: Return the local Student variable.
	return query_student;
}

int main(void)
{
	struct Student query;

	query = query_student();

	printf("%s ", query.first_name);
	printf("%s ", query.last_name);
	printf("is in stream %d.", query.stream_code);

	return 0;
}