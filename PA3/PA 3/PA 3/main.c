/*
Programmer: Garth Bates
Class: CptS 121, Summer 2018
Programming Assignment: PA2
Date: 6/20/2018
Discription:
*/


#include "pa3.h"


int main(void) {

	//Initalizing variables
	int std_id;
	double gpa1;
	double gpa2;
	double gpa3;
	double gpa4;
	double gpa5;
	int stand1;
	int stand2;
	int stand3;
	int stand4;
	int stand5;
	double age1;
	double age2;
	double age3;
	double age4;
	double age5;
	double gpa_min;
	double gpa_max;
	double gpa_mean;
	double stand_mean;
	double age_mean;
	double gpa1_dev;
	double gpa2_dev;
	double gpa3_dev;
	double gpa4_dev;
	double gpa5_dev;
	double gpa_var;
	double gpa_stdev;


	FILE* infile = NULL;
	infile = fopen("input.dat", "r");

	FILE* outfile = NULL;
	outfile = fopen("output.dat", "w");

	//Stats for student 1
	std_id = read_integer(infile);
	gpa1 = read_double(infile);
	stand1 = read_integer(infile);
	age1 = read_double(infile);

	//Stats for student 2
	std_id = read_integer(infile);
	gpa2 = read_double(infile);
	stand2 = read_integer(infile);
	age2 = read_double(infile);

	//Stats for student 3
	std_id = read_integer(infile);
	gpa3 = read_double(infile);
	stand3 = read_integer(infile);
	age3 = read_double(infile);

	//Stats for student 4
	std_id = read_integer(infile);
	gpa4 = read_double(infile);
	stand4 = read_integer(infile);
	age4 = read_double(infile);

	//Stats for student 5
	std_id = read_integer(infile);
	gpa5 = read_double(infile);
	stand5 = read_integer(infile);
	age5 = read_double(infile);

	//Caluatling Sums
	gpa_mean = calculate_sum(gpa1, gpa2, gpa3, gpa4, gpa5);
	stand_mean = calculate_sum(stand1, stand2, stand3, stand4, stand5);
	age_mean = calculate_sum(age1, age2, age3, age4, age5);

	//Calculating and outputing mean values
	gpa_mean = calculate_mean(gpa_mean, 5);
	print_double(outfile, gpa_mean);

	stand_mean = calculate_mean(stand_mean, 5);
	print_double(outfile, stand_mean);

	age_mean = calculate_mean(age_mean, 5);
	print_double(outfile, age_mean);

	//Calculating the deviation for all GPAs
	gpa1_dev = calculate_deviation(gpa1, gpa_mean);
	gpa2_dev = calculate_deviation(gpa2, gpa_mean);
	gpa3_dev = calculate_deviation(gpa3, gpa_mean);
	gpa4_dev = calculate_deviation(gpa4, gpa_mean);
	gpa5_dev = calculate_deviation(gpa5, gpa_mean);

	//Calulating GPA variance
	gpa_var = calculate_variance(gpa1_dev, gpa2_dev, gpa3_dev, gpa4_dev, gpa5_dev, 5);

	//Calculating stand deviation og GPA and writing it to output.dat
	gpa_stdev = (gpa_var);
	print_double(outfile, gpa_stdev);

	//Calculating min and max for gpas and writing them to output.dat
	gpa_min = find_min(gpa1, gpa2, gpa3, gpa4, gpa5);
	gpa_max = find_max(gpa1, gpa2, gpa3, gpa4, gpa5);
	print_double(outfile, gpa_min);
	print_double(outfile, gpa_max);

	fclose(infile);
	fclose(outfile);

	return (0);
}