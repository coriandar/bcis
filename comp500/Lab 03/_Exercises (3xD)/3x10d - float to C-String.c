#include <stdio.h>
#include <string.h>

int main(void)
{
	float real = 0.0f;
	printf("Enter a real number: ");
	scanf("%f", &real);

	char float_array[9];
	// print into, format, source
	sprintf(float_array, "%08f", real);

	printf("\nConverting float input into ASCII C-String array...\n\n");

	printf("Element 0 is: '%c' which is ASCII %d\n",float_array[0], float_array[0]);

	printf("Element 1 is: '%c' which is ASCII %d\n",float_array[1], float_array[1]);

	printf("Element 2 is: '%c' which is ASCII %d\n",float_array[2], float_array[2]);

	printf("Element 3 is: '%c' which is ASCII %d\n",float_array[3], float_array[3]);

	printf("Element 4 is: '%c' which is ASCII %d\n",float_array[4], float_array[4]);

	printf("Element 5 is: '%c' which is ASCII %d\n",float_array[5], float_array[5]);

	printf("Element 6 is: '%c' which is ASCII %d\n",float_array[6], float_array[6]);

	printf("Element 7 is: '%c' which is ASCII %d\n",float_array[7], float_array[7]);

	return 0;
}