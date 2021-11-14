/************************************************************************************
*******
* Programmer: Garth Bates *
* Class: CptS 121, Summer 2018 *
* Programming Assignment:  *
* Date: 6/10/2018 *
* Description: This program runs some equations after getting user input for the values. *
*************************************************************************************
******/

#include <stdio.h>
#include <math.h>
#include <string.h>

#define PI 3.14159
#define G 6.67E-11

int main(void) {
	//Initializing variables
	float mass;
	float gmass1;
	float gmass2;
	float distance;
	float accel;
	float rad;
	float height;
	float volume;
	float gForce;
	float force;
	float x1;
	float x2;
	float y1;
	float y2;
	float x;
	float y;
	float z;
	int a;
	char plaintext_character;
	char encoded_character;
	
	printf("*************** WELCOME TO THE EQUATION EVALUATOR ***************\n\n");
	
	//Newton's Second Law of Motion
	printf("Please enter the mass and acceleration (both floating-point values) for use in \nNewton's Second Law: ");  
	scanf("%f %f", &mass, &accel);
	force = mass * accel;
	printf("Newton's Second Law: force = mass * acceleration = %f * %f = %f\n\n", mass, accel, force);
	
	//Volume of a cylinder
	printf("Please enter the radius and  height (both floating-point values) for use in a volume of cylinder eqaution: ");
	scanf("%f %f", &rad, &height);
	volume = PI * (pow(rad, 2)) * height;
	printf("Volume of a cylinder: Pi * radius^2 * height = 3.14159 * %f^2 *%f = %f\n\n", rad, height, volume);
	
	//Character encoding
	printf("Please a character to encode: ");
	scanf("%c", &plaintext_character);
	while (getchar() != '\n'); //Had to look this up, fflush(stdin) was not doing anythingq
	encoded_character = (plaintext_character - 'a') + 'A';
	printf("Plaintext character %c encoded: %c\n\n", plaintext_character, encoded_character);

	//Gravitational force between two objects
	printf("Please enter the mass of two objects and the distance between them (all floating-point values) for use in the Gravitational force equation: ");
	scanf("%f %f %f", &gmass1, &gmass2, &distance);
	gForce = G * ((gmass1 * gmass2) / pow(distance, 2));
	printf("\nGravitational force bewteen two objects: G * (mass1 * mass2)/distance^2 = 6.67E-11 * (%f * %f)/%f^2 = %f\n\n", gmass1, gmass2, distance, gForce); 
	
	//Distance between two points
	printf("Please enter two points on the cartesian plain in the form x y (both floating-point values) to calculate the distance between them: ");
	scanf("%f %f %f %f", &x1, &y1, &x2, &y2);
	distance = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
	printf("This distance between the points (%f,%f) and (%f,%f) is: %f\n\n", x1, y1, x2, y2, distance);
	
	//General eqaution
	printf("Please enter three values, first two floating-point values followed by an integer value for use in the gneral equation: ");
	scanf("%f %f %d", &x, &z, &a);
	y = ((float)7 / (float)5) * x + z - a / (a % 2) + PI;
	printf("The answer is: %f\n\n", y);


	return(0);
}