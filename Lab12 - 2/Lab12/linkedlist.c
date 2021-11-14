#include "linkedlist.h"


FILE * open_input_file(void) {
	FILE* infile = NULL;
	infile = fopen("students", "r");
}



void print_list_recurs(student students[], int start, int len) {
	if (start >= len) {
		return;
	}
	printf("Student name: %s", students[start].name);
	printf("ID number: %d\n", students[start].st_id);
	printf("GPA: %.2lf\n", students[start].gpa);
	printf("Major: %s\n", students[start].major);

	print_list_recurs(students, start + 1, len);
}