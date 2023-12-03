#include <stdio.h>

void swap(int* p_a, int* p_b)
{
	int temp = *p_a;
	*p_a = *p_b;
	*p_b = temp;
}

int main(void)
{
	int x = 4;
	int y = 7;
	
	printf("Before swap: x is %d, y is %d\n", x, y);
	
	swap(&x, &y);
	
	printf("After swap: x is %d, y is %d\n", x, y);
	
	return 0;
}