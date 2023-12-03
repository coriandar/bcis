#include <stdio.h>

int main(void)
{
	float j = 0;
	float t1 = 0;
	float t2 = 0;
	float t3 = 0;
	float p = 0;

	printf("COMP500/ENSE501 Result Calculator:\n");
	printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n\n");

	printf("Enter the score (out of 100) for the Reporting Journal: ");
	scanf("%f", &j);

	printf("Enter the score (out of 100) for the Practical Test 1: ");
	scanf("%f", &t1);

	printf("Enter the score (out of 100) for the Practical Test 2: ");
	scanf("%f", &t2);

	printf("Enter the score (out of 100) for the Practical Test 3: ");
	scanf("%f", &t3);

	printf("Enter the score (out of 100) for the Final Practical Exam: ");
	scanf("%f", &p);

	printf("\nCalculating...\n\n");

	j = j * 0.15f;
	t1 = t1 * 0.10f;
	t2 = t2 * 0.10f;
	t3 = t3 * 0.15f;
	p = p * 0.50f;

	printf("Reporting Journal (worth 15%%) contributes: %f\n", j);
	printf("Practical Test 1 (worth 10%%) contributes: %f\n", t1);
	printf("Practical Test 2 (worth 10%%) contributes: %f\n", t2);
	printf("Practical Test 3 (worth 15%%) contributes: %f\n", t3);
	printf("Final Practical Exam (worth 50%%) contributes: %f\n\n", p);

	printf("Overall result total: %f%%\n\n", j + t1 + t2 + t3 + p);

	printf(" Remember, to pass the paper, a student must achieve:\n");
	printf("  - At least 80%% attendance and participation in the\n");
	printf("    individual's scheduled lab tutorial stream, AND\n");
	printf("  - A minimum mark of 40%% for the Final Practical Exam, AND\n");
	printf("  - A minimum C- (50%%) overall grade.\n");

	return 0;
}