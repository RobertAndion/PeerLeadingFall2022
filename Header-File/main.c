#include "linkedlist.h"
#include <stdio.h>

int main()
{
    struct linked_list newList = {NULL, 0};
    push_back(&newList, 15);
    push_back(&newList, 24);
    push_front(&newList, 100);
    printLinkedList(newList);
    struct node * searchResult = searchList(newList,100);
    struct node * searchResultNone = searchList(newList,10);

    if(searchResult != NULL) {
        printf("%f\n",searchResult->value);
    } else {
        printf("Not found\n");
    }

    if(searchResultNone != NULL) {
        printf("%f\n",searchResultNone->value);
    } else {
        printf("Not found\n");
    }
    double test[] = {25.8,10.0,101.5,97.1};
    struct linked_list* listFromArray = arrayToList(test,4);
    printf("New List: \n");
    printLinkedList(*listFromArray);

    return 0;
}