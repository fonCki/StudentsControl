//
// Created by Alfonso Ridao on 10/9/22.
//

#include "StudentList.h"

#ifndef LINKEDLIST_STUDENTHANDLER_H
#define LINKEDLIST_STUDENTHANDLER_H

typedef student_list_t student_list_t;

void printStudentInfo(student * student);
void printAllStudentsInfo(linkedList_t list);
student* searchStudentById(uint16_t studentId, linkedList_t list);
student* searchStudentByLastName(char* lastName, linkedList_t list);
void addAStudent(student * student, linkedList_t list);


#endif; //LINKEDLIST_STUDENTHANDLER_
