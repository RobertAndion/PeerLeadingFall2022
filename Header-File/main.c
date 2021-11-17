#include "linkedlist.h"
#include <stdio.h>

int main()
{
    struct linked_list newList = {NULL, 0};
    push_back(&newList, 15);
    push_back(&newList, 24);
    push_front(&newList, 100);
    printLinkedList(newList);
    return 0;
}