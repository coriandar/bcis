#include <stdio.h>

int main(void)
{
	int whole_number = 25;
	float real_number = 7.5f;
	char one_letter = 'k';
	char phrase[] = "Week 8 Example";
	
	printf("whole_number has a value of: %d\n", whole_number);
	printf("whole_number is stored at: %p\n", &whole_number);
	printf("\n");
	
	printf("real_number has a value of: %f\n", real_number);
	printf("real_number is stored at: %p\n", &real_number);
	printf("\n");
	
	printf("one_letter has a value of: %c\n", one_letter);
	printf("one_letter is stored at: %p\n", &one_letter);
	printf("\n");
	
	printf("phrase has a value of: %c\n", *phrase);
	printf("phrase is a C-string: %s\n", phrase);
	printf("phrase is stored at: %p\n", &phrase);
	printf("&phrase and phrase are the same: %p\n", phrase);
	printf("\n");
	
	return 0;
}