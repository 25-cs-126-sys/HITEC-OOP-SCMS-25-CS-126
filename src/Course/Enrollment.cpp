#include "Enrollment.h"
#include "Course.h"
Enrollment::Enrollment()
{
    student=nullptr;
    course=nullptr;

    enrollmentDate="";
    grade='F';
}
Enrollment::Enrollment(Student* student,Course* course,string enrollmentDate,char grade)
{
    this->student=student;
    this->course=course;

    this->enrollmentDate=enrollmentDate;
    this->grade=grade;

    Enrollment::~Enrollment(){
    }
    Student* Enrollment::getStudent() const{
        return student;
    }
    Course* Enrollment::getCourse() const{
        return course;
    }
    string Enrollment::getEnrollmentDate() const{
        return enrollmentDate;
    }
    char Enrollment::getGrade() const
    {
    return grade;
    }
    void Enrollment::setGrade(char grade){
        this->grade=grade;
    }

    void Enrollment::displayEnrollment() const{
        cout<<"\n=======ENROLLMENT INFO============\n";
        cout<<"Enrollment Date: "<<enrollmentDate<<endl;
        cout<<"Grade: "<<grade<<endl;
    }
    
