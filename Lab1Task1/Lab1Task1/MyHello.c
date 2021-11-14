/************************************************************************************
*******
* Programmer: Garth Bates *
* Class: CptS 121, Summer 2018 *
* Programming Assignment: Lab1 *
* Date: 6/7/2018 *
* Description: This program prints out a simple "hello world" message. *
*************************************************************************************
******/

#include <stdio.h>
#include <math.h>
int main() {
	//printf("Hello World, I am in CptS 121 and this is my first program!–Garth B.\n");

	
	int number1_int = 0;
	int number2_int = 0;
	float number1_float = 0;
	float number2_float = 0;

	printf("Enter an integer: \n");
	scanf("%d", &number1_int);

	printf("Enter a second integer: \n");
	scanf("%d", &number2_int);

	printf("Enter a float: \n");
	scanf("%f", &number1_float);

	printf("Enter a second float: \n");
	scanf("%f", &number2_float);

	int int_sum = number1_int + number2_int;
	printf("%d\n", int_sum);

	float fl_diff = number1_float - number2_float;
	printf("%f\n", fl_diff);

	int int_prod = number1_int * number2_int;
	printf("%d\n", int_prod);

	int int_quo = number1_int / number2_int;
	float fl_int_quo = (float)number1_int / number2_int;
	printf("Intger: %d\nFloat: %f\n", int_quo, fl_int_quo);

	int int_quo12 = number1_int / number2_float;
	float quo12 = number1_int / number2_float;
	printf("Integer: %d\nFloat: %f\n", int_quo12, quo12);

	float casting = (float)number1_int / number2_int;
	printf("%f\n", casting);

	int modding = (int)number1_float % (int)number2_float;
	printf("%d\n", modding);

	int even_odd1 = number1_int % 2;
	int even_odd2 = number2_int % 2;
	printf("Integer 1: %d\nInteger 2: %d\n", even_odd1, even_odd2);
	

	int current;
	int resistance;

	printf("Enter values for Ohm's Law. I: \n");
	scanf("%d", &current);

	printf("R: \n");
	scanf("%d", &resistance);

	int voltage = current * resistance;
	printf("Voltage: %d\n", voltage);

	int voltage2;
	int resistance2;

	printf("Enter values for Joule's Law. V: \n");
	scanf("%d", &voltage2);

	printf("R: \n");
	scanf("%d", &resistance2);

	int power = (pow(voltage2, 2)) / resistance2;
	printf("Power: %d\n", power);
	return 0;
}