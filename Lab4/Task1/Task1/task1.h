/*
Programmer: Garth Bates
Class: CptS 121, Summer 2018
Date: 6/19/2018
Program: Calorie Calculator
*/

#ifndef Task1
#define Task1

#include <stdio.h>
#include <math.h>

double calculate_male_BMR(int weight, int height, int age);
double calculate_female_BMR(int weight, int height, int age);
int selection();
int read_stat(FILE *infile);
char read_gender(FILE *infile);
FILE * open_input_file(void);

#endif Task1 