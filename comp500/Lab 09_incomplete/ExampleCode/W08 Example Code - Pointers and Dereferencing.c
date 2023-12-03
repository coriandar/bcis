#include <stdio.h>

int main(void)
{
	int whole_number = 152;
	char one_letter = 'P';
	char phrase[] = "Another Week 8 Example";
	
	int* ptr_to_whole = &whole_number;
	char* ptr_to_letter = &one_letter;
	char* ptr_to_phrase = phrase;
	
	printf("whole_number has a value of: %d\n", whole_number);
	printf("whole_number is stored at: %p\n", &whole_number);
	printf("\n");
	
	printf("ptr_to_whole has a value of: %p\n", ptr_to_whole);
	printf("ptr_to_whole points to: %d\n", *ptr_to_whole);
	printf("\n");
	
	printf("one_letter has a value of: %c\n", one_letter);
	printf("one_letter is stored at: %p\n", &one_letter);
	printf("\n");
	
	printf("ptr_to_letter has a value of: %p\n", ptr_to_letter);
	printf("ptr_to_letter points to: %c\n", *ptr_to_letter);
	printf("\n");
	
	printf("phrase has a value of: %c\n", *phrase);
	printf("phrase is a C-String: %s\n", phrase);
	printf("phrase is stored at: %p\n", phrase);
	printf("\n");
	
	printf("ptr_to_phrase has a value of: %p\n", ptr_to_phrase);
	printf("ptr_to_phrase points to: %c\n", *ptr_to_phrase);
	printf("ptr_to_phrase points to: %s\n", ptr_to_phrase);
	printf("\n");
	
	return 0;
}