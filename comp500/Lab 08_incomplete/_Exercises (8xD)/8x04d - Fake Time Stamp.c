#include <stdio.h>
#include <time.h>
#include <stdlib.h>

// TODO: Declare time stamp structure here:
struct Time_Stamp
{
	int hours;
	int minutes;
	int seconds;
};

struct Time_Stamp generate_fake_time_stamp(void);
void print_time_stamp_24_hour(struct Time_Stamp ts);
void print_time_stamp_12_hour(struct Time_Stamp ts);

int generate_hours(void);
int generate_minutes(void);
int generate_seconds(void);

int main(void)
{
	srand(time(0));

	struct Time_Stamp fake;

	fake = generate_fake_time_stamp();

	print_time_stamp_24_hour(fake);
	print_time_stamp_12_hour(fake);


	printf("\n");
	fake = generate_fake_time_stamp();
	print_time_stamp_24_hour(fake);
	print_time_stamp_12_hour(fake);
	printf("\n");
	fake = generate_fake_time_stamp();
	print_time_stamp_24_hour(fake);
	print_time_stamp_12_hour(fake);
	printf("\n");

	fake = generate_fake_time_stamp();
	print_time_stamp_24_hour(fake);
	print_time_stamp_12_hour(fake);
	printf("\n");

	fake = generate_fake_time_stamp();
	print_time_stamp_24_hour(fake);
	print_time_stamp_12_hour(fake);

	return 0;
}

// TODO: Define functions here:

void print_time_stamp_24_hour(struct Time_Stamp ts)
{
	printf("\"24-Hour Clock\" ");
	printf("%02d", ts.hours);
	printf(":");
	printf("%02d", ts.minutes);
	printf(":");
	printf("%02d", ts.seconds);
	printf("\n");
}

void print_time_stamp_12_hour(struct Time_Stamp ts)
{
	int check = ts.hours;

	if (ts.hours > 12)
	{
		check -= 12;
	}

	printf("\"12-Hour Clock\" ");
	printf("%02d", check);
	printf(":");
	printf("%02d", ts.minutes);
	printf(":");
	printf("%02d ", ts.seconds);

	if (ts.hours > 12)
	{
		printf("PM");
	}
	else
	{
		printf("AM");
	}

	printf("\n");
}

struct Time_Stamp generate_fake_time_stamp(void)
{
	struct Time_Stamp generate_fake_time_stamp;

	generate_fake_time_stamp.hours = generate_hours();
	generate_fake_time_stamp.minutes = generate_minutes();
	generate_fake_time_stamp.seconds = generate_seconds();


	return generate_fake_time_stamp;
}

int generate_hours(void)
{
	return rand() % 24;
}

int generate_minutes(void)
{
	return rand() % 60;
}

int generate_seconds(void)
{
	return rand() % 60;
}