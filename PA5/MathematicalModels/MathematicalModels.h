/*
Programmer: Garth Bates
Class: CptS 121, Summer 2018
Programming Assignment: PA5
Date: 6/28/2018
Discription:
*/

#include <stdio.h>

//POSSIBLE constant macros
#define TWO_POINT_FORM 1
#define POINT_SLOPE_FORM 2
#define EXIT 3

//POSSIBLE function prototypes
int display_menu();
void determine_line_form(int option);

void get_point_slope_form(double *slope, double *x1, double *y1);
void determine_y_intercept(double slope, double x1, double y1, double *y_intercept);
void display_point_slope_form(double slope, double x1, double y1);
void display_slope_intercept_form(double slope, double y_intercept);

void get_two_point_form(double *x1, double *y1, double *x2, double *y2);
void display_two_point_form(double x1, double y1, double x2, double y2);
void calculate_slope_from_two_point(double x1, double y1, double x2, double y2, double *slope);
