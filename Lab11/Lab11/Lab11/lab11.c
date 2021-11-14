/*
Garth Bates
Lab11
7/17/2018
*/

#include "lab11.h"


int sum_digits(int n) {
	if (n == 0) {
		return 0;
	}
	return (n % 10 + sum_digits(n / 10));
}

int palindrome(char array[], int x, int y) {
	{
		if (array[x] != array[y])
			return 0;
		else if (x == y)
			return 1;
		else
			return palindrome(array, ++x, --y);

		return 0;

	}
}