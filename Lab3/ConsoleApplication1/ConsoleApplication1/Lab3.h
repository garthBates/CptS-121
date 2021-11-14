/*
Garth Bates
Cpts 121
Lab3
6/14/2018
*/

#ifndef Lab3
#define Lab3

#include <stdio.h>

#define NEWLINE 1
#define NOT_NEWLINE 0


FILE * open_input_file(void);
char read_character(FILE *infile);
int determine_ascii_value(char character);
int is_line(char character);
int number_lines(char character, int current_number_lines);
//int is_vowel(char character);
//int number_vowels(char character, int current_number_vowels);
//int is_digit(char character);
//int number_digits(char character, int current_number_digits);
//nt is_alpha(char character);
//int number_alphas(char character, int current_number_alphas);
//int is_lower(char character);
//int number_lowers(char character, int current_number_lowers);
//int is_upper(char character);
//int number_uppers(char character, int current_number_uppers);
//int is_space(char character);
//int number_spaces(char character, int current_number_spaces);
//int is_alnum(char character);
//int number_alnums(char character, int current_number_alnums);
//int is_punct(char character);
//int number_puncts(char character, int current_number_puncts);
//void print_int(FILE *outfile, int number);
//void print_stats(FILE *outfile, char header[], int number);

#endif
