#ifndef STAFF_H
#define STAFF_H

#include "Person.h"
class Staff:public Person
{
    protected:
    string staffID;
    string role;
    double salary;

    public:
    Staff();
    Staff(string name,string cnic,int age,string contact,string staffID,string role,double salary);

    virtual ~Staff();

    string getStaffID() const;
    string getRole() const;
    double getSalary() const;

    void setRole(string role);
    void setSalary(double salary);

    void displayInfo() const override;

};
#endif