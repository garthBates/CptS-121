#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


typedef struct {
	char name[50];
	int st_id;
	double gpa;
	char major[25];
} student;

FILE * open_input_file(void);
void print_list_recurs(student students[], int start, int len);

#endif
