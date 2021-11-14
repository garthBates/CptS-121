/*
Garth Bates
7/3/2018
CptS: 121, Summer 2018
Lab8 Task2
*/


#include "Task2.h"


FILE * open_input_file(void) {
	FILE* infile = NULL;
	infile = fopen("numbers.txt", "r");
}

int read_num(FILE *infile) {
	int num;
	fscanf(infile, "%d", &num);
	return num;
}

void compute_mean(int *avgp, int num_array[]) {
	int sum = 0;
	for (int i = 0; i < 15; i++) {
		sum += num_array[i]; 
	}
	*avgp = sum / 15;
}

void compute_median(int *medp, int num_array[]) {
	int med_value = (15 + 1) / 2;
	*medp = num_array[med_value];
}