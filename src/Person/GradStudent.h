#ifndef GRADSTUDENT_H
#define GRADSTUDENT_H

#include "Student.h"
class GradStudent:public Student
{
    private:
    string researchTopic;
    string supervisor;
    public:
    GradStudent(string name,string cnic,int age,string contact,string rollNo,int semester,float gpa,string researchTopic,string supervisor);

    virtual ~GradStudent();

    string getResearchTopic() const;
    string getSupervisor() const;
    
    void setResearchTopic(string researchTopic);
    void setSupervisor(string supervisor);

    void displayInfo() const override;
};
#endif