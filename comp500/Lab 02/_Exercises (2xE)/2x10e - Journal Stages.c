#include <stdio.h>

int main(void)
{
	const int ENROLLED = 184;
	int stage = 0;
	int submitted = 0;
	int no_submit = 0;

	printf("Which Reporting Journal Stage? ");
	scanf("%d", &stage);

	printf("How many submissions? ");
	scanf("%d", &submitted);

	no_submit = ENROLLED - submitted;
	printf("\nReporting Journal Stage %d: %d students did not submit!", stage, no_submit);

	return 0;
}