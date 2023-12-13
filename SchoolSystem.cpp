// SchoolSystem.cpp

#include "Student.h"
#include "Course.h"
#include "Enrollment.h"

int main() {
    // Create students
    Student student1{1, "Alice", 18};
    Student student2{2, "Bob", 20};

    // Create courses
    Course course1{101, "Introduction to C++", 3};
    Course course2{102, "Advanced C++ Programming", 4};

    // Create enrollments
    Enrollment enrollment1{1001, student1, course1, 'A'};
    Enrollment enrollment2{1002, student2, course2, 'B'};

    // Display information
    std::cout << "Enrollment Information:" << std::endl;
    enrollment1.displayInfo();
    std::cout << std::endl;
    enrollment2.displayInfo();

    return 0;
}
