#ifndef FACULTY_H
#define FACULTY_H
#include "Person.h"
class Faculty:public Person
{
    protected:
      string employeeID;
      string department;
      string designation;

      static const int MAX_COURSES=10;
      string assignedCourses[MAX_COURSES];
      int courseCount;
      public:
      Faculty();
        Faculty(string name,string cnic,int age,string contact,string employeeID,string department,string designaton);

        virtual ~Faculty();

        string getEmployeeID() const;
        string getDepartment() const;
        string getDesignation() const;

        void setDepartment(string department);
        void setDesignation(string designation);
        void assignCourse(string courseName);
        void displayInfo() const override;
};
#endif