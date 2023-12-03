#include <stdio.h>

void print_summary(float purchase_price, int quantity);
float compute_total(float purchase_price, int quantity);
float compute_gst(float purchase_price, int quantity);

int main(void)
{
	printf("Purchase price\? ");
	float purchase_price = 0.0f;
	scanf("%f", &purchase_price);

	printf("Quantity\? ");
	int quantity = 0;
	scanf("%d", &quantity);

	print_summary(purchase_price, quantity);

	return 0;
}

void print_summary(float purchase_price, int quantity)
{
	printf("\n");
	printf("+-------------------------------------\n");
	printf("| Each unit's purchase price: ");
	printf("$%.2f\n", purchase_price);

	printf("| Required number of units: ");
	printf("%d\n", quantity);
	printf("+-------------------------------------\n");
	printf("\n");

	printf("The total prise is: ");
	printf("$%.2f\n", compute_total(purchase_price, quantity));

	printf("The GST content is: ");
	printf("$%.2f\n", compute_gst(purchase_price, quantity));
}

float compute_total(float purchase_price, int quantity)
{
	return purchase_price * (quantity * 1.0f);
}

float compute_gst(float purchase_price, int quantity)
{
	return compute_total(purchase_price, quantity) * 0.15f;
}