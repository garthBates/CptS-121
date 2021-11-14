/*
Programmer: Garth Bates
Class: CptS 121, Summer 2018
Programming Assignment: PA5
Date: 6/28/2018
Discription: Runs three different computations of a set of number read in.
*/

/*
****************************************************
******************** BONUS 5pts ********************

2pts:	include a structure chart, either as a resource file (e.g. pdf, image,etc) or in this comment block
1pt	:	include your algorithim/pseudocode for your program  in this comment block
2pts:	include a flow chart of your program logic/flow, either as a resource file (e.g. pdf, image,etc) or in this comment block

****************************************************
****************************************************
*/


#include "Computations.h"

int main(void)
{
	int number = 0;
	int numberp = 0;
	int sum = 0;
	int sump = 0;
	int is_odd = 0;
	int is_oddp = 0;
	int is_prime = 0;
	int is_primep = 0;
	int is_mult = 0;
	int is_multiplep = 0;
	int input_ok = 1;

	numberp = &number;
	sump = &sum;
	is_oddp = &is_odd;
	is_primep = &is_prime;
	is_multiplep = &is_mult;

	FILE *infile = open_file();
	
	while (input_ok != EOF) {
		number = read_number(infile);
		sum_digits(number, sump);
		is_odd_number(sum, is_oddp);
		is_multiple(number, is_multiplep);
		print_answers_to_questions(number, is_mult, is_odd, is_prime);
	}

	system("pause"); //pauses the output console...even on debugging! note: requires stdlib.h
	return 0;
}