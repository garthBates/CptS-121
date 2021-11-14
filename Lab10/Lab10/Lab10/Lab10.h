/*
Garth Bates
CptS 121, Summer 2018
Lab 10
7/12/2018
*/


#ifndef LAB10
#define LAB10

#include <stdio.h>
#include <math.h>
#include <string.h>


typedef enum {
	N, S, E, W
} direction;

typedef struct {
	int degrees;
	int minutes;
	double seconds;
	char dirct;
} lat_long_t;

typedef struct {
	char name[100];
	lat_long_t latitude;
	lat_long_t longitude;
} location_t;

typedef enum {
	car, suv, truck
} body_type;

typedef struct {
	char make[50];
	char model[50];
	body_type body;
};

void print_location(location_t location);

#endif