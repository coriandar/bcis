//DESIGN
//	COMPUTE num_1 AS rand() % 100 + 1
//	COMPUTE num_2 AS rand() % 100 + 1
//	COMPUTE result AS num_1 + num2
//	PRINT 'What is num_1 + num2 ?
//	READ user_answer
//	IF (user_answer) == result)
//		PRINT 'Correct!'
//	ELSE
//		PRINT 'Wrong! num_1 + num2 is result'
//	ENDIF

//IMPLEMENTATION
// Program asks the user input for an answer to a math addition problem.
// Will evaluate if correct or not.


#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
	srand(time(0));

	int num_1 = rand() % 100 + 1;
	int num_2 = rand() % 100 + 1;
	int result = num_1 + num_2;
	int user_answer = 0;

	printf("What is %d + %d? ", num_1, num_2);
	scanf("%d", &user_answer);

	if (user_answer == result)
	{
		printf("\nCorrect!\n");
	}
	else
	{
		printf("\nWrong! %d + %d is %d\n", num_1, num_2, result);
	}

	return 0;
}