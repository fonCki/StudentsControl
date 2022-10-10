//
// Created by Alfonso Ridao on 10/9/22.
//

#include <stdint.h>


#ifndef LINKEDLIST_STUDENT_H
#define LINKEDLIST_STUDENT_H

typedef struct student {
    char firstName[10];
    char lastName[10];
    uint8_t studentId;
    char nationality[15];
}student;

student * createStudent( char* firstName, char* lastName, uint8_t studentId, char* nationality);
void printInfo(student * _student);

#endif; //LINKEDLIST_STUDENT_H
