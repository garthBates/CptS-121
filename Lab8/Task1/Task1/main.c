/*
Garth Bates
7/3/2018
CptS: 121, Summer 2018
Lab8 Task2
*/


#include "Task2.h"


int main(void) {
	int num;
	int num_array[15];
	int avg;
	int *avgp;
	int med;
	int *medp;
	medp = &med;
	avgp = &avg;

	FILE *infile = open_input_file();

	for (int i = 0; i < 15; i++) {
		num = read_num(infile);
		num_array[i] = num;
	}

	compute_mean(avgp, num_array);
	compute_median(medp, num_array);

	return (0);
}