#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef struct tagBusTime
{
	int hours;
	int minutes;
} BusTime;

typedef struct tagBusRoute
{
	char departure_place[32];
	char arrival_place[32];
	BusTime depart;
	BusTime arrive;
} BusRoute;

void print_bus_time(BusTime *p_bus_time)
{
	printf("%02d:%02d\n", p_bus_time->hours, p_bus_time->minutes);
}

void print_bus_route(BusRoute *p_route)
{
	printf("Departs: %s ", p_route->departure_place);
	printf("at: ");
	print_bus_time(&p_route->depart);
	printf("Arrives: %s ", p_route->arrival_place);
	printf("at: ");
	print_bus_time(&p_route->arrive);
}

int main(void)
{
	BusRoute next_shuttle;
	
	strcpy(next_shuttle.departure_place, "Mayoral Drive");
	strcpy(next_shuttle.arrival_place, "South Campus");
	next_shuttle.depart.hours = 16;
	next_shuttle.depart.minutes = 15;
	next_shuttle.arrive.hours = 17;
	next_shuttle.arrive.minutes = 5;
	
	print_bus_route(&next_shuttle);
	
	return 0;
}