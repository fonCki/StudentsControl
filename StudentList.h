//
// Created by Alfonso Ridao on 10/9/22.
//
#include "LinkedList.h"
#include "Student.h"

#ifndef LINKEDLIST_STUDENTLIST_H
#define LINKEDLIST_STUDENTLIST_H

typedef linkedList_t student_list_t;

LinkedListReturnCode_t addStudent(student* student, linkedList_t list);
LinkedListReturnCode_t getStudent(student* student, linkedList_t list);
student * getStudent_It(linkedList_t list);
LinkedListReturnCode_t removeStudent(student* student, linkedList_t list);
uint16_t noOfStudents(linkedList_t list);

#endif //LINKEDLIST_STUDENTLIST_H
