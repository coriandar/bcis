#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare_cstr(const void *a, const void *b)
{
	char **ia = (char **) a;
	char **ib = (char **) b;
	
	return (strcmp(*ia, *ib));
}

int main(void)
{
	char *text[] = { "the", "quick", "brown", "fox" };

	int num_elements = sizeof(text) / sizeof(char*);
	
	printf("Before Sorting: \n");
	for (int k = 0; k < num_elements; ++k)
	{
		printf("%d: %s\n", k, text[k]);
	}

	printf("\n");
	
	qsort(text, num_elements, sizeof(char*), compare_cstr);
	
	printf("After Sorting: \n");
	for (int k = 0; k < num_elements; ++k)
	{
		printf("%d: %s\n", k, text[k]);
	}
	printf("\n");
	
	return 0;
}