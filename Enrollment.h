// Enrollment.h

#ifndef ENROLLMENT_H
#define ENROLLMENT_H

#include "Student.h"
#include "Course.h"

class Enrollment {
public:
    int enrollmentId;
    Student student;
    Course course;
    char grade;

    void displayInfo();
};

#endif
