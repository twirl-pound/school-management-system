// Enrollment.cpp

#include <iostream>
#include "Enrollment.h"

void Enrollment::displayInfo() {
    std::cout << "Enrollment ID: " << enrollmentId << std::endl;
    student.displayInfo();
    course.displayInfo();
    std::cout << "Grade: " << grade << std::endl;
}
