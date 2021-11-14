/*
Programmer: Garth Bates
Class: CptS 121, Summer 2018
Programming Assignment: PA5
Date: 7/11/2018
Discription: THE GAME OF BATTLESHIP! STRIGHT OUT OF YOUR CHILDHOOD!
*/

#ifndef PA6_H
#define PA6_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// prototypes here
void welcome_screen();
void init_board(char board[10][10], int rows, int cols);
void display_board(char board[10][10], int rows, int cols);
void generate_direction(int * direction);
void generate_starting_point(int length, int direction, int * srow, int *scol);
int place_ship (char board[10][10], int row_start, int col_start, int dir, int length, char symbol);
void randomly_place_ships(char board[]);
void manualy_place_ships(char board[]);
void place_computers_ships(char board[]);
//int check_placement(char board[]);
int check_shot(char board[], int row, int col);
int update_board(char board[], int row, int col, int hit);
int select_who_starts_first(); 

#endif