//
// Created by Alfonso Ridao on 10/9/22.
//

#include "LinkedList.h"
#include "Student.h"


linkedList_t createListStudent() {
    linkedList_t list = create();
    return list;
}

LinkedListReturnCode_t addStudent(student* student, linkedList_t list){
    return push(list, student);
}
student * getStudent(student* student, linkedList_t list){
    return (containsItem(list, student) == FOUND);
}

student * getStudent_It(linkedList_t list) {
    student *st = getStudent_It(list);
    iteratorNext(list);
    return st;
}

LinkedListReturnCode_t removeStudent(student* student, linkedList_t list){
    return removeItem(list, student);
}
uint16_t noOfStudents(linkedList_t list){
    return length(list);
}