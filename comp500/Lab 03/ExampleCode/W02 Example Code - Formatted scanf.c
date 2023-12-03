#include <stdio.h>

int main(void)
{
	int height  
	int weight  
	int age  
	  
	printf("Please enter your:\n")
	printf(" + Height in cm\n")
	printf(" + Weight in kg\n")
	printf(" + Age in years\n")
	printf("In the format: height-weight-age:")
	  
	scanf("%d-%d-%d", &height, &weight, &age) 
	  
	printf("\n")
	printf("%d years is %d months!\n", age, age * 12)
	  
	printf("%d kg is %d grams!\n", weight, weight * 1000)
	  
	float height_in_meters = height / 100.0f 
	  
	printf("%d cm is ", height)
	printf("%.2f meters!\n", height_in_meters)
	
	return 0
}