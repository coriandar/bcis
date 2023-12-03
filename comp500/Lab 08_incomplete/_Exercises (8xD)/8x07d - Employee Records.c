#include <stdio.h>
#include <assert.h>

typedef struct Employee_Structure
{
	char name[30];
	int age;
	float salary;

} Employee;

Employee fill_details(void);
float compute_average(Employee* employee_data, int how_many);
void print_highest(Employee* employee_data, int how_many);

int main(void)
{
	Employee employees[10];

	printf("How many employees do you have\? ");
	int how_many = 0;
	scanf("%d", &how_many);
	assert(how_many <= 10);

	printf("\n");

	for (int index = 0; index < how_many; index++)
	{
		employees[index] = fill_details();
		printf("\n");
	}

	printf("Average salary of an employee is: ");
	printf("$%.2f\n\n", compute_average(employees, how_many));

	print_highest(employees, how_many);

	return 0;
}

void print_highest(Employee* employee_data, int how_many)
{
	float highest = 0.0f;

	for (int index = 0; index < how_many; index++)
	{
		if (highest < employee_data[index].salary)
		{
			highest = employee_data[index].salary;
		}
	}

	for (int index = 0; index < how_many; index++)
	{
		if (highest == employee_data[index].salary)
		{
			printf("%s ", employee_data[index].name);
			printf("earns the highest salary of $");
			printf("%.2f\n", employee_data[index].salary);
		}
	}
}

float compute_average(Employee* employee_data, int how_many)
{
	float average = 0.0f;

	for (int index = 0; index < how_many; index++)
	{
		average += employee_data[index].salary;
	}

	average = average / how_many;

	return average;
}

Employee fill_details(void)
{
	Employee employee_data;

	printf("Enter name: ");
	scanf("%29s", &employee_data.name);

	printf("Enter %s's age: ", employee_data.name);
	scanf("%d", &employee_data.age);

	printf("Enter %s's salary: ", employee_data.name);
	scanf("%f", &employee_data.salary);

	return employee_data;
}