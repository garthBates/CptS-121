/*
Programmer: Garth Bates
Class: CptS 121, Summer 2018
Programming Assignment: PA2
Date: 6/17/2018
Discription:
*/

#include "equations.h" 


char get_next_character(char plaintext_character) {
	char new_char;
	new_char = plaintext_character + 1;
	return new_char;
}

double calculate_centripetal_force(double mass, double radius, double velocity) {
	double force;
	force = (mass * pow(velocity, 2)) / radius;
	return force;
}

double calculate_surface_area_cylinder(double radius, double height) {
	double surface_area;
	surface_area = 2 * PI * radius * height + 2 * PI * pow(radius, 2);
	return surface_area;
}

double calculate_resistive_divider(double resistance1, double resistance2, double vin) {
	double vout;
	vout = (resistance2 / (resistance1 + resistance2)) * vin;
	return vout;
}

double calculate_root_mean_square(double x, double y, double z) {
	double rms;
	rms = sqrt((pow(x, 2) + pow(y, 2) + pow(z, 2)) / 3);
	return rms;
}

double calculate_quadratic_formula(double a, double b, double c) {
	double quad_top;
	double quad_bott;
	double quad_solve;
	quad_top = -b + sqrt(pow(b, 2) - 4 * a * c);
	quad_bott = 2 * a;
	quad_solve = quad_top / quad_bott;
	return quad_solve;
}

double calculate_general_equation(double num1) {
	double y;
	y = sin(2 * PI * num1) + GOLDEN_RATIO;
	return y;
}