/*
Garth Bates
CptS 121, Summer 2018
Lab 10
7/12/2018
*/

#include "Lab10.h"


int main(void) {
	location_t eme = {"EME"};
	eme.latitude.degrees = 46;
	eme.latitude.minutes = 43;
	eme.latitude.seconds = 50.2;
	eme.latitude.dirct = 'N';
	eme.longitude.degrees = 177;
	eme.longitude.minutes = 10;
	eme.longitude.seconds = 9.1;
	eme.longitude.dirct = 'W';

	print_location(eme);
}