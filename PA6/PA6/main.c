/*
Programmer: Garth Bates
Class: CptS 121, Summer 2018
Programming Assignment: PA6
Date: 7/11/2018
Discription: THE GAME OF BATTLESHIP! STRIGHT OUT OF YOUR CHILDHOOD!
*/
#include "PA6.h"


int main (void)
{
	char board[10][10];
	char board2[10][10];
	char board3[10][10];
	char place_mode;
	int row, col, hit;
	int player1_hits = 0;
	int computer_hits = 0;
	int first;
	int com_shot_row;
	int com_shot_col;
	int temp;
	int welcome_mat;
	
	FILE* outfile = NULL;
	outfile = fopen("battleship.log", "w");

	welcome_screen();
	printf("1) For game rules.\n2) to play Battleship!\n3) to quit. ");
	scanf("%d ", &welcome_mat);
	while (welcome_mat != 3) {
		if (welcome_mat == 1) {
			print_rules();
			printf("1) For game rules.\n2) to play Battleship!\n3) to quit. ");
			scanf(" %d", &welcome_mat);
		}
		else if (welcome_mat == 2) {

			//Player 1's board
			printf("\n");
			printf("\"M\" to manually place ship. \"R\" to randomly place ships. ");
			scanf(" %c", &place_mode);
			if (place_mode == 'M' || place_mode == 'm') {
				manualy_place_ships(board);
			}
			else {
				randomly_place_ships(board); //I used recurrsion to create a legal board, however this causes the game to crash a fair amount of the time
			}

			//End Player 1's board


			//Computer's board
			place_computers_ships(board2); //I used recurrsion to create a legal board, however this causes the game to crash a fair amount of the time
			init_board(board3, 10, 10);
			display_board(board3, 10, 10);
			//End Computer's board
			system("cls");
			first = select_who_starts_first();
				if (first == 0) {
					printf("Player 1 fires first!\n");
					while (player1_hits < 17 || computer_hits < 17) {
						printf("Enter a target (row col) ");
						scanf("%d %d", &row, &col);
						hit = check_shot(board2, row, col);
						printf("Computer\n");
						player1_hits += update_board(board2, row, col, hit);
						temp = update_board(board3, row, col, hit);
						system("cls");
						printf("Computer\n");
						display_board(board3, 10, 10);
						com_shot_row = rand() % 10;
						com_shot_col = rand() % 10;
						hit = check_shot(board, com_shot_row, com_shot_col);
						computer_hits = update_board(board, com_shot_row, com_shot_col, hit);
						printf("Player 1\n");
						display_board(board, 10, 10);
					}
				}
				else {
					printf("Computer fires first!\n");
					while (player1_hits < 17 || computer_hits < 17) {
						com_shot_row = rand() % 10;
						com_shot_col = rand() % 10;
						hit = check_shot(board, com_shot_row, com_shot_col);
						computer_hits = update_board(board, com_shot_row, com_shot_col, hit);
						printf("Computer\n");
						display_board(board3, 10, 10);
						printf("Player 1\n");
						display_board(board, 10, 10);
						printf("Enter a target (row col) ");
						scanf("%d %d", &row, &col);
						hit = check_shot(board2, row, col);
						printf("Computer\n");
						player1_hits += update_board(board2, row, col, hit);
						temp = update_board(board3, row, col, hit);
						system("cls");
					}
				}



		}
		else {
			printf("Invalid number.\n");
			break;
		}
	}
	return 0;
}
