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


int main(void) {
	double x_1;
	double y_1;
	double x_2;
	double y_2;
	double m;
	double mid_x;
	double mid_y;

	printf("Welcome to Lab2 Task1\n");
	printf("Enter two points x and y (both floating-point values) to find the slope of the line they create: ");
	scanf("%lf %lf %lf %lf",&x_1, &y_1, &x_2, &y_2);
	m = compute_slope(x_1, y_1, x_2, y_2);
	printf("Slope = %lf", m);

	mid_x = compute_mid_x(x_1, x_2);
	mid_y = compute_mid_y(y_1, y_2);
	printf("Mid point it (%lf,%lf)", mid_x, mid_y);

	return(0);
	

}

