#include "../utils/Exceptions.h"
#include "Course.h"
Course::Course(){
    courseCode="";
    courseName="";
    creditHours=0;

    instructor=nullptr;

    maxCapacity=0;
    enrolledCount=0;
}

Course::Course(string code,string name,int creditHours,Faculty* instructor,int maxCapacity)
{
    this->courseCode=code;
    this->courseName=name;
    this->creditHours=creditHours;

    this->instructor=instructor;

    this->maxCapacity=maxCapacity;
    this->enrolledCount=0;
}
Course::~Course()
{
}
string Course::getCourseCode() const
{
    return courseCode;
}
string Course::getCourseName() const
{
    return courseName;
}
int Course::getCreditHours() const
{
    return creditHours;
}
int Course::getEnrolledCount() const{
    return enrolledCount;
}

void Course::enrollStudent(Student* student){
    if(enrolledCount >= maxCapacity){
        throw CapacityExceededException();
    }

    enrolledStudents[enrolledCount]=student;
    enrolledCount++;
}

bool Course::operator==(const Course& other){
    return courseCode==other.courseCode;
}
Student** Course::operator+(Course& other){
    Student** mergedList=new Student*[MAX_STUDENTS * 2];

    int index=0;
    for(int i=0;i < enrolledCount;i++){
        mergedList[index++]=enrolledStudents[i];
    }
    for(int i=0;i < other.enrolledCount;i++){
        mergedList[index++]=other.enrolledStudents[i];
    }
    return mergedList
}
ostream& operator<<(ostream& out,const Course& course)
{
    cout<<"\n=========COURSE INFO=========\n";
    cout<<"Course Code: "<<course.courseCode<<endl;
     cout<<"Course Name: "<<course.courseName<<endl;
      cout<<"Credit Hours: "<<course.creditHours<<endl;
       cout<<"Enrolled Students: "<<course.enrolledCount<<endl;

       return out;
}






