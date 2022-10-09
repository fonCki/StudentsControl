
#include <stdlib.h>
#include <stdio.h>
#include "LinkedList.h"





int main() {
    linkedList_t list = create();


    int* numb1 = malloc(sizeof(int));
    *numb1 = 15;

    int* numb2 = malloc(sizeof(int));
    *numb2 = 32;
    int* numb3 = malloc(sizeof(int));
    *numb3 = 45;

    int* numb4 = malloc(sizeof(int));
    *numb4 = 76;

    int* numb5 = malloc(sizeof(int));
    *numb5 = 234;

    int* numb6 = malloc(sizeof(int));
    *numb6 = 65;


    push(list, numb1);

    push(list,numb2);

    push(list, numb3);

    push(list,numb4);

    push(list, numb5);

    push(list,numb6);

    printf("%d", length(list));

//    clear(list);

    print_all(list);



//    node_t iterator = getIterator(list);
//
//    printNode(getIterator(list));
//
    printNode(pickItemByIndex(list, 3));
//    
//    iterator = getIterator(list);
//
//    printNode(iterator);

    removeItem(list,32);

    print_all(list);

    LinkedListReturnCode_t code = containsItem(list, numb1);

    if (code == FOUND) {
        printf("FOUND");
    } else {
        printf("NOT FOUND");
    }

    printNode(pull(list));

    print_all(list);


    printNode(getIterator(list));

    iteratorNext(list);
    printNode(getIterator(list));


    destroy(list);

    print_all(list);




//int* numb2 = malloc(sizeof(int));
//    *numb2 = 32;
//int* numb3 = malloc(sizeof(int));
//    *numb3 = 43;
//int* numb4 = malloc(sizeof(int));
//    *numb4 = 76;
//
//    push(header, numb1);
//    push(header, numb2);
//    push(header, numb3);
//    push(header, numb4);
//    
//    
//    print_all(header);
//
//    printNode(getIterator());
//    iteratorNext();
//    printNode(getIterator());
//
//    clear(header);
//    
//    destroy(header);



    return 0;
}