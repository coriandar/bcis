#include <stdio.h>
int main(void)
{
	// Pointer to a read-only C-String { '1', '2', '3', '\0 }:
	char* char_pointer = "123";
	printf("1) Experimenting with the char_pointer...\n");
	printf("\n");
	printf("*(char_pointer) %%c %c\n", *(char_pointer));
	printf("*(char_pointer + 1) %%c %c\n", *(char_pointer + 1));
	printf("char_pointer %%s %s\n", (char_pointer));
	printf("char_pointer + 1 %%s %s\n", (char_pointer + 1));
	printf("char_pointer[0] %%c %c\n", char_pointer[0]);
	printf("char_pointer[1] %%c %c\n", char_pointer[1]);
	printf("*(char_pointer++) %%c %c\n", *(char_pointer++));
	printf("char_pointer %%s %s\n", char_pointer);
	printf("\n");
	// Pointer to a stack stored C-String { 'a', 'b', 'c', 'd', '\0 }:
	char char_array[] = "abcd";
	printf("2) Experimenting with the char_array...\n\n");
	printf("\n");
	printf("*(char_array) %%c %c\n", *(char_array));
	printf("*(char_array + 1) %%c %c\n", *(char_array + 1));
	printf("char_array %%s %s\n", (char_array));
	printf("char_array+1 %%s %s\n", (char_array + 1));
	printf("char_array[0] %%c %c\n", char_array[0]);
	printf("char_array[1] %%c %c\n", char_array[1]);
	// The following will generate error C2105...
	// (cannot ++ a local array name...)
	// printf("*(char_pointer++) %%c %c\n", *(char_array++));
	printf("char_array %%s %s\n", char_array);
	printf("\n");
	return 0;
}