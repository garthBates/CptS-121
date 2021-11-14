/*
Name: Garth Bates
Class: CptS 121, Summer 2018
Date: July 17 2018
Programming Assignment: PA7
Description: main file for morseconverter
*/
#include "morseconverter.h"

int main(void)
{
	char option[3], s_filename[30], d_filename[30];
	FILE *source = NULL, *destination = NULL;
	int total_characters_converted = 0;
	char morse_strings[91][6];
	char buff[50];
	char find[2] = " ";
	char *token;
	char nchar;
	char current_char;
	int *cur_char = &current_char;
	int index;

	//initialize our morse_strings array
	initialize_morse_strings(morse_strings);

	//open source and destination files
	printf("Enter -m for English to morse or -t for morse to English, then enter the source file and destination file: \n");
	scanf("%s", option);
	scanf("%s", s_filename);
	scanf("%s", d_filename);
	source = fopen(s_filename, "r");
	destination = fopen(d_filename, "w");
	if (source == NULL) {
		printf("Enter a valid source file name.\n");
	}
	
	switch (option[1]) {
	case 'm':
		while (feof(source) == 0){
			fscanf(source, "%c", &current_char);
			to_upper(cur_char);
			index = current_char;
			fprintf(destination, morse_strings[index]);
			if (current_char != ' ') {
				fprintf(destination, " ");
			}
			total_characters_converted++;
		}
		printf("Total characters converted successfully: %d\n", total_characters_converted);
		break;
	case 't':
		while (feof(source) == 0) {
			fgets(buff, 50, source);
			token = strtok(buff, find);
			while (token != NULL) {
				for (int i = 'A'; i < 'Z'; i++) {
					if (strcmp(morse_strings[i], token) == 0) {
						nchar = i;
						fprintf(destination, "%c", nchar);
						total_characters_converted++;
					}
				}
				for (int j = '0'; j < '9'; j++) {
					if (strcmp(morse_strings[j], token) == 0) {
						nchar = j;
						fprintf(destination, "%c", nchar);
						total_characters_converted++;
					}
				}
				token = strtok(NULL, find);
			}
		}
		printf("Total characters converted successfully: %d\n", total_characters_converted);
		break;
	}

	//write to destination

	//close source and destination files

	return 0;
}