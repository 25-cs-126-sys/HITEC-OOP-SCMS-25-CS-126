#include "Student.h"
#include<iostream>
Student::Student():Person("","",0,"")
{
    rollNo="";
    semester=1;
    gpa=0.0;
    courseCount=0;
}
Student::Student(string name,
 string cnic,
  int age,
string contact,string rollNo,int semester,float gpa)
:Person(name,cnic,age,contact)
                 {
                    this->rollNo=rollNo;
                    this->semester=semester;
                    this->gpa=gpa;
                    courseCount=0;
                 }
                 Student::~Student()
                {

                }
                string Student::getRollNo()const
                {
                    return rollNo;
                }
                int Student::getSemester()const
                {
                    return semester;
                }
                float Student::getGPA()const
                {
                    return gpa;
                }
                void Student::setSemester(int semester)
               {
                this->semester = semester;}
                void Student::setGPA(float gpa){
                    this->gpa=gpa;
                }
                void Student::addCourse(string courseName)
                {
                    if(courseCount<MAX_COURSES)
                    {
                        enrolledCourses[courseCount]=courseName;
                        courseCount++;
                    }
                }
                    char Student::calculateGrade() const
                    {
                        if(gpa >= 3.7)
                        return 'A';
                         else if(gpa >= 3.0)
                        return 'B';
                        else if(gpa >= 2.0)
                        return 'C';
                        else 
                            return 'F';
                    }
                    void Student::displayInfo() const
                    {
cout<<"\n---------Student Info------------\n";
cout<<"Name: "<<name<<endl;
cout<<"CNIC: "<<cnic<<endl;
cout<<"Age: "<<age<<endl;
cout<<"Contact: "<<contact<<endl;
cout<<"Roll No: "<<rollNo<<endl;
cout<<"Semester: "<<semester<<endl;
cout<<"GPA: "<<gpa<<endl;
cout<<"Grade: "<<calculateGrade()<<endl;
cout<<"\nCourses:\n";
for(int i=0;i<courseCount;i++)
{
cout<<i+1<<". "<<enrolledCourses[i]<<endl;
}

                    }
                
                