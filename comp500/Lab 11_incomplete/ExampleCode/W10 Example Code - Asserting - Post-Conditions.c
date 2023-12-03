
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <assert.h>

enum Assessments
{
	REPORTING_JOURNAL,
	PRACTICAL_TEST_1,
	PRACTICAL_TEST_2,
	PRACTICAL_TEST_3,
	FINAL_PRACTICAL_EXAM,
	MAX_ASSESSMENTS
};

float calc_final_percent(float results[], float weights[])
{
	float result = 0.0 f;
	int k;
	
	for (k = 0; k < MAX_ASSESSMENTS; ++k)
	{
		result += (results[k] *weights[k]);
	}

	// Post-conditions:
	assert(result >= 0.0 f);
	assert(result <= 100.0 f);
	return result;
}

int main(void)
{
	float final_percent;
	float weights[MAX_ASSESSMENTS];
	float scores[MAX_ASSESSMENTS];
	
	weights[REPORTING_JOURNAL] = 0.15 f;
	weights[PRACTICAL_TEST_1] = 0.1 f;
	weights[PRACTICAL_TEST_2] = 0.1 f;
	weights[PRACTICAL_TEST_3] = 0.15 f;
	weights[FINAL_PRACTICAL_EXAM] = 0.5 f;
	
	printf("Reporting Journal %% result? ");
	scanf("%f", &scores[REPORTING_JOURNAL]);
	printf("Practical Test 1 %% result? ");
	scanf("%f", &scores[PRACTICAL_TEST_1]);
	printf("Practical Test 2 %% result? ");
	scanf("%f", &scores[PRACTICAL_TEST_2]);
	printf("Practical Test 3 %% result? ");
	scanf("%f", &scores[PRACTICAL_TEST_3]);
	printf("Final Practical Exam %% result? ");
	scanf("%f", &scores[FINAL_PRACTICAL_EXAM]);
	
	final_percent = calc_final_percent(scores, weights);
	
	printf("\n\nOverall: %.2f\n", final_percent);
	
	return 0;
}