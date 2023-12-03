//DESIGN
// use float
//	PRINT 'Input the total purchase price:'
//	READ price
//	IF (2500.0f <= price && price < 6500.0f)
//		COMPUTE discount AS price * 5.00%
//	ELSE IF (6500.0f <= price && price <= 10000.0f)
//		COMPUTE discount AS price * 10.00%
//	ELSE IF (price > 10000.0f)
//		COMPUTE discount AS price * 12.50%
//	ELSE
//		discount = 0;
//	END IF
//	COMPUTE payable AS price - discount
//	PRINT Payable Total is: payable

//IMPLEMENTATION
//Program calculates discount to customer depending on the purchase amount.


#include <stdio.h>

int main(void)
{
	float price = 0.0f;
	float discount = 0.0f;
	float payable = 0.0f;
	float percent[4];

	percent[0] = 0.0f;
	percent[1] = 0.05f;
	percent[2] = 0.10f;
	percent[3] = 0.125f;

	printf("Input the total purchase price: ");
	scanf("%f", &price);

	if (price < 2500.0f)
	{
		discount = price * percent[0];
	}
	else if (2500.0f <= price && price < 6500.0f)
	{
		discount = price * percent[1];
	}
	else if (6500.0f <= price && price <= 10000.0f)
	{
		discount = price * percent[2];
	}
	else if (price > 10000.0f)
	{
		discount = price * percent[3];
	}

	payable = price - discount;
	printf("Discount is: %.2f\n", discount);

	printf("Payable Total is: %.2f\n", payable);

	return 0;
}