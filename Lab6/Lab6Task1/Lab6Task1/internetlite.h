/*
Garth Bates
6/26/2018
CptS: 121, Summer 2018
Lab6 Task1
*/

#ifndef INTERNETLITE
#define INTERNETLITE

#include <stdio.h>
#include <math.h>

FILE * open_input_file(void);
void read_date(FILE *infile, FILE *outfile);
void charges(double usage, double * ratep, double * avg_ratep);
double round_money(double *ratep);
void read_user_data(FILE *infile, FILE *outfile, double * ratep, double * avg_ratep);

#endif