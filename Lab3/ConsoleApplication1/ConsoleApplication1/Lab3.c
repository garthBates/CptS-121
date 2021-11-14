/*
Garth Bates
Cpts 121
Lab3
6/14/2018
*/


#include "Lab3.h"

FILE * open_input_file(void) {
	FILE* infile = NULL;
	infile = fopen("input.dat", "r");
}

char read_character(FILE *infile) { 
	char single_char;
	fscanf(infile, "%c", &single_char);
	return single_char;

}

int determine_ascii_value(char character) {
	int ascii_val = 0;
	ascii_val = character;
	return ascii_val;

}

int is_line(char character) {
	if (character == 10) {
		return NEWLINE;
	}
	else {
		return NOT_NEWLINE;
	}
}
int number_lines(char character, int current_number_lines) {
	int line = is_line(character);
	int accum = 0;
	if (line == 1) {
		accum = 1;
	}
	return accum;
}
