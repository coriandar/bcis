//Write a program that asks the user to input a real number 
//representing their projected maximum Lab Tutorial attendance 
//and participation percentage as it stands at the end of week 3.

//a student must achieve at least 80% attendance and participation 
//of their Lab Tutorial stream to be eligible to pass the paper!


#include <stdio.h>

int main(void)
{
	printf("At the end of week 3, if you fully attend all\n");
	printf("remaining Lab Tutorials, what is your maximum\n");
	printf("Lab Tutorial Attendence percentage? ");
	float attendance_per = 0.0f;
	scanf("%f", &attendance_per);

	if (attendance_per >= 80.0f)
	{
		printf("\nExcellent, you will likely meet the attendance\n");
		printf("and participation requirement to pass the paper!\n");
	}
	else
	{
		printf("\nOh no, you will not meet the attendance and\n");
		printf("participation requirement to pass the paper!\n");
	}

	return 0;
}