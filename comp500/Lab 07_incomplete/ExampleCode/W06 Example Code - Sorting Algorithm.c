#include <stdio.h>

int main(void)
{
	int data[7] = { 9, 2, 7, 1, 8, 4, 5 };
	int temp = 0;
	int j = 0;
	
	for (int i = 1; i < 7; ++i)
	{
		temp = data[i];
		j = i - 1;
		
		while (j >= 0 && temp < data[j])
		{
			data[j + 1] = data[j];
			j = j - 1;
		}
		
		data[j + 1] = temp;
	}
	return 0;
}