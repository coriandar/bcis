/*
//IMPLEMENTATION:
Program takes values in from and array and prints into the time format.

//DESIGN:
Structure would be better, allows only passing through one. Array need to pass in each.
Structure members are all related, H, M, S.
*/

#include <stdio.h>

struct Time
{
	int hours;
	int minutes;
	int seconds;
};

/*
// changed to take in 3 pointers
void print_time(int time[2])
{
	// Prints in the from HH:MM:SS
	//change to '\n'
	printf("%2d:%2d:%2d:n", time[2], time[1], time[0]);
}
*/

void print_time(struct Time* start_time);

int main(void)
{
	/*
	// A struct would be better
	int start_time[3];

	// 0 to 2 = array size of 3
	// do no leading zero.
	start_time[0] = 10; // Hours
	start_time[1] = 05; // Minutes
	start_time[2] = 00; // Seconds

	print_time(start_time);
	*/

	struct Time start_time;
	struct Time* p_start_time = &start_time;

	p_start_time->hours = 10;
	p_start_time->minutes = 5;
	p_start_time->seconds = 5;

	print_time(p_start_time);

	return 0;
}

void print_time(struct Time* start_time)
{
	printf("%02d:", start_time->hours);
	printf("%02d:", start_time->minutes);
	printf("%02d\n", start_time->seconds);
}