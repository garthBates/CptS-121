/*
Garth Bates
CptS 121, Summer, 2018
7/10/2018
Lab 9
*/

#include "string_stuff.h"

int main(void) {
	char word[20] = "Garth!";
	char *wordp = word;
	wordp = string_reverse(word);
	char thing[20] = "squanch";
	char thing2[20] = "";
	*my_strcpy(thing2, thing);
	*my_strcat(thing, thing2);
		 
	return 0;
}