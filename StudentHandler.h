//
// Created by Alfonso Ridao on 10/9/22.
//

#include "StudentList.h"

#ifndef LINKEDLIST_STUDENTHANDLER_H
#define LINKEDLIST_STUDENTHANDLER_H

typedef student_list_t student_list_t;

void printStudentInfo(student * student);
void printAllStudentsInfo(linkedList_t list);
student* searchStudentById(uint16_t studentId);
student* searchStudentByLastName(char* lastName);
void addAStudent(student * student);


#endif; //LINKEDLIST_STUDENTHANDLER_