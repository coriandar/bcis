#include <stdio.h>

void print_bill_summary(float food_price, float guest_tip);
float compute_total(float food_price, float guest_tip);
float compute_suggested_tip(float food_price);
void print_space(int space);

int main(void)
{
	printf("Food price\? ");
	float food_price = 0.0f;
	scanf("%f", &food_price);

	printf("Guest tip\? ");
	float guest_tip = 0.0f;
	scanf("%f", &guest_tip);

	print_bill_summary(food_price, guest_tip);

	return 0;

}

void print_bill_summary(float food_price, float guest_tip)
{
	printf("\n");
	printf("Dinner bill summary...\n");

	printf("| Food: ");
	print_space(5);
	printf("$%.2f\n", food_price);

	printf("| Guest Tip: ");
	printf("$%.2f\n", guest_tip);

	printf("+---------------------\n");
	printf("\n");

	printf("The total to pay is: ");
	printf("$%.2f\n", compute_total(food_price, guest_tip));

	printf("(The suggested tip was: ");
	printf("$%.2f)\n", compute_suggested_tip(food_price));
}

float compute_total(float food_price, float guest_tip)
{
	return food_price + guest_tip;
}

float compute_suggested_tip(float food_price)
{
	return food_price * 0.2f;
}

void print_space(int space)
{
	for (int repeat = 0; repeat < space; repeat++)
	{
		printf(" ");
	}
}