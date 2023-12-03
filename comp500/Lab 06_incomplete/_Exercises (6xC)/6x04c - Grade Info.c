#include <stdio.h>

int main(void)
{
	int input = 0;
	int students = 0;
	int grade_sum = 0;
	int grade_high = 0;

	while (input != -1)
	{
		if (students == 0)
		{
			printf("Enter the first grade (-1 to quit): ");
			scanf("%d", &input);

			grade_sum += input;
			grade_high = input;
		}
		else
		{
			printf("Enter the next grade (-1 to quit): ");
			scanf("%d", &input);
			grade_sum += input;

			if (grade_high < input)
			{
				grade_high = input;
			}
		}

		students++;
	}

	if (input == -1)
	{
		printf("\n");
		printf("Total number of students: 0\n");
		printf("Average grade: No students!\n");
		printf("Highest grade: No students!\n");
	}
	else
	{
		printf("\n");
		printf("Total number of students: %d\n", students - 1);
		printf("Average grade: %d\n", grade_sum / (students - 1));
		printf("Highest grade: %d\n", grade_high);
	}

	return 0;
}