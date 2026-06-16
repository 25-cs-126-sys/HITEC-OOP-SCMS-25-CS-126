#ifndef STUDENT_H
#define STUDENT_H
#include "Person.h"
#include<string>
using namespace std;
class Student:public Person
{
    protected:
    string rollNo;
    int semester;
    float gpa;

    static const int MAX_COURSES=10;
    string enrolledCourses[MAX_COURSES];
    int courseCount;

    public:
    Student();
    Student(string name,string cnic,int age,string contact,string rollNo,int semester,float gpa);
virtual ~Student();
string getRollNo() const;
int getSemester() const;
float getGPA() const;
 
void setSemester(int semester);
void setGPA(float gpa);

void addCourse(string courseName);
char calculateGrade() const;

void displayInfo() const override;
};
#endif