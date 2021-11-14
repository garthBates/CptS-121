#include <stdio.h>
#define FILE_NAME_SIZE 30
int main(void)
{
	FILE *infile = NULL;
	FILE *outfile = NULL;
	char file_name[FILE_NAME_SIZE];
	/* Declare the rest of the variables that you need for this problem. */
	printf("Enter the name of the file to read from: ");
	scanf("%s", file_name);
	fopen(file_name, "r");
	/* Fill in the code to open a file. Make sure you check that the file was open
	successfully. */
	while (!feof(infile))
	{
		/* Read in the real values. */
		/* Keep track of the number of values read and the sum of the values. */
	}
	/* Output average to a file named "output.dat". */
	/* Close your files. */
	return 0;
}