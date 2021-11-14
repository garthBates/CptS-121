/*
Programmer: Garth Bates
Class: CptS 121, Summer 2018
Date: 6/19/2018
Program: Calorie Calculator
*/


#include "task1.h"

int main(void) {
	double bmr;
	char gender;
	int weight;
	int height;
	int age;
	int selec;
	double calories;

	FILE * infile = open_input_file();
	gender = read_gender(infile);
	weight = read_stat(infile);
	height = read_stat(infile);
	age = read_stat(infile);

	if (gender == 'm') {
		bmr = calculate_male_BMR(weight, height, age);
		printf("Your BMR is: %.2lf\n\n", bmr);
	}
	else {
		bmr = calculate_female_BMR(weight, height, age);
		printf("Your BMR is: %.2lf\n\n", bmr);
	}

	selec = selection();
	if (selec == 1) {
		calories = bmr * 1.2;
		printf("Your reccomended calories is: %.2lf\n\n", calories);
	}
	else if (selec == 2) {
		calories = bmr * 1.375;
		printf("Your reccomended calories is: %.2lf\n\n", calories);
	}
	else if (selec == 3) {
		calories = bmr * 1.55;
		printf("Your reccomended calories is: %.2lf\n\n", calories);
	}
	else if (selec == 4) {
		calories = bmr * 1.725;
		printf("Your reccomended calories is: %.2lf\n\n", calories);
	}
	else if (selec == 5) {
		calories = bmr * 1.9;
		printf("Your reccomended calories is: %.2lf\n\n", calories);
	}
	else {
		printf("You suck.\n\n");
	}


	return(0);
}