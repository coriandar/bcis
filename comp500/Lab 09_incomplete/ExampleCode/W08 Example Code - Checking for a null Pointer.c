#include <stdio.h>

void ask_questions(int* p_age, float* p_height)
{
	int age = 0;
	float height = 0.0f;
	
	printf("What is your age? ");
	scanf("%d", &age);
	
	printf("What is your height? ");
	scanf("%f", &height);
	
	if (p_age)
	{
		*p_age = age;
	}
	
	if (p_height)
	{
		*p_height = height;
	}
}

int main(void)
{
	int users_age = 0;
	float users_height = 0.0f;
	
	ask_questions(&users_age, &users_height);
	
	printf("User's Age: %d\n", users_age);
	printf("User's Height: %f\n", users_height);
	
	// This time, do not send back the age...
	ask_questions(0, &users_height);
	
	printf("User's Age: %d\n", users_age);
	printf("User's Height: %f\n", users_height);
	
	return 0;
}