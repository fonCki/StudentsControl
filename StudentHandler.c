//
// Created by Alfonso Ridao on 10/9/22.
//

#include <string.h>
#include "StudentList.h"
#include "Student.h"




void printStudentInfo(student * student){
    printInfo(student);
}
void printAllStudentsInfo(linkedList_t list){
    for (int i = 0; i < noOfStudents(list); ++i) {
        printInfo(getStudent_It(list));
    }
}
student* searchStudentById(uint16_t studentId, linkedList_t list){
    for (int i = 0; i < noOfStudents(list); ++i) {
        student* student = getStudent_It(list);
        if (student->studentId == studentId) {
            return student;
        }
    }
    return NOT_FOUND;
}

student* searchStudentByLastName(char* lastName, linkedList_t list){
    for (int i = 0; i < noOfStudents(list); ++i) {
        student* student = getStudent_It(list);
        if (strncmp(lastName, student->lastName, 1) == 0) {
            return student;
        }
    }
    return NOT_FOUND;
    
}
void addAStudent(student * student, linkedList_t list){
    addStudent(student, list);
}