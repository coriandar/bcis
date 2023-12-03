#include <stdio.h>

typedef struct Input_Structure
{
	char character;
	int integer;
	float real_num;

} User_Input;

int main(void)
{
	User_Input user_input_data;

	printf("Input a single character: ");
	scanf(" %c", &user_input_data.character);

	printf("Input an integer: ");
	scanf("%d", &user_input_data.integer);

	printf("Input a float: ");
	scanf("%f", &user_input_data.real_num);

	printf("\n");

	printf("The character ");
	printf("%c ", user_input_data.character);
	printf("when cast to an int gives value: ");
	printf("%d\n", (int)user_input_data.character);

	printf("The character ");
	printf("%c ", user_input_data.character);
	printf("when cast to a float gives value: ");
	printf("%f\n\n", (float)user_input_data.character);

	printf("The integer ");
	printf("%d ", user_input_data.integer);
	printf("when cast to a char gives value: ");
	printf("%c\n", (char)user_input_data.integer);

	printf("The integer ");
	printf("%d ", user_input_data.integer);
	printf("when cast to a float gives value: ");
	printf("%f\n\n", (float)user_input_data.integer);

	printf("The float ");
	printf("%f ", user_input_data.real_num);
	printf("when cast to a char gives value: ");
	printf("%c\n", (char)user_input_data.real_num);

	printf("The float ");
	printf("%f ", user_input_data.real_num);
	printf("when cast to an int gives value: ");
	printf("%d\n\n", (int)user_input_data.real_num);

	return 0;
}