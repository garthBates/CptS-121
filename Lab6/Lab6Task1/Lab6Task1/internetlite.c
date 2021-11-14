/*
Garth Bates
6/26/2018
CptS: 121, Summer 2018
Lab6 Task1
*/

#include "internetlite.h"


FILE * open_input_file(void) {
	FILE* infile = NULL;
	infile = fopen("usage.txt", "r");
}

void read_date(FILE *infile, FILE *outfile) {
	int month;
	int year;
	fscanf(infile, "%d %d", &month, &year);
	fprintf(outfile, "Charges for %d/%d\n\n", month, year);	
}

void charges(double usage, double * ratep, double * avg_ratep) {
	if (usage <= 10.0) {
		*ratep = 7.99;
	}
	else {
		*ratep = usage * 1.99 + 7.99;
	}

	*avg_ratep = *ratep / usage;
	return;
}


double round_money(double *ratep) {
	double total = 0;
	total = *ratep * 100;
	total = total / 100;
	return total;
}

void read_user_data(FILE *infile, FILE *outfile, double * ratep, double * avg_ratep) {
	double usage = 0.0;
	int user_num;
	double total;
	fscanf(infile, "%d %lf", &user_num, &usage);
	charges(usage, ratep, avg_ratep);
	total = round_money(ratep);
	fprintf(outfile, "%d\t\t%.2lf\t\t%.2lf\t\t%.2lf\n", user_num, usage, total, avg_ratep);

}