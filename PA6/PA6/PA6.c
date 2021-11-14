/*
Programmer: Garth Bates
Class: CptS 121, Summer 2018
Programming Assignment: PA6
Date: 7/11/2018
Discription: THE GAME OF BATTLESHIP! STRIGHT OUT OF YOUR CHILDHOOD!
*/

#include "PA6.h"
/*
Funtion: void init_board(char board[10][10], int rows, int cols)
Decripstion: intialzes the board
Input parameters: char board[10][10], int rows, int cols
Output parameters: void
Preconditions: None
Postconditions: A baord is now stared in a variable
*/
void init_board(char board[10][10], int rows, int cols)
{
	int i, j;
	for(i = 0; i < rows; i++)
	{
		for(j = 0; j < cols; j++)
		{
			board[i][j] = '~';
		}
	}
}

/*
Function: void display_board(char board[10][10], int rows, int cols)
Description: Displays the board
Input parameters: char board[10][10], int rows, int cols
Output parameters: void
Preconditions: Board must be initialze
Postcondistions: none
*/
void display_board(char board[10][10], int rows, int cols){
	int i, j;
	printf("  0 1 2 3 4 5 6 7 8 9\n");
	for(i = 0; i < rows; i++)
	{
		printf("%d ", i);
		for(j = 0; j < cols; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}

}

/*
Function: void generate_direction(int * direction)
Description: generates the direction for the ship
Input parameters: int * direction
Output parameters: none
Preconditions: none
Postconditions: none
*/
void generate_direction(int * direction)
{
	*direction = rand() % 2;
}

/*
Funciton: void generate_starting_point(int length, int direction, int * srow, int *scol)
Description: Generates the starting point for the ship placement
Input parameters: int length, int direction, int * srow, int *scol
Output parameters: none
Preconditions: A ship and direction already must exist
Postconditions: none
*/
void generate_starting_point(int length, int direction, int * srow, int *scol)
{
	if(direction == 0) // vertical
	{
		*srow = rand() % (10 - length + 1);
		*scol = rand() % 10;
	}
	else // horizontal
	{
		*scol = rand() % (10 - length + 1);
		*srow = rand() % 10;
	}

}

/*
Function: int place_ship (char board[10][10], int row_start, int col_start, int dir, int length, char symbol)
Description: Places a ship
Input parameters: char board[10][10], int row_start, int col_start, int dir, int length, char symbol
Output parameters: void
Preconditions: a ship, direction and starting point must already exist
Postconditions: Values of the baord are changed to represent the ship that has been placed
*/
int place_ship (char board[10][10], int row_start, int col_start, int dir, int length, char symbol)
{
	int i = 0;

	for (i = 0; i < length; i++)
	{
		if (board[row_start][col_start + i] == '~') {
			switch (dir)
			{
			case 1:  board[row_start][col_start + i] = symbol;
				break;
			case 0: board[row_start + i][col_start] = symbol;
				break;
			}
		}
		else {
			return 0;
		}
	}
	return 1;

}

/*
Function: void welcion_screen()
Description: it a welcome screen
Input parameters: none
Output parameters: none
Preconditons: none
Postconditions: none
*/
void welcome_screen() {
	printf(" __      __       .__                                  __               \n");
	printf("/  \\    /  \\ ____ |  |   ____  ____   _____   ____   _/  |_  ____      \n");
	printf("\\   \\/\\/   // __ \\|  | _/ ___\\/  _ \\ /     \\_/ __ \\  \\   __\\/  _ \\     \n");
	printf(" \\        /\\  ___/|  |_\\  \\__(  <_> )  Y Y  \\  ___/   |  | (  <_> )     \n");
	printf("  \\__/\\  /  \\___  >____/\\___  >____/|__|_|  /\\___  >  |__|  \\____/      \n");
	printf("       \\/       \\/          \\/            \\/     \\/                     \n");
	printf("__________         __    __  .__             _________.__    .__\n");
	printf("\\______   \\_____ _/  |__/  |_|  |   ____    /   _____/|  |__ |__|_____  \n");
	printf(" |    |  _/\\__  \\\\   __\\   __\\  | _/ __ \\   \\_____  \\ |  |  \\|  \\____ \\ \n");
	printf(" |    |   \\ / __ \\|  |  |  | |  |_\\  ___/   /        \\|   Y  \\  |  |_> >\n");
	printf(" |______  /(____  /__|  |__| |____/\\___  > /_______  /|___|  /__|   __/ \n");
	printf("        \\/      \\/                     \\/          \\/      \\/   |__|\n\n");
	return;
}

/*
Function: void randomly_place_ships(char board[])
Description: Randomly places the players ships
Input parameters: char baord[]
Output parameters: none
Preconditons: The board must exist
Postconditions: THe ship are all places, or the game has crashed
*/
void randomly_place_ships(char board[]) {
	int direction, row, col, placement = 0;
	srand((unsigned int)time(NULL));
	init_board(board, 10, 10);
	// code to place the battleship
	generate_direction(&direction);
	generate_starting_point(4, direction, &row, &col);
	if ((direction == 1 && col >= 7) || (direction == 0 && row >= 7) || (row < 0 || row >9 || col < 0 || col > 9)) {
		randomly_place_ships(board);
	}
	placement = place_ship(board, row, col, direction, 4, 'b');
	if (placement == 0) {
		randomly_place_ships(board);
	}
	// placing carrier
	generate_direction(&direction);
	generate_starting_point(5, direction, &row, &col);
	if ((direction == 1 && col >= 6) || (direction == 0 && row >= 6) || (row < 0 || row >9 || col < 0 || col > 9)) {
		randomly_place_ships(board);
	}
	placement = place_ship(board, row, col, direction, 5, 'c');
	if (placement == 0) {
		randomly_place_ships(board);
	}
	//placing crusier
	generate_direction(&direction);
	generate_starting_point(3, direction, &row, &col);
	if ((direction == 1 && col >= 8) || (direction == 0 && row >= 8) || (row < 0 || row >9 || col < 0 || col > 9)) {
		randomly_place_ships(board);
	}
	placement = place_ship(board, row, col, direction, 3, 'r');
	if (placement == 0) {
		randomly_place_ships(board);
	}
	//placing submarine
	generate_direction(&direction);
	generate_starting_point(3, direction, &row, &col);
	if ((direction == 1 && col >= 8) || (direction == 0 && row >= 8) || (row < 0 || row >9 || col < 0 || col > 9)) {
		randomly_place_ships(board);
	}
	placement = place_ship(board, row, col, direction, 3, 's');
	if (placement == 0) {
		randomly_place_ships(board);
	}
	//placing destroyer
	generate_direction(&direction);
	generate_starting_point(2, direction, &row, &col);
	if ((direction == 1 && col >= 9) || (direction == 0 && row >= 9) || (row < 0 || row >9 || col < 0 || col > 9)) {
		randomly_place_ships(board);
	}
	placement = place_ship(board, row, col, direction, 2, 'd');
	if (placement == 0) {
		randomly_place_ships(board);
	}
	printf("Player 1\n");
	display_board(board, 10, 10);
}

/*
Function: void place_computer_ships(char board[])
Description: Randomly places the computers ships
Input parameters: char baord[]
Output parameters: none
Preconditons: The board must exist
Postconditions: THe ship are all places, or the game has crashed
*/
void place_computers_ships(char board[]) {
	int direction, row, col, placement = 0;;
	srand((unsigned int)time(NULL));
	init_board(board, 10, 10);
	// code to place the battleship
	generate_direction(&direction);
	generate_starting_point(4, direction, &row, &col);
	if ((direction == 1 && col >= 7) || (direction == 0 && row >= 7) || (row < 0 || row >9 || col < 0 || col > 9)) {
		place_computers_ships(board);
	}
	placement = place_ship(board, row, col, direction, 4, 'b');
	if (placement == 0) {
		place_computers_ships(board);
	}

	// placing carrier
	generate_direction(&direction);
	generate_starting_point(5, direction, &row, &col);
	if ((direction == 1 && col >= 6) || (direction == 0 && row >= 6) || (row < 0 || row >9 || col < 0 || col > 9)) {
		place_computers_ships(board);
	}
	placement = place_ship(board, row, col, direction, 5, 'c');
	if (placement == 0) {
		place_computers_ships(board);
	}

	//placing crusier
	generate_direction(&direction);
	generate_starting_point(3, direction, &row, &col);
	if ((direction == 1 && col >= 8) || (direction == 0 && row >= 8) || (row < 0 || row >9 || col < 0 || col > 9)) {
		place_computers_ships(board);
	}
	placement = place_ship(board, row, col, direction, 3, 'r');
	if (placement == 0) {
		place_computers_ships(board);
	}

	//placing submarine
	generate_direction(&direction);
	generate_starting_point(3, direction, &row, &col);
	if ((direction == 1 && col >= 8) || (direction == 0 && row >= 8) || (row < 0 || row >9 || col < 0 || col > 9)) {
		place_computers_ships(board);
	}
	placement = place_ship(board, row, col, direction, 3, 's');
	if (placement == 0) {
		place_computers_ships(board);
	}

	//placing destroyer
	generate_direction(&direction);
	generate_starting_point(2, direction, &row, &col);
	if ((direction == 1 && col >= 9) || (direction == 0 && row >= 9) || (row < 0 || row >9 || col < 0 || col > 9)) {
		place_computers_ships(board);
	}
	placement = place_ship(board, row, col, direction, 2, 'd');
	if (placement == 0) {
		place_computers_ships(board);
	}

	printf("Computer\n");
}

/*
Function: void manualy_place_ships(char board[])
Description: manualy places the players ships
Input parameters: char baord[]
Output parameters: none
Preconditons: The board must exist
Postconditions: THe ship are all places
*/
void manualy_place_ships(char board[]) {
	int direction, row, col, placement = 0;
	init_board(board, 10, 10);
	//Battleship
	printf("Enter a dircetion for the Battleship(1 for horizontal, 0 for vertical)");
	scanf("%d", &direction);
	printf("Enter a starting point for placement (row col 0-9): ");
	scanf("%d %d", &row, &col);
	if ((direction == 1 && col >= 7) || (direction == 0 && row >= 7)|| (row < 0 || row >9 || col < 0 || col > 9)) {
		printf("Invalid input\n");
		manualy_place_ships(board); 
	}
	placement = place_ship(board, row, col, direction, 4, 'b');
	system("cls");
	display_board(board, 10, 10);

	//Carrier
	row = 0;
	col = 0;
	printf("Enter a dircetion for the Carrier(1 for horizontal, 0 for vertical)");
	scanf("%d", &direction);
	printf("Enter a starting point for placement (row col 0-9): ");
	if ((direction == 1 && col >= 6) || (direction == 0 && row >= 6) || (row < 0 || row >9 || col < 0 || col > 9)) {
		printf("Invalid input\n");
		manualy_place_ships(board);
	}
	scanf("%d %d", &row, &col);
	placement = place_ship(board, row, col, direction, 5, 'c');
	if (placement == 0) {
		manualy_place_ships(board);
	}
	system("cls");
	display_board(board, 10, 10);

	//Crusier
	row = 0;
	col = 0;
	printf("Enter a dircetion for the Crusier(1 for horizontal, 0 for vertical)");
	scanf("%d", &direction);
	printf("Enter a starting point for placement (row col 0-9): ");
	if ((direction == 1 && col >= 8) || (direction == 0 && row >= 8) || (row < 0 || row >9 || col < 0 || col > 9)) {
		printf("Invalid input\n");
		manualy_place_ships(board);
	}
	scanf("%d %d", &row, &col);
	placement = place_ship(board, row, col, direction, 3, 'r');
	if (placement == 0) {
		manualy_place_ships(board);
	}
	system("cls");
	display_board(board, 10, 10);

	//Submarine
	row = 0;
	col = 0;
	printf("Enter a dircetion for the Submarine(1 for horizontal, 0 for vertical)");
	scanf("%d", &direction);
	printf("Enter a starting point for placement (row col 0-9): ");
	if ((direction == 1 && col >= 8) || (direction == 0 && row >= 8) || (row < 0 || row >9 || col < 0 || col > 9)) {
		printf("Invalid input\n");
		manualy_place_ships(board);
	}
	scanf("%d %d", &row, &col);
	placement = place_ship(board, row, col, direction, 3, 's');
	if (placement == 0) {
		manualy_place_ships(board);
	}
	system("cls");
	display_board(board, 10, 10);

	//Destroyer
	row = 0;
	col = 0;
	printf("Enter a dircetion for the Destroyer(1 for horizontal, 0 for vertical)");
	scanf("%d", &direction);
	printf("Enter a starting point for placement (row col 0-9): ");
	if ((direction == 1 && col >= 9) || (direction == 0 && row >= 9) || (row < 0 || row >9 || col < 0 || col > 9)) {
		printf("Invalid input\n");
		manualy_place_ships(board);
	}
	scanf("%d %d", &row, &col);
	placement = place_ship(board, row, col, direction, 2, 'd');
	if (placement == 0) {
		manualy_place_ships(board);
	}
	system("cls");
	display_board(board, 10, 10);
}

/*
Function: int check_shot(char board[10][10], int row, int col)
Description: Checks the shot to see if it was hit or miss
Input parametes: char board[10][10], int row, int col
Precondtions: a shot must have been taken at a ship
Postcondtions: none
*/
int check_shot(char board[10][10], int row, int col) {
	if (board[row][col] != '~') {
		return 1; //hit
	}
	else {
		return 0; //miss
	}
}

/*
Function: int update_board(char board[10][10], int row, int col, int hit)
DEscripotion: Updates the board with current shots taken
Input parameters: char board[10][10], int row, int col, int hit
Output parameters: Returns total hits
Preconditons: A shot must have been taken
Postcondtions: The board is now changed
*/
int update_board(char board[10][10], int row, int col, int hit) {
	int total_hits = 0;
	if (hit == 1) {
		total_hits = check_if_sunk_ship(board, row, col);
		board[row][col] = '*';
		return total_hits;
	}
	else {
		board[row][col] = 'm';
		return total_hits;
	}
}

/*
Function: int check_if_sunk_ship(char board[10][10], int row, int col)
Description: Checks if the ship has sunk
Input parameters: char board[10][10], int row, int col
Output parameters: total hits and which ships have sunk
Preconditions: a shot must have been taken
Postconditions: none
*/
int check_if_sunk_ship(char board[10][10], int row, int col) {
	int total_hits = 0;
	int carrier = 0;
	int battleship = 0;
	int crusier = 0;
	int sub = 0;
	int destroyer = 0;
	if (board[row][col] == 'c') {
		carrier++;
		if (carrier == 5) {
			printf("Carrier sunk!\n");
		}
	}
	if (board[row][col] == 'b') {
		battleship++;
		if (battleship == 4) {
			printf("Battleship sunk!\n");
		}
	}
	if (board[row][col] == 'r') {
		crusier++;
		if (crusier == 3) {
			printf("Crusier sunk!\n");
		}
	}
	if (board[row][col] == 's') {
		sub++;
		if (sub == 3) {
			printf("Submarine sunk!\n");
		}
	}
	if (board[row][col] == 'd') {
		destroyer++;
		if (destroyer == 2) {
			printf("Destroyer sunk!\n");
		}
	}
	total_hits = carrier + battleship + crusier + sub + destroyer;
	return total_hits;
}

/*
Function: int select_who_starts_first()
Description: selects who goes first
Input parameters: None
Output parameters: 0 or 1 for who goes first
Precondtions: none
Postconditons: none
*/
int select_who_starts_first() {
	srand((unsigned int)time(NULL));
	int player = rand() % 2;
	return player; //0 for user, 1 for computer
}

/*
Function: void print_rules()
Descriptions: Prints the rules of the game
Input parameters: none
Output parameters: none
Precondtions: none
Postconditions: none
*/
void print_rules() {
	printf("Game Objective\nThe object of Battleship is to try and sink all of the other player's before they sink all of your ships. All of the \n");
	printf("other player's ships are somewhere on his/her board. You try and hit them by calling out the coordinates of \none of the squares on the board. The other player also tries to hit your ships by calling out coordinates.\n");
	printf("Neither you nor the other player can see the other's board so you must try to guess where they are. Each\n");
	printf("board in the physical game has two grids: the lower (horizontal) section for the player's ships and the upper\n");
	printf("part (vertical during play) for recording the player's guesses.\n\n");
	printf("Starting a New Game\n");
	printf("Each player places the 5 ships somewhere on their board. The ships can only be placed vertically or \n");
	printf("horizontally. Diagonal placement is not allowed. No part of a ship may hang off the edge of the board. Ships \n");
	printf("may not overlap each other. No ships may be placed on another ship. \n\n");
	printf("Once the guessing begins, the players may not move the ships.\n\n");
	printf("The 5 ships are: Carrier (occupies 5 spaces), Battleship (4), Cruiser (3), Submarine (3), and Destroyer (2).\n\n");
	printf("Playing the Game\n");
	printf("Player's take turns guessing by calling out the coordinates. The opponent responds with \"hit\" or \"miss\" as\n");
	printf("appropriate. Both players should mark their board with pegs: red for hit, white for miss. For example, if you \n");
	printf("call out F6 and your opponent does not have any ship located at F6, your opponent would respond with\n");
	printf("\"miss\". You record the miss F6 by placing a white peg on the lower part of your board at F6. Your opponent\n");
	printf("records the miss by placing.\n\n");
	printf("When all of the squares that one your ships occupies have been hit, the ship will be sunk. You should \n");
	printf("announce \"hit and sunk\". In the physical game, a red peg is placed on the top edge of the vertical board to \n");
	printf("indicate a sunk ship. \n\n");
	printf("As soon as all of one player's ships have been sunk, the game ends.\n");
}