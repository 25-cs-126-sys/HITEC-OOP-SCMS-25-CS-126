#include "Faculty.h"
Faculty::Faculty():Person("","",0,"")
{
    employeeID="";
    department="";
    designation="";
    courseCount=0;
}
Faculty::Faculty(string name,string cnic,int age,string contact,string employeeID,string department,string designation):Person(name,cnic,age,contact)
{
    this->employeeID=employeeID;
    this->department=department;
    this->designation=designation;
    this->courseCount=0;
}
 Faculty::~Faculty()
 {
 }

 string Faculty::getEmployeeID() const
 {
    return employeeID;
 }
 string Faculty::getDepartment()const
 {
    return department;
 }
 string Faculty::getDesignation() const
 {
    return designation;
 }
 void Faculty::setDepartment(string department){
    this->department=department;
 }
 void Faculty::setDesignation(string designation)
 {
    this->designation=designation;
 }
 void Faculty::assignCourse(string courseName){
    if(courseCount<MAX_COURSES){
    assignedCourses[courseCount]=courseName;
    courseCount++;}
 }
 void Faculty::displayInfo() const
 {
     cout<<"\n========Faculty Info======\n";
     cout<<"Name: "<<name<<endl;
     cout<<"CNIC: "<<cnic<<endl;
     cout<<"Age: "<<age<<endl;
     cout<<"Contact: "<<contact<<endl;

      cout<<"Employee ID: "<<employeeID<<endl;
       cout<<"Department: "<<department<<endl;
        cout<<"Designation: "<<designation<<endl;
         cout<<"\nAssigned Courses:\n";
         if(courseCount==0)
         {
            cout<<"No Course Assigned"<<endl;
         }
         else{
            for(int i=0;i<courseCount;i++){
                cout<<i+1<<". "<<assignedCourses[i]<<endl;
            }
         }
 }