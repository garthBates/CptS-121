/*
Garth Bates
Lab11
7/17/2018
*/

#include "lab11.h"


int main(void) {
	int digits = 0;
	int pal;
	char array[] = "mom";


	digits = sum_digits(123);
	printf("%d\n", digits);
	pal = palindrome(array, 0, 2);
	printf("%d\n", pal);


	return 0;
}