#ifndef ENROLLMENT_H
#define ENROLLMENT_H

#include<iostream>
#include<string>
using namespace std;

class Student;
class Course;

class Enrollment{
    private:
    Student* student;
    Course* course;

    string enrollmentDate;
    char grade;

    public:
    Enrollment();
    Enrollment(Student* student,Course* course,string enrollmentDate,char grade);

    ~Enrollment();

    Student* getStudent() const;
    Course* getCourse() const;
    string getEnrollmentDate() const;
    char getGrade() const;

    void setGrade(char grade);
    void displayEnrollment() const;
};
#endif