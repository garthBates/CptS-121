/*
Garth Bates
7/3/2018
CptS: 121, Summer 2018
Lab8 Task2
*/


#ifndef LAB8
#define LAB8

#include <stdio.h>

FILE * open_input_file(void);
int read_num(FILE *infile);
void compute_mean(int *avg, int num_array[]);
void compute_median(int *medp, int num_array[]);

#endif