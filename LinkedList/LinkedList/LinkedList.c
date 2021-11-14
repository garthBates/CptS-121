/*
Name: Daniel Olivares (adapted from Gina Sprint)
Date: 7/20/17
Class: CptS 121 Summer 2017
Description:
This example introduces you to dynamic memory. We use malloc ()
to allocate memory and free () to deallocate memory. We will
create a dynamic linked list, which will represent grocery
items.
*/



#include "LinkedList.h"

Node * make_node(char * new_item)
{
	Node * new_node = NULL;

	new_node = (Node *) malloc(sizeof(Node));
	strcpy(new_node->item, new_item);
	new_node->nextp = NULL;

	return new_node;
}

void insert_in_order(Node ** head, char * new_item)
{
	Node * new_node = NULL;

	new_node = make_node(new_item);

	if(*head == NULL) // list empty
	{
		*head = new_node;
	}
	else // list is not empty
	{
		new_node->nextp = *head;
		*head = new_node;
	}
}

Node_g * make_node_g(char * item)
{
	Node_g *mem_ptr = NULL;

	// No error checking for malloc ( ) is provided
	mem_ptr = (Node_g *)malloc(sizeof(Node_g));
	mem_ptr->grocery_item = (char *)malloc(sizeof(char) * (strlen(item) + 1));
	strcpy(mem_ptr->grocery_item, item);
	mem_ptr->next_ptr = NULL;

	return mem_ptr;
}

void insert_at_front(Node_g ** start_ptr, char * item)
{
	Node_g *mem_ptr = NULL;

	// Assuming enough memory is available
	mem_ptr = make_node_g(item);

	// Be sure not to lose the rest of the list!
	mem_ptr->next_ptr = *start_ptr;
	*start_ptr = mem_ptr;

}
