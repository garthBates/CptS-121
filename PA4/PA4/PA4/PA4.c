/*
Programmer: Garth Bates
Class: CptS 121, Summer 2018
Programming Assignment: PA4
Date: 6/26/2018
Discription: A text bases game of Craps
*/


#include "PA4.h"

/*
Function: print_game_rules()
Decription: Prints the rules to the game craps
Input parameters: None
Output parameters: None
Preconditions: None
Postcondistions: None
*/
void print_game_rules(void) {
	printf("The player rolls two, six sided die. After the die have come to a complete rest, the sum of the two upward faces is calculated.\nIf the sum is 7 or 11 on the first throw the player wins.\n");
	printf("If the sum is 2, 3, or 12 on the first throw (called \"craps\"), the player loses.\nIf the sum is 4, 5, 6, 8, 9, or 10 on the first throw,\nthen the sum become the players \"point\".\n");
	printf("To win, you must continue rolling dice until you \"make your point\".\nThe player loses by rolling a 7 before making the point.");
}

/*
Function: get_bank_balance()
Description: Gets the initial bank balance from the user
Input Parameters: None
Output parameters: double balance;
Preconditions: Balance must be initialized
Postconditions: Balace is updated
*/
double get_bank_balance(void) {
	double balance = 0.0;
	printf("Enter you initial bank balance: \n");
	scanf("%lf", &balance);
	if (balance <= 0) {
		printf("Enter a valid balance.\n");
		get_bank_balance();
	}
	else {
		return balance;
	}
}

/*
Function: double get_wager_amount()
Description: Prompts the player for a wager on a particular roll. The wager is returned.
Input parametes: None
Output parameters: double wager
Preconditions: Wager must be initialized
Postconditions: Wager is updated
*/
double get_wager_amount(void) {
	double wager = 0.0;
	printf("Enter you wager: ");
	scanf("%lf", &wager);
	return wager;
}

/*
Function: int check_wager_amount(double wager, double balance)
Description: Checks to see if the wager is within the limits of the player's available balance. If the wager exceeds the player's allowable balance, then 0 is returned; otherwise 1 is returned.
Input parameters: wager and balance
Output parameters: 0 or 1
Preconditions: check must be initialized, balance and wager should be input
Postconditions: If wager is invalid, promts user for a valid one
*/
int check_wager_amount(double wager, double balance) {
	if (wager > balance || wager < 0) {
		return 0;
	}
	else {
		return 1;
	}
}

/*
Function: int roll_die(void)
Description: Rolls one die
Input parameters: None
Output paramets: returns the value of the die
Preconditions: die1_value and die2_value must be initialized
Postconditions: die1_value and die2_value are updated
*/
int roll_die(void) {
	int die = 0;
	die = rand() % 6 + 1;
	printf("Roll: %d\n", die);
	return die;
}

/*
Function: int calculate_sum_dice(int die1_value, int die2_value)
Description: Adds the two die rolls together
Input parameters: two die roll values
Output parameters: Returns the sum  of the values
Preconditions: The die must have rolled twice
Postconditions: the sum is returned
*/
int calculate_sum_dice(int die1_value, int die2_value) {
	int sum = 0;
	sum = die1_value + die2_value;
	return sum;
}

/*
Function: int is_win_loss_or_point(int sum_dice)
Description: Determines the result of the first dice roll
Input parameters: THe sum of the roll
Output parameteres: -1, 0, 1 determining win, loss or point
Preconditions: The dice must first roll
Postconditions: the game may continue or not
*/
int is_win_loss_or_point(int sum_dice) {
	if (sum_dice == 7 || sum_dice == 11) {
		return 1;
	}
	else if (sum_dice == 2 || sum_dice == 3 || sum_dice == 12) {
		return 0;
	}
	else {
		return -1;
	}
}

/*
Function: int is_point_loss_or_neither(int sum_dice, int point_value)
Description: Determines the result of any successive roll after the first roll
Input parameters: the sum and the point value
Output parameters: -1, 0, 1
Preconditions: At least one dice roll before this
Postconditions: Determines the conclusion of the game
*/
int is_point_loss_or_neither(int sum_dice, int point_value) {
	if (sum_dice == point_value) {
		return 1;
	}
	else if (sum_dice == 7) {
		return 0;
	}
	else {
		return -1;
	}
}

/*
Function: double adjust_bank_balance(double bank_balance, double wager_amount, int add_or_subtract)
Description: Adjusts the balance accordingly
Input parameters: balance, wager, add or subtract
Output parameters: The balance
Preconditions: Must have rolled dice at least one
Postconditions: The new balance
*/
double adjust_bank_balance(double bank_balance, double wager_amount, int add_or_subtract) {
	if (add_or_subtract == 1) {
		bank_balance += wager_amount;
		return bank_balance;
	}
	else if (add_or_subtract == 0) {
		bank_balance -= wager_amount;
		return bank_balance;
	}
	else {
		return bank_balance;
	}
}