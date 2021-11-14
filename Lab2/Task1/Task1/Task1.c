/************************************************************************************
*******
* Programmer: Garth Bates *
* Class: CptS 121, Summer 2018 *
* Programming Assignment:  Lab2 Task1*
* Date: 6/12/2018 *
* Description: This program runs some equations after getting user input for the values. *
*************************************************************************************
******/

#include "task1.h"

double compute_slope(double x_1, double y_1, double x_2, double y_2) {
	double m;
	m = (y_1 - y_2) / (x_1 - x_2);
	return m;
}

double compute_mid_x(double x_1, double x_2) {
	double mid_x;
	mid_x = (x_1 + x_2) / 2.0;
	return mid_x;
}

double compute_mid_y(double y_1, double y_2) {
	double mid_y;
	mid_y = (y_1 + y_2) / 2.0;
	return mid_y;
}

