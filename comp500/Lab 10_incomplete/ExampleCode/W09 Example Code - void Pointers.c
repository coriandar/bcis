#include <stdio.h>

int main(void)
{
	void* ptr = 0;
	
	char num_char = 'x';
	int num_int = 57;
	float num_float = 12.75f;
	
	ptr = &num_char;
	
	printf("%c\n", *((char*)ptr));
	ptr = &num_int;
	
	printf("%d\n", *((int*)ptr));
	ptr = &num_float;
	
	printf("%f\n", *((float*)ptr));
	
	return 0;
}