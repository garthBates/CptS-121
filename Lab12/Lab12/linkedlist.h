/*
Garth Bates
CptS 121, summer, 2018
7/19/2018
Lab12-1
*/

#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct node
{
	int data;
	struct node * nextp;
} node_t;

node_t * make_node(int item);
void insert_at_front(node_t **start_ptr, int item);
void print_list(node_t * head);
int print_list_size(node_t * head);

#endif
