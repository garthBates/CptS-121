/*
Programmer: Garth Bates
Class: CptS 121, Summer 2018
Programming Assignment: PA4
Date: 6/26/2018
Discription: A text bases game of Craps
*/

#include "PA4.h"

int main()
{
	int choice, choice2, input_ok, charInput;
	double balance;
	double wager;
	int check;
	int die1_value;
	int die2_value;
	int sum;
	int cont_game;
	int point_value;


	do //outer do-while loop (program loop)
	{
		do //inner do-while loop (menu loop)
		{
			printf("Welcome to the game of craps!\n");
			printf("Please select from the following\n");
			printf("1) Display the game rules\n");
			printf("2) Play the game\n");
			printf("3) Quit\n");
			printf("-->");
			scanf(" %d", &choice);

			/*
			This while condition (below) will loop while all 3 conditional statements evaluate to be true.
			If ANY ONE of the statements is true, false, then the loop will exit, e.g. choice == 2 will evaluate to
			1 AND 0 AND 1 === FALSE --> EXIT LOOP
			if choice is set to 1 or 3 the same will happen (0 AND 1 AND 1 == FALSE, 1 AND 0 AND 1 == FALSE)
			*/
		} while (choice != 1 && choice != 2 && choice != 3); //keep looping while choice is not 1 AND not 2 AND not 3


															 /*
															 reaching this point in the code means we have a 'valid selection from the above loop...
															 choice can be ONLY 1 OR 2 OR 3.
															 We choose here what we want to do with one of those values
															 1. print the menu
															 2. play the game
															 3. quit the program
															 */
		if (choice == 1)  //this if condition ONLY prints the game rules, no looping
		{
			print_game_rules();
		}
		else if (choice == 2) //note that we only hit this for choice == 2, we will not print the game rules, and if choice is not equal to 2 we just skip it!
		{
			//If choice was 1 or 3, we skip over this block of if-else code!

			//the choice was 2, play the game!
			balance = get_bank_balance();

			printf("Game Loop\n");
			do //inner-inner do-while loop (game loop)
			{
				printf("\tBalance: $%.2lf\n", balance);
				wager = get_wager_amount();
				check = check_wager_amount(wager, balance);
				system("cls");
				while (check == 0) {
					printf("\tBalance: $%.2lf\n", balance);
					printf("Enter a valid wager: \n");
					wager = get_wager_amount();
					check = check_wager_amount(wager, balance);
				}
				srand((unsigned int)time(NULL));
				die1_value = roll_die();
				die2_value = roll_die();
				sum = calculate_sum_dice(die1_value, die2_value);
				point_value = sum;
				cont_game = is_win_loss_or_point(sum);
				balance = adjust_bank_balance(balance, wager, cont_game);
				while (cont_game != 0) {
					printf("\tBalance: $%.2lf\n", balance);
					wager = get_wager_amount();
					check = check_wager_amount(wager, balance);
					system("cls");
					while (check == 0) {
						printf("\tBalance: $%.2lf\n", balance);
						printf("Enter a valid wager: \n");
						wager = get_wager_amount();
						check = check_wager_amount(wager, balance);
					}
					die1_value = roll_die();
					die2_value = roll_die();
					sum = calculate_sum_dice(die1_value, die2_value);
					cont_game = is_point_loss_or_neither(sum, point_value);
					balance = adjust_bank_balance(balance, wager, cont_game);
					if (balance <= 0) {
						printf("You're out of money!!\nGET WREKT M8!!!\n\n");
						cont_game = 0;
					}
				}

				printf("Enter -1 to exit the 'game loop'\n");
				input_ok = scanf("%d", &choice2);
				if (choice2 != -1) //this means a valid number was not entered, we want to ignore the input
					printf("\n\n************** Continue the GAME loop! **************\n\n");

				if (input_ok == 0) //remember that scanf returns the number of successfully read in values! 0 indicates it was not a valid input (int or double)!
					while ((charInput = getchar()) != '\n'); //this clears any chars from the buffer, choice2 is still not -1

			} while (choice2 != -1); //loop WHILE choice2 is not equal to -1, this means for ANY other value we will keep looping!
		}

		//at this point, we've either selected 1, 3, or 2 and then eventually exited the 'game loop'		

		if (choice != 3) //if choice is not 3, we are going to keep looping
			printf("\n\n************** Continue the loop! **************\n\n");

	} while (choice != 3);

	return 0;
}