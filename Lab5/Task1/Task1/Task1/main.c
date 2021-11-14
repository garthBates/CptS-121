/*
Prgrammer: Garth Bates
Class: CptS 121, Summer 2018
Lab 5 Task 1
*/


#include "task1.h"

int main(void) {
	int total;

	FILE *infile = open_input_file();
	total = sum(infile);
	printf("%d\n\n", total);

	if (total < 15000) {
		printf("l\n\n");
	}
	else if (total >= 15000 && total < 200000) {
		printf("m\n\n");
	}
	else {
		printf("h\n\n");
	}

	return(0);
}