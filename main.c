
#include <stdlib.h>
#include <stdio.h>

#include "Student.h"
#include "StudentHandler.h"





int main() {
    linkedList_t list = createListStudent();

    student* firstStudent = createStudent("Simas", "saf", 11, "Lithuania");

    addAStudent(firstStudent, list);
    
    addAStudent(createStudent("Alfonso", "Ridao", 20, "Argentina"), list);
    addAStudent(createStudent("Vlad", "Lazar", 56, "Romania"), list);
    addAStudent(createStudent("Tomas", "NotSure", 17, "Poland"), list);
    addAStudent(createStudent("Benjamin", "mmmmm", 23, "Slovakia"), list);

    printAllStudentsInfo(list);
    
    printStudentInfo(searchStudentById(20, list));

    printStudentInfo(searchStudentByLastName("NotSure", list));
    
    
}