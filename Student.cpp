// Student.cpp

#include <iostream>
#include "Student.h"

void Student::displayInfo() {
    std::cout << "Student ID: " << studentId << std::endl;
    std::cout << "Name: " << name << std::endl;
    std::cout << "Age: " << age << std::endl;
}
