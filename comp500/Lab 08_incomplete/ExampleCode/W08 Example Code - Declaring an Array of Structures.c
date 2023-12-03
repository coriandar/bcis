#include <stdio.h>

struct Book
{
	char title[20];
	int page_count;
	float price;
};

int main(void)
{
	struct Book store_shelf[5];
	
	for (int k = 0; k < 5; ++k)
	{
		printf("Enter the book title: ");
		scanf("%19s", store_shelf[k].title);
		printf("Enter the number of pages: ");
		scanf("%d", &store_shelf[k].page_count);
		printf("Enter the price: ");
		scanf("%f", &store_shelf[k].price);
		printf("\n");
	}
	
	for (int k = 0; k < 5; ++k)
	{
		printf("%s : ", store_shelf[k].title);
		printf("%d pages : ", store_shelf[k].page_count);
		printf("$%.2f\n", store_shelf[k].price);
	}
	
	return 0;
}