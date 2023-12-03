#include <stdio.h>
#include <assert.h>

/*
 *Function: print_grade
 * ---------------------
 *Prints out the letter grade to the console,
 *prefixed with a textual label.
 *
 *grade: the letter grade to print out.
 *
 *returns: nothing.
 *
 *pre: input must be valid letter grade.
 *
 */
void print_grade(char grade)
{
	assert(grade == 'A' ||
		   grade == 'B' ||
		   grade == 'C' ||
		   grade == 'D');
		
	printf("Grade: %c\n", grade);
}

/*
 *Function: main
 * --------------
 *Runs test calls to print_grade to experiment with
 *assert preconditions.
 *
 *returns: 0 upon successful execution.
 */
int main(void)
{
	print_grade('D');
	print_grade('C');
	print_grade('x');
	print_grade('B');
	print_grade('A');
	
	return 0;
}