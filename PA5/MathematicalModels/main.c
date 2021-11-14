/*
Programmer: Garth Bates
Class: CptS 121, Summer 2018
Programming Assignment: PA5
Date: 6/28/2018
Discription:
*/

/*
****************************************************
******************** BONUS 5pts ********************

2pts:	include a structure chart, either as a resource file (e.g. pdf, image,etc) or in this comment block
1pt	:	include your algorithim/pseudocode for your program  in this comment block
2pts:	include a flow chart of your program logic/flow, either as a resource file (e.g. pdf, image,etc) or in this comment block

****************************************************
****************************************************
*/

#include "MathematicalModels.h"

int main(void)
{
	int option = 0;

	do
	{
		option = display_menu();
		determine_line_form(option);
	} while (option != EXIT);

	system("pause"); //pauses the output console...even on debugging! note: requires stdlib.h
	return 0;
}
