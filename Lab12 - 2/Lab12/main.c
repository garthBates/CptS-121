#include "linkedlist.h"

int main()
{
	int resp;
	int n;
	double gpa;
	char teach[50];
	char temp[50];
	FILE* infile = NULL;
	FILE* outfile = NULL;
	FILE* stats = NULL;
	student students[100];
	int string = 3;
	int i = 0;
	double min = 0;
	double max = 0;
	double avg = 0;

	srand((unsigned int)time(NULL));

	do
	{
		do
		{
			printf("\nPlease choose from the following menu (1-9).\n");
			printf("1) Read data in from a file to populate that array of structs with data\n");
			printf("2) Print out a summary of the data to the console window (iteratively)\n");
			printf("3) Print out a summary of the data to the console window (recursively)\n");
			printf("4) Write the summary of the data to an output file.\n");
			printf("5) Calculate and print statistics based on the input data, e.g. max-min-average-counts-etc. to the console window.\n");
			printf("6) Write the student information and statistics to an output file.\n");			
			printf("7) Quit\n");
			printf(">> ");
			scanf("%d", &resp);
			system("cls");
		} while (resp < 1 || resp > 7);

		printf("\n");

		switch (resp)
		{
		case 1:
			infile = fopen("students.txt", "r");
			fgets(teach, 50, infile);
			while (feof(infile) == 0) {
					fgets(temp, 50, infile);
					fgets(temp, 50, infile);
					strcpy(students[i].name, temp);
					fscanf(infile, "%d", &n);
					students[i].st_id = n;
					fscanf(infile, "%lf", &gpa);
					students[i].gpa = gpa;
					fgets(temp, 50, infile);
					fgets(temp, 50, infile);
					strcpy(students[i].major, temp);
					i++;
			}

			break;
		case 2:
			printf("Teacher: %s\n", teach);
			for (int i = 0; i < 3; i++) {
					printf("Student name: %s", students[i].name);
					printf("ID number: %d\n", students[i].st_id);
					printf("GPA: %.2lf\n", students[i].gpa);
					printf("Major: %s\n", students[i].major);
			}
			break;
		case 3:
			printf("Teacher: %s\n", teach);
			print_list_recurs(students, 0, 3);
			break;
		case 4:
			outfile = fopen("summary.txt", "w");
			fprintf(outfile, "Teacher: %s\n", teach);
			for (int i = 0; i < 3; i++) {
				fprintf(outfile, "Student name: %s", students[i].name);
				fprintf(outfile, "ID number: %d\n", students[i].st_id);
				fprintf(outfile, "GPA: %.2lf\n", students[i].gpa);
				fprintf(outfile, "Major: %s\n", students[i].major);
			}
			break;
		case 5:
			for (int i = 0; i < 3; i++) {
				avg += students[i].gpa;
			}
			avg = avg / 3;
			i = 0;
			min = students[0].gpa;
			while (i < string) {
				if (students[i].gpa > max) {
					max = students[i].gpa;
				}
				if (students[i].gpa < min) {
					min = students[i].gpa;
				}
				i++;
			}
			printf("Average GPA: %.2lf\n", avg);
			printf("Max GPA: %.2lf\n", max);
			printf("Min GPA: %.2lf\n", min);
			break;
		case 6:
			stats = fopen("stats.txt", "w");
			for (int i = 0; i < 3; i++) {
				avg += students[i].gpa;
			}
			avg = avg / 3;
			i = 0;
			min = students[0].gpa;
			while (i < string) {
				if (students[i].gpa > max) {
					max = students[i].gpa;
				}
				if (students[i].gpa < min) {
					min = students[i].gpa;
				}
				i++;
			}
			fprintf(stats, "Average GPA: %.2lf\n", avg);
			fprintf(stats, "Max GPA: %.2lf\n", max);
			fprintf(stats, "Min GPA: %.2lf\n", min);
			break;
		}

	} while (resp != 7);
	// don't forget to free up all your nodes!!
}
