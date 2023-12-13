// Course.cpp

#include <iostream>
#include "Course.h"

void Course::displayInfo() {
    std::cout << "Course ID: " << courseId << std::endl;
    std::cout << "Title: " << title << std::endl;
    std::cout << "Credits: " << credits << std::endl;
}
