
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
	return ((*(int*) a) - (*(int*) b));
}

int main(void)
{
	int data[] = { 2, 5, 7, 9, 12, 14, 23, 28, 30, 43 };
	int *item = 0;
	int key = 0;
	
	printf("Search for: ");
	scanf("%d", &key);
	
	item = bsearch(&key, data, 10, sizeof(int), compare);
	
	if (item)
	{
		printf("Found %d at %p (%d)\n", key, item, *item);
	}
	else
	{
		printf("Not found\n");
	}

	return 0;
}