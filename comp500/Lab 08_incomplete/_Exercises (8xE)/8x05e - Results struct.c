#include <stdio.h>

struct P1_Results
{
	float journal;
	float test_1;
	float test_2;
	float test_3;
	float test_final;
};

float compute_overall(struct P1_Results student);

int main(void)
{
	struct P1_Results student;
	student.journal = 57.5f;
	student.test_1 = 81.42f;
	student.test_2 = 45.6f;
	student.test_3 = 13.55f;
	student.test_final = 62.75f;

	printf("Overall: %.2f%%\n", compute_overall(student));

	return 0;
}

float compute_overall(struct P1_Results student)
{
	float overall = 0.0f;

	overall = (student.journal * 0.15f);
	overall += (student.test_1 * 0.10f);
	overall += (student.test_2 * 0.10f);
	overall += (student.test_3 * 0.15f);
	overall += (student.test_final * 0.5f);

	return overall;
}