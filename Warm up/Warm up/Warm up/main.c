/*
Garth Bates
CptS 121, Summer, 2018
Warm-up
7/12/2018
*/


#include "warm_up.h"


int main(void) {
	course_t cpts121;
	cpts121.my_class = compsci;
	cpts121.my_book = book1;
	cpts121.num_students = 15;

	ship_t ships[5];
	ships[0].ship = Carrier;
	ships[0].size = 5;
	ships[0].id = 'c';

	ships[1].ship = Battleship;
	ships[1].size = 4;
	ships[1].id = 'b';

	ships[2].ship = Submarine;
	ships[2].size = 3;
	ships[2].id = 's';

	ships[3].ship = Destroyer;
	ships[3].size = 3;
	ships[3].id = 'd';

	ships[4].ship = Cruiser;
	ships[4].size = 3;
	ships[4].id = 'r';
}