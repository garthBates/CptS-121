/*
Garth Bates
CptS 121, summer, 2018
7/19/2018
Lab12-1
*/

#include "linkedlist.h"

node_t * make_node(int item)
{
	node_t *mem_ptr = NULL;
	mem_ptr = (node_t *)malloc(sizeof(node_t));
	mem_ptr->data = (int *)malloc(sizeof(int));
	mem_ptr->data = item;
	mem_ptr->nextp = NULL;
	return mem_ptr;
}

void insert_at_front(node_t **start_ptr, int item)
{
	node_t *mem_ptr = NULL;
	mem_ptr = make_node(item);
	mem_ptr->nextp = *start_ptr;
	*start_ptr = mem_ptr;
}

void print_list(node_t * head) {
	node_t * current = head;
	while (current != NULL) {
		printf("Random int: %d\n", current->data);
		current = current->nextp;
	}
}

int print_list_size(node_t * head) {
	int size = 0;
	node_t * current = head;
	while (current != NULL) {
		size++;
		current = current->nextp;
	}
	return size;
}

void print_list_reverse(node_t * head) {

}