/*
Programmer: Garth Bates
Class: CptS 121, Summer 2018
Programming Assignment: PA2
Date: 6/17/2018
Discription:
*/


#ifndef PA2
#define PA2

#include <stdio.h>
#include <math.h>

#define PI 3.141592
#define GOLDEN_RATIO (1 + sqrt(5) / 2)

char get_next_character(char plaintext_character);
double calculate_centripetal_force(double mass, double radius, double velocity);
double calculate_surface_area_cylinder(double radius, double height);
double calculate_resistive_divider(double resistance1, double resistance2, double vin);
double calculate_root_mean_square(double x, double y, double z);double calculate_quadratic_formula(double a, double b, double c);
double calculate_general_equation(double num1);


#endif