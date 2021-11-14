/*
Garth Bates
CptS 121, Summer, 2018
Warm-up
7/12/2018
*/


#include "warm_up.h"



void print_course(course_t course) {
	printf("%s", course.my_class);
	printf("%s", course.my_book);
	printf("%d", course.num_students);
}

course_t get_course() {
	
	course_t name;
	
	printf("Enter a course name: \n");
	scanf("%s", name.my_class);
	printf("Enter a book name: \n");
	scanf("%s", name.my_book);
	printf("Enter number of students: \n");
	scanf("%d", name.num_students);
	
	return name;
}

int compare_struct(course_t *course1, course_t *course2) {
	int names;
	int books;
	int students;
	names = strcmp(&(*course1).my_class, &(*course2).my_class);
	books = strcmp(&(*course1).my_book, &(*course2).my_book);
	students = strcmp((*course1).num_students, (*course2).num_students);
	if (names + books + students == 0) {
		return 1;
	}
	else {
		return 0;
	}
}