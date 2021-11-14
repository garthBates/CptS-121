/*
Programmer: Garth Bates
Class: CptS 121, Summer 2018
Programming Assignment: PA2
Date: 6/20/2018
Discription:
*/

#include "pa3.h"


/*
Function: double read_double(FILE * infile)
Description: Reads one double precision number from the input file
Input parameter: It takes in the input file
Preconditions: Its assumed that there is a proper input with the information needed
Postconditions: It saved the double in a variable
*/

double read_double(FILE *infile) {
	double number;
	fscanf(infile, "%lf", &number);
	return number;
}

/*
Function: int read_integer(FILE *infile)
Description: Reads on integer number from the input file
Input parameter: In takes the input file
Preconditions: Its assumed that there is a proper input file with the information needed
Postcondition: Its saved the integer as a variable
*/

int read_integer(FILE *infile) {
	int number;
	fscanf(infile, "%d", &number);
	return number;
}

/*
Function: double calculate_sum(double number1, double number2, double number3, double number4, double number5)
Description: Finds the sum of all input numbers
Input parameters: Five double numbers
Preconditions: Its assumed five double values have been read into the program and have been saved in varables
Postconditions: Saves the sum as a variable
*/

double calculate_sum(double number1, double number2, double number3, double number4, double number5) {
	double sum;
	sum = number1 + number2 + number3 + number4 + number5;
	return sum;
}

/*
Function: double calculate_mean(double sum, int number)
Description: Finds the mean of the sum by dividing by the number and checks for dividing by zero
Input parameters: It takes in a sum value and a number to divide by
Precondtions: Its assumed the sum value is greater than one
Postcondtions: It returns the mean to a valid variable
*/

double calculate_mean(double sum, int number) {
	double mean;
	if (number == 0) {
		return -1.0;
	}
	else {
		mean = sum / number;
		return mean;
	}
}

/*
Funciton: double calculate_deviation(double number, double mean)
Description: Determines the deviation of number from the mean and returns the result.
Input parameters: a number and the mean
Preconditions: A valid mean and number must already exist
Postconditions: returns a double to a valid variable
*/

double calculate_deviation(double number, double mean) {
	double deviation;
	deviation = number - mean;
	return deviation;
}

/*
Function: double calculate_variance(double deviation1, double deviation2, double deviation3, double deviation4, double deviation5, int number)
Description: Determines the variance
Input parameters: five different deviations and a number
Preconditions: all variations must exist
Postconditions: returns the variance to a proper variable
*/

double calculate_variance(double deviation1, double deviation2, double deviation3, double deviation4, double deviation5, int number) {
	double variance;
	variance = (pow(deviation1, 2) + pow(deviation2, 2) + pow(deviation3, 2) + pow(deviation4, 2) + pow(deviation5, 2)) / number;
	return variance;
}

/*
Function: double calculate_standard_deviation(double variance)
Description: Calculates the standard deviation and returns the result
Input parameters: It takes in the variance
Preconditions: the variacne must already be calculated
Postconditions: Returns the standard deviaiton to a varaible
*/

double calculate_standard_deviation(double variance) {
	double stnd_dvt;
	stnd_dvt = sqrt(variance);
	return stnd_dvt;
}

/*
Function: double find_max(double number1, double number2, double number3, double number4, double number5)
Description: finds the maximum number
Input parameters: Five numbers
Preconditions: All parameters must already exist
Postconditions: Returns the max
*/

double find_max(double number1, double number2, double number3, double number4, double number5) {
	double max = number1;
	if(number2 > max) {
		max = number2;
	}
	if (number3 > max) {
		max = number3;
	}
	if (number4 > max) {
		max = number4;
	}
	else {
		max = number5;
	}
	return max;
}

/*
Function: double find_min(double number1, double number2, double number3, double number4, double number5)
Decription: Finds the minimum number
Input parameters: Five numbers
Precondtions: All parameters must already exist
Postconditions: Returns the min
*/

double find_min(double number1, double number2, double number3, double number4, double number5) {
	double min = number1;
	if (number2 < min) {
		min = number2;
	}
	if (number3 < min) {
		min = number3;
	}
	if (number4 < min) {
		min = number4;
	}
	else {
		min = number5;
	}
	return min;
}

/*
Function: void print_double(FILE *outfile, double number)
Decription: prints a double value to an out file
Input parameters: A desired outfile location and a number to print there
Precondtions: an outfile and number must already exist
Postconditions: None
*/

void print_double(FILE *outfile, double number) {
	fprintf(outfile, "%.2lf\n", number); 
}