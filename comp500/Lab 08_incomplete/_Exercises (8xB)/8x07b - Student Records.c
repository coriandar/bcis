#include <stdio.h>
#include <string.h>

struct Student
{
	char name[32];
	int id;
	float percentage;
};

void print_student_details(struct Student to_print);

int main(void)
{
	// TODO: Declare an array of four students:
	struct Student students[4];

	// TODO: Set the first student's record:
	sprintf(students[0].name, "Jane Smith");
	students[0].id = 12345643;
	students[0].percentage = 55.55f;

	// TODO: Set the second student's record:
	sprintf(students[1].name, "John Jones");
	students[1].id = 22334432;
	students[1].percentage = 20.75f;

	// TODO: Set the third student's record:
	sprintf(students[2].name, "Jill Johns");
	students[2].id = 99876612;
	students[2].percentage = 99.50f;

	// TODO: Set the fourth student's record:
	sprintf(students[3].name, "Jack Bean");
	students[3].id = 46802110;
	students[3].percentage = 73.25f;

	// TODO: Iterate through each student in the array,
	// TODO: and call print_student_details for each student:

	int size = sizeof(students)/sizeof(students[0]);

	for (int index = 0; index < size; index++)
	{
		print_student_details(students[index]);
	}

	return 0;
}

// TODO: Define the print_student_details function here:
void print_student_details(struct Student to_print)
{
	printf("ID is: ");
	printf("%d\n", to_print.id);

	printf("Name is: ");
	printf("%s\n", to_print.name);

	printf("Percentage is: ");
	printf("%.2f%%\n\n", to_print.percentage);
}