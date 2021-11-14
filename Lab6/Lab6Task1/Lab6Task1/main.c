/*
Garth Bates
6/26/2018
CptS: 121, Summer 2018
Lab6 Task1
*/


#include "internetlite.h"

int main(void) {

	double usage;
	double rate;
	double avg_rate;
	double *ratep;
	double *avg_ratep;

	FILE *infile = open_input_file();
	FILE* outfile = NULL;
	outfile = fopen("output.txt", "w");
	ratep = &rate;
	avg_ratep = &avg_rate;
	  

	read_date(infile, outfile);
	fprintf(outfile, "Customer   Hours used     Total charge    Average charge per hour\n");
	
	while () {
		read_user_data(infile, outfile, ratep, avg_ratep);
	}

	return(0);

}