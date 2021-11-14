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

#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <stdio.h>
#include <stdlib.h> // malloc (), free ()
#include <string.h>

typedef struct node
{
	char item[100];
	struct node * nextp; //next node pointer
} Node;

typedef struct node_g
{
	char * grocery_item;
	struct node_g *next_ptr;
} Node_g;


Node * make_node(char * new_item);
void insert_in_order(Node ** head, char * new_item);

Node_g * make_node_g(char * item);
void insert_at_front(Node_g **start_ptr, char *item);

#endif