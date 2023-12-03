#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int elements[3] =
	{
		150,
		275,
		400
	};

	int* p_elements_data = malloc(sizeof(elements));

	printf("malloc for int array.\n");
	printf("\n");

	printf("First Element: %d\n", elements[0]);
	printf("Second Element: %d\n", elements[1]);
	printf("Third Element: %d\n", elements[2]);

	free(p_elements_data);
	p_elements_data = 0;

	printf("\n");
	printf("Free the memory\n");

	return 0;
}