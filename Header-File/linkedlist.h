#ifndef __LINKEDLIST__H
#define __LINKEDLIST__H

#include <stdlib.h>
#include <stdio.h>

struct node
{
    double value;
    struct node *next;
};

struct linked_list
{
    struct node *head;
    int size;
};

struct node *push_back(struct linked_list *, double);
struct node *push_front(struct linked_list *, double);
void printLinkedList(struct linked_list);
struct node* searchList(struct linked_list, double);
struct linked_list* arrayToList(double*, int);

#endif