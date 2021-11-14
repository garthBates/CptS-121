/*
Garth Bates
Cpts 121
Lab3
6/14/2018
*/

#include "Lab3.h"


int main(void) {
	char character;
	int ascii_val = 0;
	int line = 0;

	FILE * infile = open_input_file();
	character = read_character(infile);
	ascii_val = determine_ascii_value(character);
	line = is_line(character);





	return(0);
}

