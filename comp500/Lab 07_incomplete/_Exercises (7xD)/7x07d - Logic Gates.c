#include <stdio.h>

int nand_gate(int a, int b);
int nor_gate(int a, int b);
int xor_gate(int a, int b);
int xnor_gate(int a, int b);

int main(void)
{
	printf("a: ");
	int a = 0;
	scanf("%d", &a);

	printf("b: ");
	int b = 0;
	scanf("%d", &b);

	printf("\n");
	printf("nand: %d\n", nand_gate(a, b));
	printf("nor: %d\n", nor_gate(a, b));
	printf("xor: %d\n", xor_gate(a, b));
	printf("xnor: %d\n", xnor_gate(a, b));
	printf("\n");

	return 0;
}

int nand_gate(int a, int b)
{
	int nand = -1;

	if (a == 1 && b == 1)
	{
		nand = 0;
	}
	else
	{
		nand = 1;
	}

	return nand;
}

int nor_gate(int a, int b)
{
	int nor = -1;

	if (a == 0 && b == 0)
	{
		nor = 1;
	}
	else
	{
		nor = 0;
	}

	return nor;
}

int xor_gate(int a, int b)
{
	int xor = -1;

	if (a == 0 && b == 0)
	{
		xor = 0;
	}
	else if (a == 1 && b == 1)
	{
		xor = 0;
	}
	else
	{
		xor = 1;
	}

	return xor;
}

int xnor_gate(int a, int b)
{
	int xnor = -1;

	if (a == 0 && b == 0)
	{
		xnor = 1;
	}
	else if (a == 1 && b == 1)
	{
		xnor = 1;
	}
	else
	{
		xnor = 0;
	}

	return xnor;
}