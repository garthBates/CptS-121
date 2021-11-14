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

int main (void)
{

	Node_g * head = NULL;

	insert_at_front(&head, "MY item");
	printf("head->item: %s\n", head->grocery_item);

	//what happens if we don't pass in ** ? (note that &head is a double pointer!
	//It's the address of a POINTER
	//insert_at_front(head, "oranges");
	insert_at_front(&head, "oranges");
	printf("head->item: %s\n", head->grocery_item);

	printf("head->nextp->item: %s\n", head->next_ptr->grocery_item);

	free(head->next_ptr);
	free(head);

	/*Node * head = NULL;

	insert_in_order(&head, "milk");
	printf("head->item: %s\n", head->item);

	insert_in_order(&head, "oranges");
	printf("head->item: %s\n", head->item);

	printf("head->nextp->item: %s\n", head->nextp->item);

	free(head->nextp);
	free(head);*/

	return 0;
}