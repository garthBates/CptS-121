/*
Programmer: Garth Bates
Class: CptS 121, Summer 2018
Programming Assignment: PA8
Date: 7/23/2018
Discription:
*/

#include "pa8.h"


part_of_speech pos_string_to_enum(char* pos)
{
	if (strcmp("Articles", pos) == 0)
		return Articles;
	if (strcmp("Nouns", pos) == 0)
		return Nouns;
	if (strcmp("Verbs", pos) == 0)
		return Verbs;
	if (strcmp("Prepositions", pos) == 0)
		return Prepositions;
}

/*I took myCompare and sort from https://www.geeksforgeeks.org/c-program-sort-array-names-strings/ for sorting my arrays alphabetically*/
static int myCompare(const void * a, const void * b)
{
	return strcmp(*(const char **)a, *(const char **)b);
}

void sort(const char *arr[], int n)
{
	qsort(arr, n, sizeof(const char *), myCompare);
}

/*
Function: to_upper ()
Description: takes in a character and returns the uppercase value.
Input parameters: a pointer to a char
Returns: The uppercase value of the input character via an output parameter.
Preconditions: input_char is a pointer of type char.
Postconditions: input_char has been changed to its uppercase value.
*/
void to_upper(char * input_char)
{
	if (*input_char >= 'a' && *input_char <= 'z') {
		*input_char -= 32;
	}
	return;
}