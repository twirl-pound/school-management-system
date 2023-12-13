// Course.h

#ifndef COURSE_H
#define COURSE_H

#include <string>

class Course {
public:
    int courseId;
    std::string title;
    int credits;

    void displayInfo();
};

#endif
