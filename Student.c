//
// Created by Alfonso Ridao on 10/9/22.
//

#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <printf.h>

typedef struct student {
    char firstName[10];
    char lastName[10];
    uint8_t studentId;
    char nationality[15];
}student;

student * createStudent( char* firstName, char* lastName, uint8_t studentId, char* nationality) {
    student * _student = calloc(sizeof(_student), 1);
    if (NULL == _student) {
        return NULL;
    }
    strncpy(_student->firstName, firstName, sizeof _student->firstName -1);
    strncpy(_student->lastName, lastName, sizeof _student->lastName -1);
    _student->studentId = studentId;
    strncpy(_student->nationality, nationality, sizeof _student->nationality -1);
    
    return _student;
}

void printInfo(student * _student) {
    printf("\n***********************************\n");
    printf("First Name: %s\n", _student->firstName);
    printf("Last Name: %s\n", _student->lastName);
    printf("Student ID: %d\n", _student->studentId);
    printf("Nationality: %s\n", _student->nationality);
    printf("\n***********************************\n");
}