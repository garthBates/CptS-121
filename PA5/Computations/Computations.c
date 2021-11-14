/*
Programmer: Garth Bates
Class: CptS 121, Summer 2018
Programming Assignment: PA5
Date: 6/28/2018
Discription:
*/

#include "Computations.h"


/*
Funtion: open_file()
Description: Opens the input file
Input parameters: Void
Returns: the infile for reading
Preconditions: numbers.txt must exist
Postconditions: none
*/
FILE * open_file(void) {
	FILE* infile = NULL;
	infile = fopen("numbers.txt", "r");
}

/*
Funtion: read_number()
Description: reads one number from the infile
Input parameters: *infile
Returns: one integer
Preconditions: numbers.txt must exist
Postconditions: none
*/
int read_number(FILE *infile) {
	//fscanf(infile, "%d", *number);
	int num;
	fscanf(infile, "%d", &num);
	return num;
}

/*
Funtion: sum_digits()
Description: Adds all the digits of the number
Input parameters: int number, int *sum
Returns: Sum
Preconditions: number and sum must exist
Postconditions: none
*/
void sum_digits(int number, int *sum) {
	int rem = 1;
	while (rem != 0) {
		rem = number % 10;
		sum += rem;
		number = number / 10;
	}
	sum -= 1;
}

/*
Funtion: is_odd_number()
Description: Checks if the number is odd
Input parameters: int number, int *is_odd
Returns: 1 if odd 0 if even
Preconditions: number and is_odd must exist
Postconditions: none
*/
void is_odd_number(int number, int *is_odd) {
	if (number % 2 == 1) {
		is_odd = 1;
	}
}

/*
Funtion: is_prime_number()
Description: Checks if the number is prime
Input parameters: int number, int *is_prime
Returns: 1 if prime, 0 if not
Preconditions: number and is_prime must exist
Postconditions: none
*/
void is_prime_number(int number, int *is_prime) {
	for (int i = 2; i <= number / 2; ++i) {
		if (number % i == 0) {
			is_prime = 0;  //not prime
		}
		else {
			is_prime = 1;
		}
	}
}

/*
Funtion: open_file()
Description: Opens the input file
Input parameters: Void
Returns: the infile for reading
Preconditions: numbers.txt must exist
Postconditions: none
*/
void is_multiple(int number, int *is_multiple_7_11_13) {
	if (number % 7 == 0 || number % 11 == 0 || number % 13 == 0) {
		return 1;
	}
	else {
		return 0;
	}
}

/*
Funtion: print_answers_to_questions()
Description: Prints the answers to various questions, like the meaning of life, which is 42
Input parameters: int number, int is_multiple_7_11_13, int is_sum_odd, int is_prime
Returns: none
Preconditions: all other functions must have run first
Postconditions: none
*/
void print_answers_to_questions(int number, int is_multiple_7_11_13, int is_sum_odd, int is_prime) {
	printf("Number: %d\n", number);
	if (is_multiple_7_11_13 == 1) {
		printf("%d is a multiple of 7 ,11, or 13.\n", number);
	}
	else {
		printf("%d is not a multiple of 7 ,11, or 13.\n", number);
	}

	if (is_sum_odd == 1) {
		printf("%d's summed digits is an odd number.\n", number);
	}
	else {
		printf("%d's summed digits is an even number.\n", number);
	}

	if (is_prime == 1) {
		printf("%d is a prime number.\n\n", number);
	}
	else {
		printf("%d is not a prime number.\n\n", number);
	}
}