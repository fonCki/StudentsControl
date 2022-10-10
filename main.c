
#include <stdlib.h>
#include <stdio.h>

#include "Student.h"
#include "StudentHandler.h"





int main() {
    linkedList_t list = createListStudent();
    student* student1 = createStudent("Jose", "Lacambra", 23, "Argentina");
    student* student2 = createStudent("Alfonso", "Ridao", 33, "Denmark");
//    printInfo(student1);

    addAStudent(student1, list);
    addAStudent(student2, list);
    printAllStudentsInfo(list);
}