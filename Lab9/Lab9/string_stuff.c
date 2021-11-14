/*
Garth Bates
CptS 121, Summer, 2018
7/10/2018
Lab 9
*/


#include "string_stuff.h"


int string_reverse(char array[]) {
	char temp = 0;
	char temp2 = 0;
	int count = 0;
	char prime = array[0];
	while (prime != '\0') {
		prime = array[count];
		count++;
	}
	count--;
	for (int i = 0; i < count / 2; i++) {
		temp = array[i];
		temp2 = array[count - i - 1];
		array[i] = temp2;
		array[count - i - 1] = temp;
	}


}

char *my_strcpy(char *destination, const char *source) {
	int count = 0;
	char prime = source[0];
	while (prime != '\0') {
		prime = source[count];
		count++;
	}
	for (int i = 0; i < count; i++) {
		destination[i] = source[i];
	}
}


char *my_strcat(char *destination, const char *source) {
	int count = 0;
	char prime = source[0];

	int count2 = 0;
	char alpha = destination[0];

	while (prime != '\0') {
		prime = source[count];
		count++;
	}
	
	while (alpha != '\0') {
		alpha = destination[count2];
		count2++;
	}
	for (int i = 0; i < count; i++) {
		destination[count2 + i - 1] = source[i];
	}
}