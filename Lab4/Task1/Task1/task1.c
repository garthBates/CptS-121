/*
Programmer: Garth Bates
Class: CptS 121, Summer 2018
Date: 6/19/2018
Program: Calorie Calculator
*/

#include "task1.h"


FILE * open_input_file(void) {
	FILE* infile = NULL;
	infile = fopen("user.txt", "r");
}

char read_gender(FILE *infile) {
	char single_char;
	fscanf(infile, "%c", &single_char);
	return single_char;

}

int read_stat(FILE *infile) {
	int stat;
	fscanf(infile, "%d", &stat);
	return stat;
}

double calculate_male_BMR(int weight, int height, int age) {
	double BMR = 0.0;
	BMR = 66 + (6.23 * weight) + (12.7 * height) - (6.8 * age);
	return BMR;
}

double calculate_female_BMR(int weight, int height, int age) {
	double BMR = 0.0;
	BMR = 655 + (4.35 * weight) + (4.7 * height) - (4.7 * age);
	return BMR;
}

int selection() {
	int selec;
	printf("Choose your activity level:\n\t1. Sedentary (little to no exercise)\n\t2. Low activity\n\t");
	printf("3. Moderate activity\n\t4. High activity\n\t5. Extra activity\n\t");
	scanf("%d", &selec);
	return selec;
}