/*
Programmer: Garth Bates
Class: CptS 121, Summer 2018
Programming Assignment: PA2
Date: 6/17/2018
Discription: 
*/


#include "equations.h"


int main(void) {

	//initialzing variables
	char plaintext_character;
	char next_character;
	double mass;
	double radius;
	double velocity;
	double force;
	double height;
	double surface_area;
	double resistance1;
	double resistance2;
	double vin;
	double vout;
	double x;
	double y;
	double z;
	double rms;
	double a;
	double b;
	double c;
	double quad_solve;
	double num1;
	double gen_solve;

	//Next character promts, function, and return
	printf("Please enter a character to find the next character on the Ascii chart: "); //prompts user for data
	scanf("%c", &plaintext_character); //stores data in proper variable 
	next_character = get_next_character(plaintext_character); //runs the funtion with the data
	printf("Your new character is: %c. It has an ascii value of: %d\n\n", next_character, next_character); //returns values and prints them in a user friendly format

	//Centripetal force prompts, funciton, and return
	printf("Please enter a mass, velocity, and radius (All floating-point values) to calculate centripetal force: "); //prompts user for data
	scanf("%lf %lf %lf", &mass, &radius, &velocity); //stores data in proper variables
	force = calculate_centripetal_force(mass, radius, velocity); //runs the funtion with the data
	printf("The values of the centripetal force is: %.2lf\n\n", force); //returns values and prints them in a user friendly format

	//Surface are prompts, function, and return
	printf("Please enter a radius and a height (both floating-point values) to calculate the surface area of a cylinder: "); //prompts user for data
	scanf("%lf %lf", &radius, &height); //stores data in proper variables 
	surface_area = calculate_surface_area_cylinder(radius, height); //runs the funtion with the data
	printf("The surface area of your cylinder is: %.2lf units squared.\n\n", surface_area); //returns values and prints them in a user friendly format

	//Resistive divider prompts, function, and return
	printf("Please enter the resistance1, resistance2, and voultage in (all floating-point values) to calulate the resistive divider: "); //prompts user for data
	scanf("%lf %lf %lf", &resistance1, &resistance2, &vin); //stores data in proper variables
	vout = calculate_resistive_divider(resistance1, resistance2, vin); //runs the funtion with the data
	printf("The resistive divider is: %.2lf\n\n", vout); //returns values and prints them in a user friendly format

	//RMS prompts, function, and return
	printf("Please enter the x, y, and z (all floating-point values) to calculate the 3-Space vector root mean square: "); //prompts user for data
	scanf("%lf %lf %lf", &x, &y, &z); //stores data in proper variables
	rms = calculate_root_mean_square(x, y, z); //runs the funtion with the data
	printf("The root mean square is: %.2lf\n\n", rms); //returns values and prints them in a user friendly format

	//Quadratic formula prompts, function and return
	printf("Please enter the a, b, and c values (all floating-point values) for use in the quadratic formula: "); //prompts user for data
	scanf("%lf %lf %lf", &a, &b, &c); //stores data in proper variables
	quad_solve = calculate_quadratic_formula(a, b, c); //runs the funtion with the data
	printf("The positive solution for the quadratic formula is: %.2lf\n\n", quad_solve); //returns values and prints them in a user friendly format

	//General equaiton prompts, function, and return
	printf("Please enter a value (in both floating-point and radian form) to be used in the general equation: "); //prompts user for data
	scanf("%lf", &num1); //stores data in proper variable 
	gen_solve = calculate_general_equation(num1); //runs the funtion with the data
	printf("The solution to the general equation is: %.2lf\n\n", gen_solve); //returns values and prints them in a user friendly format

	return(0);
}