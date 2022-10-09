//
// Created by Alfonso Ridao on 10/9/22.
//

#ifndef LINKEDLIST_LINKEDLIST_H
#define LINKEDLIST_LINKEDLIST_H

#include <stdlib.h>

typedef enum {
    OK,
    EMPTY,
    NOT_FOUND,
    FULL,
    FOUND
}LinkedListReturnCode_t;

typedef struct node* node_t;

typedef struct linkedList* linkedList_t;


linkedList_t create();
LinkedListReturnCode_t destroy(linkedList_t list);
LinkedListReturnCode_t push(linkedList_t list, void* item);
void * pull(linkedList_t list);
LinkedListReturnCode_t containsItem(linkedList_t list, void* item);
LinkedListReturnCode_t removeItem(linkedList_t list, void* item);
void * pickItemByIndex(linkedList_t list, int16_t index);
uint16_t length(linkedList_t list);
void clear(linkedList_t list);
node_t getIterator();
void* iteratorNext();


void print_all(linkedList_t list);
node_t newNode(char data);
void printNode(node_t node);

#endif //LINKEDLIST_LINKEDLIST_H
