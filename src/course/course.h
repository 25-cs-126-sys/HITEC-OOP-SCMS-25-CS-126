#ifndef COURSE_H
#define COURSE_H

#include<iostream>
#include<string>
using namespace std;

class Faculty;
class Student;

class Course{
    private:
    string courseCode;
    string courseName;
    int creditHours;

    Faculty* instructor;

    int maxCapacity;
    int enrolledCount;

    static const int MAX_STUDENTS=50;
    Student* enrolledStudents[MAX_Students];

    public:
    Course();
    Course(string code,string name,int creditHours,Faculty* instructor,int maxCapacity);

    ~Course();

    string getCourseCode() const;
    string getCourseName() const;
    int getCreditHours() const;
    int getEnrolledCount() const;

    void enrollStudent(Student* student);
    bool operator==(const Course& other);
    Student** operator+(Course& other);

    friend ostream& operator<<(ostream& out,const Course& course)
};
#endif
