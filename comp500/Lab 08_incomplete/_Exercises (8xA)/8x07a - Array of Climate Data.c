/*
//LEARNT
More about passing structures. Including it in modularity, computation tasks.
Used pointer for first time. Probably not best way though.
Arrays within structure, return structure.

//ERRORS:
Feels a bit messy.

//BIBLIOGRAPHY
pg. 250 Sams Teach Yourself
*/

#include <stdio.h>

struct Climate_Data
{
	char month[15];
	float record_high;
	float daily_mean;
	float record_low;
};

struct Avg_Climate_Data
{
	float average_record_high;
	float average_daily_mean;
	float average_record_low;
};

struct Highest_Climate_Data
{
	float highest_record_high;
	float highest_daily_mean;
	float highest_record_low;
};

struct Lowest_Climate_Data
{
	float lowest_record_high;
	float lowest_daily_mean;
	float lowest_record_low;
};

struct Delta_Climate_Data
{
	float delta[12];
};

void set_climate_data_auk(struct Climate_Data auckland[]);
void set_climate_data_chch(struct Climate_Data christchurch[]);

void print_climate_data(struct Climate_Data city);
void print_yearly_climate(struct Climate_Data city[]);
void print_avg_climate_data(struct Avg_Climate_Data average_climate);
void print_high_climate_data(struct Highest_Climate_Data highest);
void print_low_climate_data(struct Lowest_Climate_Data lowest);
void print_month_delta(struct Delta_Climate_Data month_delta);

struct Avg_Climate_Data compute_avg_climate(struct Climate_Data city_1[], struct Climate_Data city_2[]);
struct Highest_Climate_Data compute_highest_value(struct Climate_Data city_1[], struct Climate_Data city_2[]);
struct Lowest_Climate_Data compute_lowest_value(struct Climate_Data city_1[], struct Climate_Data city_2[]);
struct Delta_Climate_Data compute_delta_month(struct Climate_Data city[]);

const char DEGREE_SYMBOL = 248;

int main(void)
{
	struct Climate_Data auckland[12];
	struct Climate_Data christchurch[12];
	set_climate_data_chch(christchurch);
	set_climate_data_auk(auckland);
	
	struct Avg_Climate_Data average_climate;
	average_climate = compute_avg_climate(auckland, christchurch);

	struct Highest_Climate_Data highest;
	highest = compute_highest_value(auckland, christchurch);

	struct Lowest_Climate_Data lowest;
	lowest = compute_lowest_value(auckland, christchurch);

	struct Delta_Climate_Data month_delta_auk;
	month_delta_auk = compute_delta_month(auckland);

	struct Delta_Climate_Data month_delta_chch;
	month_delta_chch = compute_delta_month(christchurch);

	print_avg_climate_data(average_climate);
	print_high_climate_data(highest);
	print_low_climate_data(lowest);

	printf("Auckland Delta - \n");
	print_month_delta(month_delta_auk);

	printf("Christchurch Delta - \n");
	print_month_delta(month_delta_chch);
	
	return 0;
}

struct Delta_Climate_Data compute_delta_month(struct Climate_Data city[])
{
	struct Delta_Climate_Data delta_month;
	struct Delta_Climate_Data* p_delta_month = &delta_month;

	for (int current_month = 0; current_month < 12; current_month++)
	{
		p_delta_month->delta[current_month] = city[current_month].record_high - city[current_month].record_low;
	}

	return delta_month;
}

struct Lowest_Climate_Data compute_lowest_value(struct Climate_Data city_1[], struct Climate_Data city_2[])
{
	struct Lowest_Climate_Data computed_l;
	struct Lowest_Climate_Data* p_computed_l = &computed_l;

	p_computed_l->lowest_record_high = city_1[0].record_high;
	p_computed_l->lowest_daily_mean = city_1[0].daily_mean;
	p_computed_l->lowest_record_low = city_1[0].record_low;

	for (int current_month = 0; current_month < 12; current_month++)
	{
		//computes lowest_record_high from city 1
		if (p_computed_l->lowest_record_high > city_1[current_month].record_high)
		{
			p_computed_l->lowest_record_high = city_1[current_month].record_high;
		}

		//compares to lowest_record_high from city 2
		if (p_computed_l->lowest_record_high > city_2[current_month].record_high)
		{
			p_computed_l->lowest_record_high = city_2[current_month].record_high;
		}

		//computes lowest_daily_mean from city 1
		if (p_computed_l->lowest_daily_mean > city_1[current_month].daily_mean)
		{
			p_computed_l->lowest_daily_mean = city_1[current_month].daily_mean;
		}

		//compares to lowest_daily_mean from city 2
		if (p_computed_l->lowest_daily_mean > city_2[current_month].daily_mean)
		{
			p_computed_l->lowest_daily_mean = city_2[current_month].daily_mean;
		}

		//computes lowest_record_low from city 1
		if (p_computed_l->lowest_record_low > city_1[current_month].record_low)
		{
			p_computed_l->lowest_record_low = city_1[current_month].record_low;
		}

		//compares to lowest_record_low from city 2
		if (p_computed_l->lowest_record_low > city_2[current_month].record_low)
		{
			p_computed_l->lowest_record_low = city_2[current_month].record_low;
		}
	}

	return computed_l;
}

struct Highest_Climate_Data compute_highest_value(struct Climate_Data city_1[], struct Climate_Data city_2[])
{
	struct Highest_Climate_Data computed_h;
	struct Highest_Climate_Data* p_computed_h = &computed_h;

	p_computed_h->highest_record_high = 0.0f;
	p_computed_h->highest_daily_mean = 0.0f;
	p_computed_h->highest_record_low = 0.0f;

	for (int current_month = 0; current_month < 12; current_month++)
	{
		//computes highest_record_high from city 1
		if (p_computed_h->highest_record_high < city_1[current_month].record_high)
		{
			p_computed_h->highest_record_high = city_1[current_month].record_high;
		}

		//compares to highest_record_high from city 2
		if (p_computed_h->highest_record_high < city_2[current_month].record_high)
		{
			p_computed_h->highest_record_high = city_2[current_month].record_high;
		}

		//computes highest_daily_mean from city 1
		if (p_computed_h->highest_daily_mean < city_1[current_month].daily_mean)
		{
			p_computed_h->highest_daily_mean = city_1[current_month].daily_mean;
		}

		//compares to highest_daily_mean from city 2
		if (p_computed_h->highest_daily_mean < city_2[current_month].daily_mean)
		{
			p_computed_h->highest_daily_mean = city_2[current_month].daily_mean;
		}

		//computes highest_record_low from city 1
		if (p_computed_h->highest_record_low < city_1[current_month].record_low)
		{
			p_computed_h->highest_record_low = city_1[current_month].record_low;
		}

		//compares to highest_record_low from city 2
		if (p_computed_h->highest_record_low < city_2[current_month].record_low)
		{
			p_computed_h->highest_record_low = city_2[current_month].record_low;
		}
	}

	return computed_h;
}

struct Avg_Climate_Data compute_avg_climate(struct Climate_Data city_1[], struct Climate_Data city_2[])
{
	struct Avg_Climate_Data computed_avg;
	struct Avg_Climate_Data* p_computed_avg = &computed_avg;

	p_computed_avg->average_record_high = 0.0f;
	p_computed_avg->average_daily_mean = 0.0f;
	p_computed_avg->average_record_low = 0.0f;

	for (int current_month = 0; current_month < 12; current_month++)
	{
		p_computed_avg->average_record_high += city_1[current_month].record_high;
		p_computed_avg->average_record_high += city_2[current_month].record_high;

		p_computed_avg->average_daily_mean += city_1[current_month].daily_mean;
		p_computed_avg->average_daily_mean += city_2[current_month].daily_mean;

		p_computed_avg->average_record_low += city_1[current_month].record_low;
		p_computed_avg->average_record_low += city_2[current_month].record_low;
	}

	p_computed_avg->average_record_high /= 2.0f;
	p_computed_avg->average_daily_mean /= 2.0f;
	p_computed_avg->average_record_low /= 2.0f;
	
	return computed_avg;
}

void print_month_delta(struct Delta_Climate_Data month_delta)
{
	for (int current_month = 0; current_month < 12; current_month++)
	{
		printf(" - Month %02d: ", current_month + 1);
		printf("%.1f %cC\n", month_delta.delta[current_month], DEGREE_SYMBOL);
	}

	printf("\n");
}

void print_low_climate_data(struct Lowest_Climate_Data lowest)
{
	printf(" - Lowest Record High: ");
	printf("%.1f %cC\n", lowest.lowest_record_high, DEGREE_SYMBOL);
	printf(" - Lowest Daily Mean: ");
	printf("%.1f %cC\n", lowest.lowest_daily_mean, DEGREE_SYMBOL);
	printf(" - Lowest Record Low: ");
	printf("%.1f %cC\n", lowest.lowest_record_low, DEGREE_SYMBOL);
	printf("\n");
}

void print_high_climate_data(struct Highest_Climate_Data highest)
{
	printf(" - Highest Record High: ");
	printf("%.1f %cC\n", highest.highest_record_high, DEGREE_SYMBOL);
	printf(" - Highest Daily Mean: ");
	printf("%.1f %cC\n", highest.highest_daily_mean, DEGREE_SYMBOL);
	printf(" - Highest Record Low: ");
	printf("%.1f %cC\n", highest.highest_record_low, DEGREE_SYMBOL);
	printf("\n");
}

void print_avg_climate_data(struct Avg_Climate_Data average_climate)
{
	printf(" - Average Record High: ");
	printf("%.1f %cC\n", average_climate.average_record_high, DEGREE_SYMBOL);
	printf(" - Average Daily Mean: ");
	printf("%.1f %cC\n", average_climate.average_daily_mean, DEGREE_SYMBOL);
	printf(" - Average Record Low: ");
	printf("%.1f %cC\n", average_climate.average_record_low, DEGREE_SYMBOL);
	printf("\n");
}

void print_yearly_climate(struct Climate_Data city[])
{
	for (int current_month = 0; current_month < 12; current_month++)
	{
		print_climate_data(city[current_month]);
		printf("\n");
	}
}

void print_climate_data(struct Climate_Data city)
{
	printf("%s\n", city.month);
	printf(" - Record High: ");
	printf("%.1f %cC\n", city.record_high, DEGREE_SYMBOL);
	printf(" - Daily Mean: ");
	printf("%.1f %cC\n", city.daily_mean, DEGREE_SYMBOL);
	printf(" - Record Low: ");
	printf("%.1f %cC\n", city.record_low, DEGREE_SYMBOL);
}

void set_climate_data_auk(struct Climate_Data auckland[])
{
	sprintf(auckland[0].month, "January");
	auckland[0].record_high = 30.0f;
	auckland[0].daily_mean = 19.1f;
	auckland[0].record_low = 5.6f;

	sprintf(auckland[1].month, "February");
	auckland[1].record_high = 30.5f;
	auckland[1].daily_mean = 19.7f;
	auckland[1].record_low = 8.7f;

	sprintf(auckland[2].month, "March");
	auckland[2].record_high = 29.8f;
	auckland[2].daily_mean = 18.4f;
	auckland[2].record_low = 6.6f;

	sprintf(auckland[3].month, "April");
	auckland[3].record_high = 26.0f;
	auckland[3].daily_mean = 16.1f;
	auckland[3].record_low = 3.9f;

	sprintf(auckland[4].month, "May");
	auckland[4].record_high = 24.6f;
	auckland[4].daily_mean = 14.0f;
	auckland[4].record_low = 0.9f;

	sprintf(auckland[5].month, "June");
	auckland[5].record_high = 23.8f;
	auckland[5].daily_mean = 11.8f;
	auckland[5].record_low = -1.1f;

	sprintf(auckland[6].month, "July");
	auckland[6].record_high = 19.0f;
	auckland[6].daily_mean = 10.9f;
	auckland[6].record_low = -3.9f;

	sprintf(auckland[7].month, "August");
	auckland[7].record_high = 20.6f;
	auckland[7].daily_mean = 11.3f;
	auckland[7].record_low = -1.7f;

	sprintf(auckland[8].month, "September");
	auckland[8].record_high = 22.0f;
	auckland[8].daily_mean = 12.7f;
	auckland[8].record_low = 1.7f;

	sprintf(auckland[9].month, "October");
	auckland[9].record_high = 23.6f;
	auckland[9].daily_mean = 14.2f;
	auckland[9].record_low = -0.6f;

	sprintf(auckland[10].month, "November");
	auckland[10].record_high = 25.9f;
	auckland[10].daily_mean = 15.7f;
	auckland[10].record_low = 4.4f;

	sprintf(auckland[11].month, "December");
	auckland[11].record_high = 28.3f;
	auckland[11].daily_mean = 17.8f;
	auckland[11].record_low = 7.0f;
}

void set_climate_data_chch(struct Climate_Data christchurch[])
{
	sprintf(christchurch[0].month, "January");
	christchurch[0].record_high = 35.9f;
	christchurch[0].daily_mean = 17.1f;
	christchurch[0].record_low = 3.0f;

	sprintf(christchurch[1].month, "February");
	christchurch[1].record_high = 40.0f;
	christchurch[1].daily_mean = 16.8f;
	christchurch[1].record_low = 1.5f;

	sprintf(christchurch[2].month, "March");
	christchurch[2].record_high = 25.9f;
	christchurch[2].daily_mean = 15.0f;
	christchurch[2].record_low = -0.2f;

	sprintf(christchurch[3].month, "April");
	christchurch[3].record_high = 29.9f;
	christchurch[3].daily_mean = 12.1f;
	christchurch[3].record_low = -4.0f;

	sprintf(christchurch[4].month, "May");
	christchurch[4].record_high = 27.3f;
	christchurch[4].daily_mean = 9.0f;
	christchurch[4].record_low = -6.4f;

	sprintf(christchurch[5].month, "June");
	christchurch[5].record_high = 22.5f;
	christchurch[5].daily_mean = 6.2f;
	christchurch[5].record_low = -7.2f;

	sprintf(christchurch[6].month, "July");
	christchurch[6].record_high = 22.4f;
	christchurch[6].daily_mean = 5.4f;
	christchurch[6].record_low = -6.8f;

	sprintf(christchurch[7].month, "August");
	christchurch[7].record_high = 22.8f;
	christchurch[7].daily_mean = 7.1f;
	christchurch[7].record_low = -6.7f;

	sprintf(christchurch[8].month, "September");
	christchurch[8].record_high = 26.2f;
	christchurch[8].daily_mean = 9.3f;
	christchurch[8].record_low = -4.4f;

	sprintf(christchurch[9].month, "October");
	christchurch[9].record_high = 30.1f;
	christchurch[9].daily_mean = 11.5f;
	christchurch[9].record_low = -4.2f;

	sprintf(christchurch[10].month, "November");
	christchurch[10].record_high = 32.0f;
	christchurch[10].daily_mean = 13.6f;
	christchurch[10].record_low = -2.6f;

	sprintf(christchurch[11].month, "December");
	christchurch[11].record_high = 36.0f;
	christchurch[11].daily_mean = 15.7f;
	christchurch[11].record_low = 0.1f;
}