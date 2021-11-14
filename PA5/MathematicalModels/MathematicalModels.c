/*
Programmer: Garth Bates
Class: CptS 121, Summer 2018
Programming Assignment: PA5
Date: 6/28/2018
Discription:
*/

#include "MathematicalModels.h"


/*
Funtion: display_menu()
Description: displays the menu options
Input parameters: Void
Returns: menu selection
Preconditions: none
Postconditions: none
*/
int display_menu()
{
	int selection;
	printf("Select the form that you would like to convert to slope-intercept form:\n");
	printf("\t1) Two-point form (you know two points on the line)\n");
	printf("\t2) Point-slope form (you know the line's slope and one point)\n");
	printf("\t3) Exit\n");
	prinf("\t==> ");
	scanf("%d", &selection);
	if (selection == 1) {
		return TWO_POINT_FORM;
	} 
	else if (selection == 2) {
		return POINT_SLOPE_FORM;
	}
	else {
		return EXIT;
	}
}

/*
Funtion: determine_line_form()
Description: determines the line form
Input parameters: the menu option
Returns: none
Preconditions: none
Postconditions: none
*/
void determine_line_form(int option)
{
	//TODO: implement the determine_line_form() logic
}

/*
Funtion: get_slope_point_form()
Description: gets the users slope point form
Input parameters: double *slope, double *x1, double *y1
Returns: the infile for reading
Preconditions: numbers.txt must exist
Postconditions: none
*/
void get_point_slope_form(double *slope, double *x1, double *y1) {
	printf("Enter the slope=> ");
	scanf("%lf", slope);
	printf("Enter the x-y coordinates of the point separated by a space=> ");
	scanf("%lf %lf", x1, y1);
}

/*
Funtion: determine_y_intercept()
Description: determines the y intercept for an equation
Input parameters: double slope, double x1, double y1, double *y_intercept
Returns: none
Preconditions: none
Postconditions: none
*/
void determine_y_intercept(double slope, double x1, double y1, double *y_intercept) {

}

/*
Funtion: display_point_slope_form()
Description: displays the point slope form
Input parameters: double slope, double x1, double y1
Returns: none
Preconditions: none
Postconditions: none
*/
void display_point_slope_form(double slope, double x1, double y1) {

}

/*
Funtion: display_slope_intercept_form()
Description: displays the slope intercept form
Input parameters: double slope, double y_intercept
Returns: none
Preconditions: none
Postconditions: none
*/
void display_slope_intercept_form(double slope, double y_intercept) {

}

/*
Funtion: get_two_point_form()
Description: dgets the two point form form the user
Input parameters: double *x1, double *y1, double *x2, double *y2
Returns: none
Preconditions: none
Postconditions: none
*/
void get_two_point_form(double *x1, double *y1, double *x2, double *y2) {

}

/*
Funtion: display_two_point_form()
Description: displays the two point form
Input parameters: double *x1, double *y1, double *x2, double *y2
Returns: none
Preconditions: none
Postconditions: none
*/
void display_two_point_form(double x1, double y1, double x2, double y2) {

}

/*
Funtion: calculate_slope_from_two_point()
Description: calculates the two from the point form
Input parameters: double *x1, double *y1, double *x2, double *y2
Returns: none
Preconditions: none
Postconditions: none
*/
void calculate_slope_from_two_point(double x1, double y1, double x2, double y2, double *slope) {

}