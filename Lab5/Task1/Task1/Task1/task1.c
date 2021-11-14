/*
Prgrammer: Garth Bates
Class: CptS 121, Summer 2018
Lab 5 Task 1
*/


#include "task1.h"


FILE * open_input_file(void) {
	FILE* infile = NULL;
	infile = fopen("salaries.txt", "r");
}

int read_stat(FILE *infile) {
	int stat;
	fscanf(infile, "%d", &stat);
	return stat;
}

int sum(FILE *infile) {
	int salery = 0;
	int sum = 0;
	for (int i = 0; i <= 3; i++) {
		salery = read_stat(infile);
		sum = sum + salery;
	}
	return sum;
}