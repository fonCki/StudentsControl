
#include <stdlib.h>
#include <stdio.h>

#include "Student.h"
#include "StudentHandler.h"





int main() {
    linkedList_t list = createListStudent();
    addAStudent(createStudent("Alfonso", "Ridao", 20, "Argentina"), list);
    addAStudent(createStudent("Vlad", "Lazar", 23, "Romania"), list);
    addAStudent(createStudent("Tomas", "NotSure", 17, "Poland"), list);
    addAStudent(createStudent("Benjamin", "mmmmm", 23, "Slovakia"), list);

//    printInfo(student1);


    printAllStudentsInfo(list);
}