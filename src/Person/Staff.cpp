#include "Staff.h"
Staff::Staff():Person("","",0,"")
{
    staffID="";
    role="";
    salary=0;
}
Staff::Staff(string name,string cnic,int age,string contact,string staffID,string role,double salary):Person(name,cnic,age,contact){
    this->staffID=staffID;
    this->role=role;
    this->salary=salary;
}
Staff::~Staff()
{
}
string Staff::getStaffID() const
{
    return staffID;
}
string Staff::getRole() const
{
    return role;
}
double Staff::getSalary() const
{
    return salary;
}


void Staff::setRole(string role)
{
    this->role=role;
}
void Staff::setSalary(double salary)
{
    this->salary=salary;
}
void Staff::displayInfo() const
{
    cout<<"\n===========STAFF INFO===========\n";
    cout<<"Name: "<<name<<endl;
    cout<<"CNIC: "<<cnic<<endl;
    cout<<"Age: "<<age<<endl;
    cout<<"Contact: "<<contact<<endl;

    cout<<"Staff ID: "<<staffID<<endl;
    cout<<"Role: "<<role<<endl;
    cout<<"Salary: "<<salary<<endl;
}