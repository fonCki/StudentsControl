cmake_minimum_required(VERSION 3.23)
project(LinkedList C)

set(CMAKE_C_STANDARD 99)

add_executable(LinkedList main.c LinkedList.c LinkedList.h Student.c Student.h StudentList.h StudentList.c StudentHandler.c StudentHandler.h)
