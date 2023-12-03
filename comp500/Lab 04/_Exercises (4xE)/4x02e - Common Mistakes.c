//ERRORS
//Identified in comments of source code.

//DEBUGGING
//Reading line by line.
//After changing segments test and move to next.
// C4129: '!' unrecognized character escape sequence. Removed \.

//LEARNT
//Alternate way to subtract.
//int mins_attended = total_lab_mins;
//mins_attended -= min_missed[0];
//mins_attended -= min_missed[1];
//mins_attended -= min_missed[2];

// change to include <stdio.h>
#include <stdio.h>

//lower case int main, no semicolon
int main(void)
{
	const int mins_per_lab = 170;
	const int num_labs_so_far = 3;

	//needs to be min_missed[3].
	int min_missed[3];

	//need to be c-string.
	char student_name[100] = "\0";

	//const cannot change, should be variable.
	int total_lab_mins = num_labs_so_far * mins_per_lab;

	printf("What is your name? ");

	//scanf....&student_name
	scanf("%99s", student_name);

	//new line
	printf("\nHow many minutes have you missed from...\n");

	//array start from 0. do not %d\n. Missing &min...
	printf("Week 1 Lab Tutorial? ");
	scanf("%d", &min_missed[0]);

	printf("Week 2 Lab Tutorial? ");
	scanf("%d", &min_missed[1]);

	printf("Week 3 Lab Tutorial? ");
	scanf("%d", &min_missed[2]);

	//need total - (sum of min_missed)
	//int sum_mins_missed = min_missed[0] + min_missed[1] + min_missed[2];
	//int mins_attended = total_lab_mins - sum_mins_missed;	
	
	int mins_attended = total_lab_mins;

	//to early, moved down.
	mins_attended -= min_missed[0];
	mins_attended -= min_missed[1];
	mins_attended -= min_missed[2];
		
	//lower case printf. Intger %d not float.
	// \n, inside ". Missing \n at front. add variable at end.
	printf("\nYou have attended %d minutes so far.\n", mins_attended);

	int sum_mins_missed = 0;
	sum_mins_missed += min_missed[0];
	sum_mins_missed += min_missed[1];
	sum_mins_missed += min_missed[2];

	//need to divide sum of min_missed by num_labs_so_far.
	int average_minutes_missed = sum_mins_missed / num_labs_so_far;

	//variables, escape sequence, identified after running debug.
	printf("On average %s missed %d minutes per lab!\n", student_name, average_minutes_missed);
	
	//change min_attended & total_lab_mins to float.
	float percentage_attended = ((mins_attended * 1.0f) / (total_lab_mins * 1.0f)) * 100.0f;

	//printf, percentage_attended. missing student_name. missing esc seq, %%.
	printf("So far, %s's attendance is %.2f%%\n", student_name, percentage_attended);

	return 0;
}