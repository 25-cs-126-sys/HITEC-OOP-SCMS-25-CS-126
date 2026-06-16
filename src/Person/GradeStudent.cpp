#include "src\Person\GradStudent.h" 

GradStudent::GradStudent(string research, string supervisor) : Student() {
    this->researchTopic = research;
    this->supervisor = supervisor;
}

GradStudent::GradStudent(string name,string cnic,int age,string contact,string rollNo,int semester,float gpa,string researchTopic,string supervisor):Student(name,cnic,age,contact,rollNo,semester,gpa)
{
    this->researchTopic=researchTopic;
    this->supervisor=supervisor;
}
GradStudent::~GradStudent(){
}

string GradStudent::getResearchTopic()const
{
    return researchTopic;
}
string GradStudent::getSupervisor() const
{
return supervisor;
};

void GradStudent::setResearchTopic(string researchTopic){
    this->researchTopic=researchTopic;
}
void Gradstudent :: setSupervisor(string supervisor){
    this->supervisor=supervisor;
}
void GradStudent::displayInfo() const
{
    cout<<"\n===========GRAD STUDENT INFO==============\n";
    cout<<"Name: "<<name<<endl;
    cout<<"CNIC: "<<cnic<<endl;
    cout<<"Age: "<<age<<endl;
    cout<<"Contact:"<<contact<<endl;
    cout<<"Roll NO: "<<rollNo<<endl;
    cout<<"Semester: "<<semester<<endl;
    cout<<"GPA: "<<gpa<<endl;

    cout<<"Research Topic: "<<researchTopic<<endl;
    cout<<"Supervisor: "<<supervisor<<endl;
}
