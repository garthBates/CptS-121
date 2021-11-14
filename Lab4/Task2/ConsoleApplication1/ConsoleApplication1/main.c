/*
Garth Bates
Warm up
*/

#include <stdio.h>
#include <math.h>


int main(void) {

	int sum;
	int x = 1234;
	int r;
	int n;

	x = n;


	while (x != 0) {

		r = x % 10;
		sum = sum + r;
		x = x / 10;
	}

	printf("%d", sum);

	return(0);

}