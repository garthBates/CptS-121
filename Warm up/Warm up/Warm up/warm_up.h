/*
Garth Bates
CptS 121, Summer, 2018
Warm-up
7/12/2018
*/

#ifndef WARMUP
#define WARMUP

#include <stdio.h>
#include <math.h>
#include <string.h>

typedef enum {
	anthropology, biology, chemistry, english, compsci, polisci,
	psychology, physics, engineering, sociology
} class_name;

typedef enum {
	book1, book2, book3
} text_book;

typedef enum {
	Carrier, Battleship, Destroyer, Submarine, Cruiser
} ship_type;


typedef struct {
	class_name my_class;
	text_book my_book;
	int num_students;
} course_t;

typedef struct {
	ship_type ship;
	int size;
	char id;
} ship_t;

void print_course(course_t);
course_t get_course();
int compare_struct(course_t *course1, course_t *course2);


#endif