#include <stdio.h>

void ask_questions(int* p_age, float* p_height, float* p_weight)
{
	int age = 0;
	float height = 0.0f;
	float weight = 0.0f;
	
	printf("What is your age? ");
	scanf("%d", &age);
	
	printf("What is your height? ");
	scanf("%f", &height);
	
	printf("What is your weight? ");
	scanf("%f", &weight);
	
	*p_age = age;
	*p_height = height;
	*p_weight = weight;
}

int main(void)
{
	int users_age = 0;
	float users_height = 0.0f;
	float users_weight = 0.0f;
	
	ask_questions(&users_age, &users_height, &users_weight);
	
	printf("User's Age: %d\n", users_age);
	printf("User's Height: %f\n", users_height);
	printf("User's Weight: %f\n", users_weight);
	
	return 0;
}