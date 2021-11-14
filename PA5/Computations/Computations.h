/*
Programmer: Garth Bates
Class: CptS 121, Summer 2018
Programming Assignment: PA5
Date: 6/28/2018
Discription: 
*/

#ifndef COMPS
#define COMPS

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

//1. Is the value a multiple of 7, 11, or 13?
//2. Is the sum of the digits odd or even?
//3. Is the value a prime number ?
//void answer_questions(int number, int *is_multiple_7_11_13, int *is_sum_odd, int *is_prime);

/*Possible helper functions*/
FILE * open_file(void);
int read_number(FILE *infile);
void is_multiple(int number, int *is_multiple_7_11_13);
void print_answers_to_questions(int number, int is_multiple_7_11_13, int is_sum_odd, int is_prime);
void sum_digits(int number, int *sum);
void is_odd_number(int number, int *is_odd);
void is_prime_number(int number, int *is_prime);

#endif