//START Pause Block
#include <stdlib.h> // need for system("pause")
#ifdef _WIN32
#define WINPAUSE system("pause")
#endif
//END Pause Block

/*
Name: Daniel Olivares
Date: 6/5/18
Class: CptS 121
Description: This program displays "Hello CptS 121!" to the console.
*/

#include <stdio.h> // need in order to use printf ()

int main(void) // main is the starting point for all of our C programs
{
	printf("Hello CptS 121! My name is Garth B.\n");
	WINPAUSE;
	return 0; // exit the program with code 0
}

