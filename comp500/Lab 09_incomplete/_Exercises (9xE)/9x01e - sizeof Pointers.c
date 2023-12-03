#include <stdio.h>

int main(void)
{
	printf("size of types:\n");
	printf("sizeof double is %d\n", sizeof(double));
	printf("sizeof float is %d\n", sizeof(float));
	printf("sizeof long is %d\n", sizeof(long));
	printf("sizeof int is %d\n", sizeof(int));
	printf("sizeof short is %d\n", sizeof(short));
	printf("sizeof char is %d\n", sizeof(char));
	printf("\n");

	// TODO: Add print out for the size of double pointer
	//NULL pointers
	double* double_ptr_size = 0;
	float* float_ptr_size = 0;
	long* long_ptr_size = 0;
	int* int_ptr_size = 0;
	short* short_ptr_size = 0;
	char* char_ptr_size = 0;

	printf("size of null pointers:\n");
	printf("sizeof double* NULL is %d\n", sizeof(double_ptr_size));
	printf("sizeof float* NULL is %d\n", sizeof(float_ptr_size));
	printf("sizeof long* NULL is %d\n", sizeof(long_ptr_size));
	printf("sizeof int* NULL is %d\n", sizeof(int_ptr_size));
	printf("sizeof short* NULL is %d\n", sizeof(short_ptr_size));
	printf("sizeof char* NULL is %d\n", sizeof(char_ptr_size));
	printf("\n");

	// WILD Pointers
	printf("size of wild pointers:\n");
	printf("sizeof double* is %d\n", sizeof(double*));
	printf("sizeof float* is %d\n", sizeof(float*));
	printf("sizeof long* is %d\n", sizeof(long*));
	printf("sizeof int* is %d\n", sizeof(int*));
	printf("sizeof short* is %d\n", sizeof(short*));
	printf("sizeof char* is %d\n", sizeof(char*));

	return 0;
}