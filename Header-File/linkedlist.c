#include "linkedlist.h"

struct node *push_back(struct linked_list *LL, double newValue) // Add node to the end of the linked list
{
    struct node *p = LL->head;

    struct node *temp = malloc(sizeof(struct node));
    if (temp == NULL)
    {
        return NULL;
    }
    temp->next = NULL;
    temp->value = newValue;
    LL->size++;

    if (p == NULL)
    {
        LL->head = temp;
        return temp;
    }

    while (p->next != NULL)
    {
        p = p->next;
    }

    p->next = temp;
    return temp;
}

struct node *push_front(struct linked_list *LL, double newValue) // Add node to the head of the linked list
{
    struct node *p = LL->head;

    struct node *temp = malloc(sizeof(struct node));
    if (temp == NULL)
    {
        return NULL;
    }
    temp->next = p;
    temp->value = newValue;
    LL->size++;
    LL->head = temp;
    return LL->head;
}

void printLinkedList(struct linked_list LL) // Print out all values in a Linked List
{
    struct node *p = LL.head;
    if (p == NULL)
    {
        return;
    }
    while (p != NULL)
    {
        printf("%f\n", p->value);
        p = p->next;
    }
}