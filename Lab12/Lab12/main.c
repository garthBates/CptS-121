/*
Garth Bates
CptS 121, summer, 2018
7/19/2018
Lab12-1
*/
#include "linkedlist.h"

int main()
{
	int resp;
	int n;
	int count = 1;
	int llist_len;
	node_t * head = NULL, *even = NULL, *current_node = NULL;

	srand((unsigned int)time(NULL));

	do
	{
		do
		{
			printf("\nPlease choose from the following menu (1-9).\n");
			printf("1) Create a new list\n");
			printf("2) Print the list\n");
			printf("3) Print the list in reverse order\n");
			printf("4) Print the contents of every \"nth\" node in the list\n");
			printf("5) Print the size of the list\n");
			printf("6) Sort the list\n");
			printf("7) Delete node(s)\n");
			printf("8) Delete the contents of the current list\n");
			printf("9) Generate a sub list of the even numbers in the list\n");
			printf("10) Quit\n");
			printf(">> ");
			scanf("%d", &resp);
		} while (resp < 1 || resp > 10);

		printf("\n");

		switch (resp)
		{
		case 1:
			do {
				printf("How many elements in the list? \n");
				scanf("%d", &llist_len);
			}
			while (llist_len < 0); 
			
			while (count <= llist_len)
			{
				insert_at_front(&head, rand() % 10);
				count++;
			}
			break;
		case 2:
			print_list(head);
			break;
		case 3:
			// your code here
			break;
		case 4:
			// your code here
			break;
		case 5:
			count = print_list_size(head);
			printf("The size of  the list: %d\n", count);
			break;
		case 6:
			// your code here
			break;
		case 7:
			// your code here
			break;
		case 8:
			// your code here
			break;
		case 9:
			// your code here
			break;
		}

	} while (resp != 10);
	// don't forget to free up all your nodes!!
}
