//
// Created by Alfonso Ridao on 10/9/22.
//


#include <stdlib.h>
#include <stdio.h>
#include "LinkedList.h"


typedef struct linkedList {
    node_t header;
    node_t iterator;
    uint16_t length;
}linkedList;

typedef struct node {
    void* item;
    struct node* next;
} node;



linkedList_t create() {
    linkedList_t list = calloc(sizeof(linkedList), 1);
    list->header = calloc(sizeof(node_t*), 1);
    if (NULL == list->header) {
        return FULL;
    }
    list->header->next = NULL;
    list->header->item = NULL;
    list->iterator = NULL;
    list->length = 0;
    return list;
}

LinkedListReturnCode_t destroy(linkedList_t list) {
    clear(list);
    node* node = list->header;
    while (node != NULL) {
        node_t item_to_remove = node;
        node = item_to_remove->next;
        free(item_to_remove);
    }
    free(list);
    return OK;
}


LinkedListReturnCode_t push(linkedList_t list, void* item){
    node_t _newNode = malloc(sizeof(node_t));
    if (NULL == _newNode) {
        return FULL;
    }
    _newNode->item = item;
    _newNode->next = NULL;

//    Is it the first element?
    if (list->header->next == NULL) {
        list->header->next = _newNode;
        list->iterator = _newNode;
        list->length++;
        return OK;
    }
    else {
        node_t last = list->header->next;
        while (last->next != NULL) {
            last = last->next;
        }
        last->next = _newNode;
        list->length++;
        return OK;
    }
}

void * pull(linkedList_t list) {
    if (list->header->next == NULL) {
        return EMPTY;
    }
    node_t search_node = list->header;
    while (search_node->next->next != NULL) {
        search_node = search_node->next;
    }
    node_t returned_node = search_node->next;
    search_node->next = NULL;
    return returned_node;

}

LinkedListReturnCode_t containsItem(linkedList_t list, void* item) {
    node_t node = list->header;
    while (node != NULL) {
        if (node->item == item) {
            return FOUND;
        };
        node = node->next;
    }
    return NOT_FOUND;
}

LinkedListReturnCode_t removeItem(linkedList_t list, void* item) {
    node_t node = list->header;
    while (node->next != NULL) {
        if (node->next->item == item) {
            node_t item_to_delete = node->next;
            node->next = item_to_delete->next;
            free(item_to_delete);
            list->length--;
            return OK;
        }
        node = node->next;
    }
    return NOT_FOUND;
}

void * pickItemByIndex(linkedList_t list, int16_t index) {
    if (index >= list->length) {
        return NULL;
    }
    node_t item = list->header-> next;
    for (int i = 0; i < index; ++i) {
        if (item == NULL) {
            return NOT_FOUND;
        }
        item = item->next;
    }
    return item;
}


uint16_t length(linkedList_t list) {
    return list->length;
}


void clear(linkedList_t list) {
    node_t node = list->header;
    while (node->next != NULL) {
        void* item = node->item;
        free(item);
        node = node->next;
    }
}

void* getIterator(linkedList_t list) {
    return list->iterator->item;
}

void* iteratorNext(linkedList_t list) {
    node_t iterator = list->iterator;
    if (iterator->next == NULL) {
        iterator->next = list->header->next;
    } else {
        iterator = iterator->next;
        list->iterator = iterator;
    }
    return iterator->item;
}

//print all list of pointers


void print_all(linkedList* list) {
    node_t header = list->header;
    printf("\n");
    node_t node = header->next;
    while (node != NULL) {
        int* value = node->item;

        printf("%d-", *value);
        node = node->next;
    }
    printf("\n");
}


node_t newNode(char data) {
    node_t _newNode = malloc(sizeof(node_t));
    if (NULL == _newNode) {
        return NULL;
    }
    _newNode->item = &data;
    _newNode->next = NULL;
    return _newNode;
}

void printNode(node_t node) {
    printf("\n*****************\n");
    printf("Node Memory: %d\n", node);
    if (node == NULL) {
        printf("IT'S NULL");
    } else {
        int* value = node->item;
        printf("Element: %d\n", *value);
        printf("Next Element: %p\n", node->next);
    }
    printf("\n*****************\n");
}
