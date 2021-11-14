/*
Garth Bates
CptS 121, Summer 2018
Lab 10
7/12/2018
*/

#include "Lab10.h"

void print_location(location_t location) {
	printf("%s\n", location.name);
	printf("%d, ", location.latitude.degrees); 
	printf("%d, ", location.latitude.minutes);
	printf("%.2lf ", location.latitude.seconds);
	printf("%c\n", location.latitude.dirct);
	printf("%d, ", location.longitude.degrees);
	printf("%d, ", location.longitude.minutes);
	printf("%.2lf ", location.longitude.seconds);
	printf("%c\n", location.longitude.dirct);
}