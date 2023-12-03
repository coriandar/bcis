#include <stdio.h>

int main(void)
{
	char course_code[8];

	course_code[0] = 'C';
	course_code[1] = 'O';
	course_code[2] = 'M';
	course_code[3] = 'P';
	course_code[4] = '5';
	course_code[5] = '0';
	course_code[6] = '0';
	course_code[7] = '\0';

	printf("Course code: %s\n", course_code);

	printf("\n");

	return 0;
}